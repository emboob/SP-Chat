/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *messageLineEdit;
    QLineEdit *portLineEdit;
    QLineEdit *ipLineEdit;
    QLabel *label;
    QLabel *label_3;
    QPushButton *sendButton;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *connectButton;
    QListWidget *listWidget;
    QLineEdit *ipFileSendEdit;
    QLabel *label_5;
    QLineEdit *nicname;
    QPushButton *fileSendButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(688, 505);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 504, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        messageLineEdit = new QLineEdit(gridLayoutWidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 7, 2, 1, 2);

        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(portLineEdit, 1, 2, 1, 1);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(ipLineEdit, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        sendButton = new QPushButton(gridLayoutWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        gridLayout->addWidget(sendButton, 8, 0, 1, 4);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        connectButton = new QPushButton(gridLayoutWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setEnabled(true);
        connectButton->setAutoFillBackground(false);
        connectButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(connectButton, 0, 3, 3, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAutoScroll(false);
        listWidget->setAutoScrollMargin(3);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setMovement(QListView::Static);

        gridLayout->addWidget(listWidget, 6, 0, 1, 4);

        ipFileSendEdit = new QLineEdit(gridLayoutWidget);
        ipFileSendEdit->setObjectName(QString::fromUtf8("ipFileSendEdit"));

        gridLayout->addWidget(ipFileSendEdit, 9, 2, 1, 2);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        nicname = new QLineEdit(gridLayoutWidget);
        nicname->setObjectName(QString::fromUtf8("nicname"));

        gridLayout->addWidget(nicname, 2, 2, 1, 1);

        fileSendButton = new QPushButton(gridLayoutWidget);
        fileSendButton->setObjectName(QString::fromUtf8("fileSendButton"));

        gridLayout->addWidget(fileSendButton, 10, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "IP \354\243\274\354\206\214:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "\355\217\254\355\212\270:", 0, QApplication::UnicodeUTF8));
        sendButton->setText(QApplication::translate("Widget", "\354\240\204\354\206\241", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "\353\213\211\353\204\244\354\236\204", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "\353\251\224\354\204\270\354\247\200:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_ACCESSIBILITY
        connectButton->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        connectButton->setText(QApplication::translate("Widget", "\354\240\221\354\206\215", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Widget", "\355\214\214\354\235\274\354\240\204\354\206\241 IP:", 0, QApplication::UnicodeUTF8));
        fileSendButton->setText(QApplication::translate("Widget", "\355\214\214\354\235\274\354\240\204\354\206\241", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
