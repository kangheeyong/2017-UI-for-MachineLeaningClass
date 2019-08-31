/********************************************************************************
** Form generated from reading UI file 'aaaaa.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AAAAA_H
#define UI_AAAAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_aaaaa
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *aaaaa)
    {
        if (aaaaa->objectName().isEmpty())
            aaaaa->setObjectName(QString::fromUtf8("aaaaa"));
        aaaaa->resize(383, 285);
        buttonBox = new QDialogButtonBox(aaaaa);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(aaaaa);
        QObject::connect(buttonBox, SIGNAL(accepted()), aaaaa, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), aaaaa, SLOT(reject()));

        QMetaObject::connectSlotsByName(aaaaa);
    } // setupUi

    void retranslateUi(QDialog *aaaaa)
    {
        aaaaa->setWindowTitle(QApplication::translate("aaaaa", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aaaaa: public Ui_aaaaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AAAAA_H
