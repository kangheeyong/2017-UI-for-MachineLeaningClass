/********************************************************************************
** Form generated from reading UI file 'k_means_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_K_MEANS_SETTING_H
#define UI_K_MEANS_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_k_means_setting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *k_means_setting)
    {
        if (k_means_setting->objectName().isEmpty())
            k_means_setting->setObjectName(QString::fromUtf8("k_means_setting"));
        k_means_setting->resize(400, 300);
        verticalLayout = new QVBoxLayout(k_means_setting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(k_means_setting);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(k_means_setting);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(k_means_setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(k_means_setting);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(4);
        doubleSpinBox->setSingleStep(0.001000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(k_means_setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(k_means_setting);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        horizontalLayout_3->addWidget(doubleSpinBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(k_means_setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox_3 = new QDoubleSpinBox(k_means_setting);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        horizontalLayout_4->addWidget(doubleSpinBox_3);


        verticalLayout->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(k_means_setting);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(k_means_setting);
        QObject::connect(buttonBox, SIGNAL(accepted()), k_means_setting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), k_means_setting, SLOT(reject()));

        QMetaObject::connectSlotsByName(k_means_setting);
    } // setupUi

    void retranslateUi(QDialog *k_means_setting)
    {
        k_means_setting->setWindowTitle(QApplication::translate("k_means_setting", "Dialog", nullptr));
        label->setText(QApplication::translate("k_means_setting", "cluster", nullptr));
        label_2->setText(QApplication::translate("k_means_setting", "min error", nullptr));
        label_3->setText(QApplication::translate("k_means_setting", "min weught", nullptr));
        label_4->setText(QApplication::translate("k_means_setting", "max weight", nullptr));
    } // retranslateUi

};

namespace Ui {
    class k_means_setting: public Ui_k_means_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_K_MEANS_SETTING_H
