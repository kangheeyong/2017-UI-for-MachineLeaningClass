/********************************************************************************
** Form generated from reading UI file 'bp_setting.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BP_SETTING_H
#define UI_BP_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bp_setting
{
public:
    QVBoxLayout *verticalLayout_3;
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
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QSpinBox *spinBox_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spinBox_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *spinBox_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *bp_setting)
    {
        if (bp_setting->objectName().isEmpty())
            bp_setting->setObjectName(QString::fromUtf8("bp_setting"));
        bp_setting->resize(367, 363);
        verticalLayout_3 = new QVBoxLayout(bp_setting);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(bp_setting);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(bp_setting);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximum(500000);
        spinBox->setValue(5000);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(bp_setting);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(bp_setting);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(3);
        doubleSpinBox->setSingleStep(0.001000000000000);
        doubleSpinBox->setValue(0.200000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(bp_setting);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_2 = new QDoubleSpinBox(bp_setting);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(3);
        doubleSpinBox_2->setMinimum(0.000000000000000);
        doubleSpinBox_2->setMaximum(1.000000000000000);
        doubleSpinBox_2->setSingleStep(0.001000000000000);
        doubleSpinBox_2->setValue(0.001000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(bp_setting);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        spinBox_2 = new QSpinBox(bp_setting);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(2);
        spinBox_2->setMaximum(5);

        horizontalLayout_4->addWidget(spinBox_2);


        horizontalLayout_10->addLayout(horizontalLayout_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(bp_setting);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        spinBox_3 = new QSpinBox(bp_setting);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(1);

        horizontalLayout_5->addWidget(spinBox_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(bp_setting);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        spinBox_4 = new QSpinBox(bp_setting);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(1);

        horizontalLayout_6->addWidget(spinBox_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(bp_setting);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        spinBox_5 = new QSpinBox(bp_setting);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(1);

        horizontalLayout_7->addWidget(spinBox_5);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(bp_setting);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        spinBox_6 = new QSpinBox(bp_setting);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setMinimum(1);

        horizontalLayout_8->addWidget(spinBox_6);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(bp_setting);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        spinBox_7 = new QSpinBox(bp_setting);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setMinimum(1);

        horizontalLayout_9->addWidget(spinBox_7);


        verticalLayout_2->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_10);

        buttonBox = new QDialogButtonBox(bp_setting);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);

        buttonBox->raise();
        label->raise();
        spinBox->raise();
        label_2->raise();
        doubleSpinBox->raise();
        label_3->raise();
        doubleSpinBox_2->raise();
        label->raise();
        label_4->raise();
        spinBox_2->raise();
        label_4->raise();
        label_5->raise();
        spinBox_3->raise();
        label_6->raise();
        spinBox_4->raise();
        label_7->raise();
        spinBox_5->raise();
        label_8->raise();
        spinBox_6->raise();
        label_9->raise();
        spinBox_7->raise();

        retranslateUi(bp_setting);
        QObject::connect(buttonBox, SIGNAL(accepted()), bp_setting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), bp_setting, SLOT(reject()));

        QMetaObject::connectSlotsByName(bp_setting);
    } // setupUi

    void retranslateUi(QDialog *bp_setting)
    {
        bp_setting->setWindowTitle(QApplication::translate("bp_setting", "Dialog", nullptr));
        label->setText(QApplication::translate("bp_setting", "max epoch", nullptr));
        label_2->setText(QApplication::translate("bp_setting", "gain", nullptr));
        label_3->setText(QApplication::translate("bp_setting", "minimum error", nullptr));
        label_4->setText(QApplication::translate("bp_setting", "tatal layers", nullptr));
        label_5->setText(QApplication::translate("bp_setting", "input layer", nullptr));
        label_6->setText(QApplication::translate("bp_setting", "1st hidden", nullptr));
        label_7->setText(QApplication::translate("bp_setting", "2nd hidden", nullptr));
        label_8->setText(QApplication::translate("bp_setting", "3rd hidden ", nullptr));
        label_9->setText(QApplication::translate("bp_setting", "output layer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bp_setting: public Ui_bp_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BP_SETTING_H
