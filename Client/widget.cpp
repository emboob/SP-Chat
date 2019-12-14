#include "widget.h"
#include "ui_widget.h"
#include <QRegExp>
#include <QTcpSocket>
#include <time.h>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setLayout(ui->gridLayout);
    setWindowTitle("Chatting Client");
}

Widget::~Widget()
{
    delete ui;
    delete socket;
}

void Widget::readyRead()
{
    while(socket->canReadLine())
    {
        QString line=QString::fromUtf8(socket->readLine());
        line=line.left(line.length()-1);
        ui->listWidget->addItem(QString("%2").arg(line));
    }
    ui->listWidget->scrollToBottom();
}

void Widget::connected()
{
    socket->write(QString("A new user joined this chatting!!\nIP : "+ui->ipLineEdit->text()+" 닉네임 : "+ui->nicname->text()+"\n").toUtf8());
}



void Widget::on_connectButton_clicked()
{
    socket=new QTcpSocket(this);

    connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
    connect(socket,SIGNAL(connected()),this,SLOT(connected()));
    socket->connectToHost(ui->ipLineEdit->text(),ui->portLineEdit->text().toInt());
}

void Widget::on_sendButton_clicked()
{
    QString message=ui->messageLineEdit->text().trimmed();
    QString nic=ui->nicname->text().trimmed();
    ct = time(NULL);
    tm = *localtime(&ct);
    sprintf(strTime, "[%02d:%02d:%02d]", tm.tm_hour, tm.tm_min, tm.tm_sec);

    if(!message.isEmpty())
    {
        socket->write(QString(strTime+nic+"> "+message+"\n").toUtf8());
    }
    ui->messageLineEdit->clear();
    ui->messageLineEdit->setFocus();
}

void Widget::on_fileSendButton_clicked()
{
}

void Widget::on_messageLineEdit_returnPressed()
{
    on_sendButton_clicked();
}
