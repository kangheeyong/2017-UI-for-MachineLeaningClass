/********************************************************************************
** Form generated from reading UI file 'lord.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LORD_H
#define UI_LORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Lord
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Lord)
    {
        if (Lord->objectName().isEmpty())
            Lord->setObjectName(QString::fromUtf8("Lord"));
        Lord->resize(400, 300);
        verticalLayout = new QVBoxLayout(Lord);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(Lord);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(Lord);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        buttonBox = new QDialogButtonBox(Lord);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Lord);
        QObject::connect(buttonBox, SIGNAL(accepted()), Lord, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Lord, SLOT(reject()));

        QMetaObject::connectSlotsByName(Lord);
    } // setupUi

    void retranslateUi(QDialog *Lord)
    {
        Lord->setWindowTitle(QApplication::translate("Lord", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Lord", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lord: public Ui_Lord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LORD_H
