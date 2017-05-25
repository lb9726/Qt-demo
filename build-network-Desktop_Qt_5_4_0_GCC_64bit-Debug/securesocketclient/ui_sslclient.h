/********************************************************************************
** Form generated from reading UI file 'sslclient.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSLCLIENT_H
#define UI_SSLCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *hostNameLabel;
    QLineEdit *hostNameEdit;
    QLabel *portLabel;
    QSpinBox *portBox;
    QLabel *label;
    QPushButton *connectButton;
    QHBoxLayout *hboxLayout;
    QLabel *cipherText;
    QLabel *cipherLabel;
    QTextEdit *sessionOutput;
    QHBoxLayout *hboxLayout1;
    QLabel *sessionInputLabel;
    QLineEdit *sessionInput;
    QPushButton *sendButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(343, 320);
        gridLayout = new QGridLayout(Form);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        hostNameLabel = new QLabel(Form);
        hostNameLabel->setObjectName(QStringLiteral("hostNameLabel"));

        gridLayout1->addWidget(hostNameLabel, 0, 0, 1, 1);

        hostNameEdit = new QLineEdit(Form);
        hostNameEdit->setObjectName(QStringLiteral("hostNameEdit"));

        gridLayout1->addWidget(hostNameEdit, 0, 1, 1, 1);

        portLabel = new QLabel(Form);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        gridLayout1->addWidget(portLabel, 1, 0, 1, 1);

        portBox = new QSpinBox(Form);
        portBox->setObjectName(QStringLiteral("portBox"));
        portBox->setMinimum(1);
        portBox->setMaximum(65535);
        portBox->setValue(443);

        gridLayout1->addWidget(portBox, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 2);

        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        connectButton = new QPushButton(Form);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setEnabled(true);
        connectButton->setDefault(true);

        gridLayout->addWidget(connectButton, 1, 1, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        cipherText = new QLabel(Form);
        cipherText->setObjectName(QStringLiteral("cipherText"));
        cipherText->setWordWrap(true);

        hboxLayout->addWidget(cipherText);

        cipherLabel = new QLabel(Form);
        cipherLabel->setObjectName(QStringLiteral("cipherLabel"));
        cipherLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cipherLabel->setWordWrap(true);

        hboxLayout->addWidget(cipherLabel);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 2);

        sessionOutput = new QTextEdit(Form);
        sessionOutput->setObjectName(QStringLiteral("sessionOutput"));
        sessionOutput->setEnabled(false);
        sessionOutput->setFocusPolicy(Qt::StrongFocus);
        sessionOutput->setReadOnly(true);

        gridLayout->addWidget(sessionOutput, 3, 0, 1, 2);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        sessionInputLabel = new QLabel(Form);
        sessionInputLabel->setObjectName(QStringLiteral("sessionInputLabel"));

        hboxLayout1->addWidget(sessionInputLabel);

        sessionInput = new QLineEdit(Form);
        sessionInput->setObjectName(QStringLiteral("sessionInput"));
        sessionInput->setEnabled(false);

        hboxLayout1->addWidget(sessionInput);

        sendButton = new QPushButton(Form);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setEnabled(false);
        sendButton->setFocusPolicy(Qt::TabFocus);
        sendButton->setDefault(true);

        hboxLayout1->addWidget(sendButton);


        gridLayout->addLayout(hboxLayout1, 4, 0, 1, 2);


        retranslateUi(Form);
        QObject::connect(hostNameEdit, SIGNAL(returnPressed()), connectButton, SLOT(animateClick()));
        QObject::connect(sessionInput, SIGNAL(returnPressed()), sendButton, SLOT(animateClick()));

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Secure Socket Client", 0));
        hostNameLabel->setText(QApplication::translate("Form", "Host name:", 0));
        hostNameEdit->setText(QApplication::translate("Form", "www.qt.io", 0));
        portLabel->setText(QApplication::translate("Form", "Port:", 0));
        label->setText(QApplication::translate("Form", "Active session", 0));
        connectButton->setText(QApplication::translate("Form", "Connect to host", 0));
        cipherText->setText(QApplication::translate("Form", "Cryptographic Cipher:", 0));
        cipherLabel->setText(QApplication::translate("Form", "<none>", 0));
        sessionOutput->setHtml(QApplication::translate("Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></body></html>", 0));
        sessionInputLabel->setText(QApplication::translate("Form", "Input:", 0));
        sendButton->setText(QApplication::translate("Form", "&Send", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSLCLIENT_H
