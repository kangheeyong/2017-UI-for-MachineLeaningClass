/********************************************************************************
** Form generated from reading UI file 'som_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOM_SETTING_H
#define UI_SOM_SETTING_H

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

class Ui_som_setting
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *som_setting)
    {
        if (som_setting->objectName().isEmpty())
            som_setting->setObjectName(QString::fromUtf8("som_setting"));
        som_setting->resize(400, 300);
        verticalLayout = new QVBoxLayout(som_setting);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(som_setting);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(som_setting);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(som_setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        spinBox_2 = new QSpinBox(som_setting);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_2->addWidget(spinBox_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(som_setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(som_setting);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout_3->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(som_setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(som_setting);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));

        horizontalLayout_4->addWidget(doubleSpinBox_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(som_setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        doubleSpinBox_3 = new QDoubleSpinBox(som_setting);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));

        horizontalLayout_5->addWidget(doubleSpinBox_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(som_setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        doubleSpinBox_4 = new QDoubleSpinBox(som_setting);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));

        horizontalLayout_6->addWidget(doubleSpinBox_4);


        verticalLayout->addLayout(horizontalLayout_6);

        buttonBox = new QDialogButtonBox(som_setting);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        buttonBox->raise();
        label->raise();
        spinBox->raise();
        label_2->raise();
        spinBox_2->raise();
        label_3->raise();
        doubleSpinBox->raise();
        label_4->raise();
        doubleSpinBox_2->raise();
        spinBox->raise();
        label_5->raise();
        doubleSpinBox_3->raise();
        doubleSpinBox_4->raise();
        label_6->raise();

        retranslateUi(som_setting);
        QObject::connect(buttonBox, SIGNAL(accepted()), som_setting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), som_setting, SLOT(reject()));

        QMetaObject::connectSlotsByName(som_setting);
    } // setupUi

    void retranslateUi(QDialog *som_setting)
    {
        som_setting->setWindowTitle(QApplication::translate("som_setting", "Dialog", nullptr));
        label->setText(QApplication::translate("som_setting", "cluster", nullptr));
        label_2->setText(QApplication::translate("som_setting", "max epoch", nullptr));
        label_3->setText(QApplication::translate("som_setting", "gain", nullptr));
        label_4->setText(QApplication::translate("som_setting", "distance gain", nullptr));
        label_5->setText(QApplication::translate("som_setting", "weight min", nullptr));
        label_6->setText(QApplication::translate("som_setting", "weight max", nullptr));
    } // retranslateUi

};

namespace Ui {
    class som_setting: public Ui_som_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOM_SETTING_H
