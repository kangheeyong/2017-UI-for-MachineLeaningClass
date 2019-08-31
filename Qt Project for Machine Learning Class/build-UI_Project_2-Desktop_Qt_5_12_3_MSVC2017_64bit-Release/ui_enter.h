/********************************************************************************
** Form generated from reading UI file 'enter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTER_H
#define UI_ENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_enter
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *BP_Button;
    QPushButton *pushButton;
    QPushButton *SOM_Button;
    QPushButton *CNN_Button;

    void setupUi(QDialog *enter)
    {
        if (enter->objectName().isEmpty())
            enter->setObjectName(QString::fromUtf8("enter"));
        enter->resize(400, 300);
        verticalLayout = new QVBoxLayout(enter);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        BP_Button = new QPushButton(enter);
        BP_Button->setObjectName(QString::fromUtf8("BP_Button"));

        verticalLayout->addWidget(BP_Button);

        pushButton = new QPushButton(enter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        SOM_Button = new QPushButton(enter);
        SOM_Button->setObjectName(QString::fromUtf8("SOM_Button"));

        verticalLayout->addWidget(SOM_Button);

        CNN_Button = new QPushButton(enter);
        CNN_Button->setObjectName(QString::fromUtf8("CNN_Button"));

        verticalLayout->addWidget(CNN_Button);


        retranslateUi(enter);

        QMetaObject::connectSlotsByName(enter);
    } // setupUi

    void retranslateUi(QDialog *enter)
    {
        enter->setWindowTitle(QApplication::translate("enter", "ICRL", nullptr));
        BP_Button->setText(QApplication::translate("enter", "BP", nullptr));
        pushButton->setText(QApplication::translate("enter", "K-Means", nullptr));
        SOM_Button->setText(QApplication::translate("enter", "SOM", nullptr));
        CNN_Button->setText(QApplication::translate("enter", "CNN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class enter: public Ui_enter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTER_H
