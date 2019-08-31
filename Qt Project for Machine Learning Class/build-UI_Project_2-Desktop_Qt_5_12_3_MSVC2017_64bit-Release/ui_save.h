/********************************************************************************
** Form generated from reading UI file 'save.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVE_H
#define UI_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Save
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Save)
    {
        if (Save->objectName().isEmpty())
            Save->setObjectName(QString::fromUtf8("Save"));
        Save->resize(400, 300);
        verticalLayout = new QVBoxLayout(Save);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Save);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(Save);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(Save);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Save);
        QObject::connect(buttonBox, SIGNAL(accepted()), Save, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Save, SLOT(reject()));

        QMetaObject::connectSlotsByName(Save);
    } // setupUi

    void retranslateUi(QDialog *Save)
    {
        Save->setWindowTitle(QApplication::translate("Save", "Dialog", nullptr));
        label->setText(QApplication::translate("Save", "Filename ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Save: public Ui_Save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVE_H
