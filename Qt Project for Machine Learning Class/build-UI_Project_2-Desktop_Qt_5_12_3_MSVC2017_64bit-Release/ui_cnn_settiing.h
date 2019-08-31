/********************************************************************************
** Form generated from reading UI file 'cnn_settiing.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNN_SETTIING_H
#define UI_CNN_SETTIING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_cnn_settiing
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *cnn_settiing)
    {
        if (cnn_settiing->objectName().isEmpty())
            cnn_settiing->setObjectName(QString::fromUtf8("cnn_settiing"));
        cnn_settiing->resize(400, 300);
        verticalLayout = new QVBoxLayout(cnn_settiing);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(cnn_settiing);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(cnn_settiing);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(cnn_settiing);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(cnn_settiing);
        QObject::connect(buttonBox, SIGNAL(accepted()), cnn_settiing, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), cnn_settiing, SLOT(reject()));

        QMetaObject::connectSlotsByName(cnn_settiing);
    } // setupUi

    void retranslateUi(QDialog *cnn_settiing)
    {
        cnn_settiing->setWindowTitle(QApplication::translate("cnn_settiing", "Dialog", nullptr));
        label->setText(QApplication::translate("cnn_settiing", "cluster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cnn_settiing: public Ui_cnn_settiing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNN_SETTIING_H
