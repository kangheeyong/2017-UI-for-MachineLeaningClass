#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "input_read.h"
#include "weight_setting.h"
#include "save.h"
#include <QThread>
#include "lord.h"

static MY_CNN cnn;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    LeaningOrTesting = 0;
    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->pushButton_start->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    cnn.init(4);
    ui->progressBar->setValue(0);




}

MainWindow::~MainWindow()
{
    delete ui;
}


void cnn_thread()
{
    cnn.learning();
}
void MainWindow::on_pushButton_start_clicked()
{

    ui->progressBar->setValue(0);
    if(LeaningOrTesting == 1) // 학습
    {
        int num,centroid_k;
        cnn.cluster = cluster;

        QFuture<void> future = QtConcurrent :: run(cnn_thread);
        while(1)
        {
            centroid_k = cnn.centroid_k;
            num = centroid_k / (double)cluster * 100;
            QThread :: msleep(100);
            if(num > 100) num = 100;
            ui->progressBar->setValue(num);
            if(centroid_k > cluster) break;
        }
        QThread :: msleep(100);

        cnn.write_setting("setting.txt");
        cnn.write_weight("weight.txt");
        cnn.write_result("result.txt");


        QFile file("weight.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();
        ui->textBrowser_2->append("epoch : " + QString :: number(cnn.setting(1,0)));
        ui->textBrowser_2->append("Mean Squred Error : " + QString :: number(cnn.setting(2,0)));
        ui->textBrowser_2->append("\nresult weight\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();

        ui->SaveButton->setDisabled(false);
    }
    else //test
    {
        cnn.testing();
        ui->progressBar->setValue(100);
        cnn.write_result("result.txt");


        QFile file("result.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();

        ui->textBrowser_2->append("\nresult\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();

        ui->SaveButton->setDisabled(true);


    }

    ui->textBrowser->append(" ");
    ui->textBrowser->append("finish!!!");
    ui->textBrowser->append(" ");

}

void MainWindow::on_inputButton_clicked()
{
    Input_Read w;
    w.exec();
    input_name = w.get_read_path();
    if(input_name != NULL)
    {
        QByteArray byteBuffer = input_name.toLocal8Bit();
        cnn.read_input(byteBuffer.data());
        if(LeaningOrTesting == 1)
        {
            ui->settingButton->setDisabled(false);
            ui->learningButton->setDisabled(true);
            ui->testingButton->setDisabled(true);
            ui->pushButton_start->setDisabled(true);
            ui->textBrowser->clear();
        }
        else
        {
            ui->testingButton->setDisabled(false);
        }
        ui->textBrowser_2->clear();

        ui->textBrowser->append(" ");
        ui->textBrowser->append("File Path : " + input_name);
        ui->textBrowser->append("File Type : .txt");
        ui->textBrowser->append("Row : " + QString :: number(cnn.origin.get_row()));
        ui->textBrowser->append("Column : " + QString :: number(cnn.origin.get_column()));
        ui->textBrowser->append(" ");


        ui->progressBar->setValue(0);
        //  w_input.show();
    }
}

void MainWindow::on_settingButton_clicked()
{
    Weight_Setting w;
    w.exec();
    cluster = w.get_cluster();
    ui->textBrowser->append("cluster : " + QString :: number(cluster));
    ui->textBrowser->append(" ");


    ui->learningButton->setDisabled(false);
}

void MainWindow::on_learningButton_clicked()
{
    //  LeaningOrTesting = 1;
    // ui->learningButton->setDisabled(false);
    ui->textBrowser->append("now ready to learn");
    ui->pushButton_start->setDisabled(false);

}

void MainWindow::on_testingButton_clicked()
{
    //  LeaningOrTesting = 2;
    // ui->pushButton_start->setDisabled(false);
    if(cnn.origin.get_row() == cnn.weight.get_row())
    {
        ui->textBrowser->append("now ready to test");
        ui->pushButton_start->setDisabled(false);
    }
    else
    {
        ui->textBrowser->append("the dimensions are unmatched");
    }

}

void MainWindow::on_NewButton_clicked()
{

    LeaningOrTesting = 1;
    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->pushButton_start->setDisabled(true);
    ui->settingButton->setDisabled(true);
    cnn.init(4);
    ui->progressBar->setValue(0);
    ui->SaveButton->setDisabled(true);
    ui->textBrowser_2->clear();
    ui->textBrowser->clear();
}

void MainWindow::on_LoadButton_clicked()
{
    LeaningOrTesting = 2;
    ui->SaveButton->setDisabled(true);
    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->pushButton_start->setDisabled(true);
    ui->textBrowser_2->clear();
    ui->textBrowser->clear();
    ui->progressBar->setValue(0);
    cnn.init(4);
    Lord w;
    w.exec();

    QString temp = w.get_read_path();
    if(temp != NULL)
    {
        temp = temp + "/" +"weight.txt";
        QByteArray byteBuffer = temp.toLocal8Bit();
        cnn.read_weight(byteBuffer.data());
        QFile file(temp);
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser->clear();

        ui->textBrowser->append("\nresult weight\n");
        ui->textBrowser->append(file.readAll());
        file.close();
    }

}

void MainWindow::on_SaveButton_clicked()
{
    Save w;
    w.exec();
    project_name = w.get_filename();
    if(project_name != NULL)
    {
        dir.mkdir("output_data/" + project_name+ ".CNN");
        QString temp;

        temp = "output_data/" + project_name+ ".CNN/" +"input.txt";
        QByteArray byteBuffer = temp.toLocal8Bit();
        cnn.write_input(byteBuffer.data());

        temp = "output_data/" + project_name+ ".CNN/" +"weight.txt";
        byteBuffer = temp.toLocal8Bit();
        cnn.write_weight(byteBuffer.data());

        temp = "output_data/" + project_name+ ".CNN/" +"setting.txt";
        byteBuffer = temp.toLocal8Bit();
        cnn.write_setting(byteBuffer.data());
    }


}
