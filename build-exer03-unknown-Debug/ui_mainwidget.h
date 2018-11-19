/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCharts/QChartView>

#include <QtCharts/chartsnamespace.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QtCharts::QChartView *chartview;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbTemp;
    QRadioButton *rbAQI;
    QPushButton *savechart;
    QPushButton *btnStart;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbShowPoint;
    QCheckBox *cbLegendBold;
    QCheckBox *cbLegendItalic;
    QPushButton *btnLegendAlign;
    QComboBox *comboMonth;
    QLabel *label;
    QComboBox *comboCity;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(745, 588);
        mainWidget->setMouseTracking(false);
        chartview = new QtCharts::QChartView(mainWidget);
        chartview->setObjectName(QStringLiteral("chartview"));
        chartview->setGeometry(QRect(11, 11, 588, 566));
        label_2 = new QLabel(mainWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(590, 30, 72, 15));
        groupBox_2 = new QGroupBox(mainWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(590, 290, 111, 84));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        rbTemp = new QRadioButton(groupBox_2);
        rbTemp->setObjectName(QStringLiteral("rbTemp"));

        verticalLayout->addWidget(rbTemp);

        rbAQI = new QRadioButton(groupBox_2);
        rbAQI->setObjectName(QStringLiteral("rbAQI"));

        verticalLayout->addWidget(rbAQI);

        savechart = new QPushButton(mainWidget);
        savechart->setObjectName(QStringLiteral("savechart"));
        savechart->setGeometry(QRect(590, 410, 93, 28));
        btnStart = new QPushButton(mainWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(590, 380, 93, 28));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnStart->sizePolicy().hasHeightForWidth());
        btnStart->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(mainWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(590, 130, 126, 145));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        cbShowPoint = new QCheckBox(groupBox);
        cbShowPoint->setObjectName(QStringLiteral("cbShowPoint"));
        cbShowPoint->setChecked(true);

        verticalLayout_2->addWidget(cbShowPoint);

        cbLegendBold = new QCheckBox(groupBox);
        cbLegendBold->setObjectName(QStringLiteral("cbLegendBold"));

        verticalLayout_2->addWidget(cbLegendBold);

        cbLegendItalic = new QCheckBox(groupBox);
        cbLegendItalic->setObjectName(QStringLiteral("cbLegendItalic"));

        verticalLayout_2->addWidget(cbLegendItalic);

        btnLegendAlign = new QPushButton(groupBox);
        btnLegendAlign->setObjectName(QStringLiteral("btnLegendAlign"));

        verticalLayout_2->addWidget(btnLegendAlign);

        comboMonth = new QComboBox(mainWidget);
        comboMonth->setObjectName(QStringLiteral("comboMonth"));
        comboMonth->setGeometry(QRect(590, 100, 87, 21));
        label = new QLabel(mainWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(590, 80, 60, 16));
        comboCity = new QComboBox(mainWidget);
        comboCity->setObjectName(QStringLiteral("comboCity"));
        comboCity->setGeometry(QRect(590, 50, 87, 21));

        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "\345\256\236\351\252\214\344\270\211 \347\275\221\347\273\234\346\225\260\346\215\256\350\216\267\345\217\226\344\270\216\346\230\276\347\244\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\345\237\216\345\270\202", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("mainWidget", "\346\237\245\350\257\242\351\200\211\351\241\271", Q_NULLPTR));
        rbTemp->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242\346\260\224\345\200\231", Q_NULLPTR));
        rbAQI->setText(QApplication::translate("mainWidget", "\346\237\245\350\257\242AQI", Q_NULLPTR));
        savechart->setText(QApplication::translate("mainWidget", "\344\277\235\345\255\230", Q_NULLPTR));
        btnStart->setText(QApplication::translate("mainWidget", "\345\274\200\345\247\213", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("mainWidget", "\351\200\211\351\241\271", Q_NULLPTR));
        cbShowPoint->setText(QApplication::translate("mainWidget", "\346\230\276\347\244\272\346\225\260\346\215\256\347\202\271", Q_NULLPTR));
        cbLegendBold->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\347\262\227\344\275\223", Q_NULLPTR));
        cbLegendItalic->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250\346\226\234\344\275\223", Q_NULLPTR));
        btnLegendAlign->setText(QApplication::translate("mainWidget", "\345\233\276\346\263\250(\345\272\225)", Q_NULLPTR));
        label->setText(QApplication::translate("mainWidget", "\351\200\211\346\213\251\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
