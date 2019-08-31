#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    w_enter.exec();
    algorithm_num = w_enter.get_enter_num();

    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->error_Button->setDisabled(true);
    ui->TwoByTwo_Button->setDisabled(true);

    ui->progressBar->setValue(0);

    chart = NULL;
    chartView =NULL;
    scatter_series = NULL;

    input_name.clear();
    learning_ready = 0;
    input_dimention = 2;
    setting_dimeintion = 2;
    learn_or_test = 0;
    testing_ready = 0;


    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        som = new MY_SOM;
        connect(som, SIGNAL(get_percent(double)), this, SLOT(get_pertent(double)));
        connect(som, SIGNAL(get_finished()), this, SLOT(learning_finished()));
    }
    else if(algorithm_num == 3)
    {
        cnn = new MY_CNN;
        connect(cnn, SIGNAL(get_percent(double)), this, SLOT(get_pertent(double)));
        connect(cnn, SIGNAL(get_finished()), this, SLOT(learning_finished()));
    }
    else
    {
        ui->LoadButton->setDisabled(true);
        ui->NewButton->setDisabled(true);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        delete som;
    }
    else
    {
        delete cnn;
    }
}

void MainWindow::on_inputButton_clicked()
{
    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->TwoByTwo_Button->setDisabled(true);

    if(learn_or_test == 0)
    {
        input_name.clear();
        ui->textBrowser->clear();
        ui->settingButton->setDisabled(false);
        ui->testingButton->setDisabled(true);
        ui->error_Button->setDisabled(true);
        ui->TwoByTwo_Button->setDisabled(true);
    }
    else
    {
        ui->settingButton->setDisabled(true);
        ui->testingButton->setDisabled(false);
        if(algorithm_num == 1)
        {
            ui->error_Button->setDisabled(false);
        }
        else
        {
            if(setting_dimeintion == 2)
            {
                ui->error_Button->setDisabled(true);

            }
            else
            {
                ui->error_Button->setDisabled(true);

            }
        }
    }

    w_input.exec();
    input_name = w_input.get_file_name();

    if(input_name.isEmpty() != 1)
    {
        if(algorithm_num == 1) ;// BP
        else if(algorithm_num == 2 )
        {
            QByteArray byteBuffer = input_name.toLocal8Bit();
            som->read_input(byteBuffer.data());
            ui->textBrowser_2->clear();

            ui->textBrowser->append(" ");
            ui->textBrowser->append("File Path : " + input_name);
            ui->textBrowser->append("Row : " + QString :: number(som->origin.get_row()));
            ui->textBrowser->append("Column : " + QString :: number(som->origin.get_column()));
            ui->textBrowser->append(" ");
        }
        else
        {
            QByteArray byteBuffer = input_name.toLocal8Bit();
            cnn->read_input(byteBuffer.data());
            ui->textBrowser_2->clear();

            ui->textBrowser->append(" ");
            ui->textBrowser->append("File Path : " + input_name);
            ui->textBrowser->append("Row : " + QString :: number(cnn->origin.get_row()));
            ui->textBrowser->append("Column : " + QString :: number(cnn->origin.get_column()));
            ui->textBrowser->append(" ");
        }
    }
    else
    {
        ui->settingButton->setDisabled(true);
        ui->testingButton->setDisabled(true);

        if(learn_or_test == 0)ui->textBrowser->clear();
    }
}

void MainWindow::on_settingButton_clicked()
{

    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(false);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(false);
    ui->testingButton->setDisabled(true);
    ui->error_Button->setDisabled(true);
    ui->TwoByTwo_Button->setDisabled(true);

    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        som_setting w_som_setting;
        w_som_setting.exec();
        if(w_som_setting.status == 0) ui->learningButton->setDisabled(true);
        else
        {
            som->init(w_som_setting.cluster,w_som_setting.max_epoch,w_som_setting.gain,w_som_setting.distance_gain,w_som_setting.weight_min,w_som_setting.weight_max);
            ui->textBrowser->append("cluster : " + QString :: number(w_som_setting.cluster));
            ui->textBrowser->append("max epoch : " + QString :: number(w_som_setting.max_epoch));
            ui->textBrowser->append("gain : " + QString :: number(w_som_setting.gain));
            ui->textBrowser->append("distance gain : " + QString :: number(w_som_setting.distance_gain));
            ui->textBrowser->append("weight min : " + QString :: number(w_som_setting.weight_min));
            ui->textBrowser->append("weight max : " + QString :: number(w_som_setting.weight_max));
            ui->textBrowser->append(" ");
        }
    }
    else
    {
        cnn_settiing w_cnn_settiing;
        w_cnn_settiing.exec();
        cluster = w_cnn_settiing.get_cluster();
        if(cluster == -1)
        {
            ui->learningButton->setDisabled(true);
        }
        else
        {
            cnn->cluster = cluster;
            ui->textBrowser->append("cluster : " + QString :: number(cluster));
            ui->textBrowser->append(" ");

        }
    }
}

void MainWindow::on_learningButton_clicked()
{


    //input_dimention = 0;
    //setting_dimeintion = 1;
    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        setting_dimeintion = input_dimention = som->origin.get_row();
    }
    else
    {
        setting_dimeintion = input_dimention = cnn->origin.get_row();
    }

    if(input_dimention == setting_dimeintion) learning_ready = 1;
    else learning_ready = 0;

    if(learning_ready == 1)
    {
        ui->textBrowser->append("now ready to learn");

        ui->inputButton->setDisabled(false);
        ui->learningButton->setDisabled(false);
        ui->LoadButton->setDisabled(false);
        ui->NewButton->setDisabled(false);
        ui->pushButton_start->setDisabled(false);
        ui->SaveButton->setDisabled(true);
        ui->settingButton->setDisabled(false);
        ui->testingButton->setDisabled(true);
        ui->error_Button->setDisabled(true);
        ui->TwoByTwo_Button->setDisabled(true);
    }
    else
    {
        ui->textBrowser->append("something is wrong");
    }
}

void MainWindow::on_testingButton_clicked()
{

    //input_dimention = 0;
    //setting_dimeintion = 1;
    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 ) input_dimention = som->origin.get_row();
    else input_dimention = cnn->origin.get_row();

    if(input_dimention == setting_dimeintion) testing_ready = 1;
    else testing_ready = 0;

    if(testing_ready == 1)
    {
        ui->textBrowser->append("now ready to test");

        ui->inputButton->setDisabled(false);
        ui->learningButton->setDisabled(true);
        ui->LoadButton->setDisabled(false);
        ui->NewButton->setDisabled(false);
        ui->pushButton_start->setDisabled(false);
        ui->SaveButton->setDisabled(true);
        ui->settingButton->setDisabled(true);
        ui->testingButton->setDisabled(true);
        ui->TwoByTwo_Button->setDisabled(true);
        if(algorithm_num == 1)
        {
            ui->error_Button->setDisabled(false);
        }
        else
        {
            if(setting_dimeintion == 2)
            {
                ui->error_Button->setDisabled(true);
            }
            else
            {
                ui->error_Button->setDisabled(true);

            }
        }
    }
    else
    {
        ui->textBrowser->append("something is wrong");
    }
}

void MainWindow::on_pushButton_start_clicked()
{
    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(true);
    ui->NewButton->setDisabled(true);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->error_Button->setDisabled(true);
    ui->TwoByTwo_Button->setDisabled(true);
    ui->textBrowser->append("start!!");

    if(learn_or_test == 0)
    {
        if(algorithm_num == 1) ;// BP
        else if(algorithm_num == 2 ) som->start();
        else cnn->start();
    }
    else
    {
        if(algorithm_num == 1) ;// BP
        else if(algorithm_num == 2 )
        {
            som->testing();
            tesing_finished();
            ui->progressBar->setValue(100);
        }
        else
        {
            cnn->testing();
            tesing_finished();
            ui->progressBar->setValue(100);
        }
    }


}
void MainWindow:: get_pertent(double value)
{
    ui->progressBar->setValue(value*100);
}

void MainWindow:: learning_finished()
{
    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(false);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    if(algorithm_num == 1)
    {
        ui->error_Button->setDisabled(false);
        ui->TwoByTwo_Button->setDisabled(true);
    }
    else
    {
        if(setting_dimeintion == 2)
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(false);
        }
        else
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(true);
        }
    }

    ui->textBrowser->append("finished!!");
    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        som->write_setting("setting.txt");
        som->write_weight("weight.txt");
        som->write_result("result.txt");

        QFile file("weight.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();
        ui->textBrowser_2->append("Mean Squred Error : " + QString :: number(som->setting(4,0)));
        ui->textBrowser_2->append("\nresult weight\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();
    }
    else
    {
        cnn->write_setting("setting.txt");
        cnn->write_weight("weight.txt");
        cnn->write_result("result.txt");

        QFile file("weight.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();
        ui->textBrowser_2->append("epoch : " + QString :: number(cnn->setting(1,0)));
        ui->textBrowser_2->append("Mean Squred Error : " + QString :: number(cnn->setting(2,0)));
        ui->textBrowser_2->append("\nresult weight\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();


    }

}
void MainWindow:: tesing_finished()
{
    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    if(algorithm_num == 1)
    {
        ui->error_Button->setDisabled(false);
        ui->TwoByTwo_Button->setDisabled(true);
    }
    else
    {
        if(setting_dimeintion == 2)
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(false);
        }
        else
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(true);
        }
    }

    ui->textBrowser->append("finished!!");
    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        som->write_result("result.txt");

        QFile file("result.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();

        ui->textBrowser_2->append("Mean Squred Error : " + QString :: number(som->MSE));
        ui->textBrowser_2->append("\nresult\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();
    }
    else
    {
        cnn->write_result("result.txt");

        QFile file("result.txt");
        file.open(QIODevice :: ReadOnly);
        ui->textBrowser_2->clear();

        ui->textBrowser_2->append("Mean Squred Error : " + QString :: number(cnn->MSE));
        ui->textBrowser_2->append("\nresult\n");
        ui->textBrowser_2->append(file.readAll());
        file.close();

    }

}
void MainWindow::on_NewButton_clicked()
{
    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->error_Button->setDisabled(true);
    ui->TwoByTwo_Button->setDisabled(true);
    ui->progressBar->setValue(0);

    learn_or_test = 0;
    input_name.clear();
    ui->textBrowser->clear();
    ui->textBrowser_2->clear();
}

void MainWindow::on_SaveButton_clicked()
{
    ui->inputButton->setDisabled(true);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(false);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    if(algorithm_num == 1)
    {
        ui->error_Button->setDisabled(false);
        ui->TwoByTwo_Button->setDisabled(true);
    }
    else
    {
        if(setting_dimeintion == 2)
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(false);
        }
        else
        {
            ui->error_Button->setDisabled(true);
            ui->TwoByTwo_Button->setDisabled(true);
        }
    }

    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        Save save_w;
        save_w.exec();
        project_name = save_w.get_filename();
        if(project_name.isEmpty() != 1)
        {
            QDir dir;
            dir.mkdir("output_data.SOM/" + project_name+ ".SOM");
            QString temp;

            temp = "output_data.SOM/" + project_name+ ".SOM/" +"result.txt";
            QByteArray byteBuffer = temp.toLocal8Bit();
            som->write_result(byteBuffer.data());

            temp = "output_data.SOM/" + project_name+ ".SOM/" +"weight.txt";
            byteBuffer = temp.toLocal8Bit();
            som->write_weight(byteBuffer.data());

            temp = "output_data.SOM/" + project_name+ ".SOM/" +"setting.txt";
            byteBuffer = temp.toLocal8Bit();
            som->write_setting(byteBuffer.data());
        }
    }
    else
    {
        Save save_w;
        save_w.exec();
        project_name = save_w.get_filename();
        if(project_name.isEmpty() != 1)
        {
            QDir dir;
            dir.mkdir("output_data.CNN/" + project_name+ ".CNN");
            QString temp;

            temp = "output_data.CNN/" + project_name+ ".CNN/" +"result.txt";
            QByteArray byteBuffer = temp.toLocal8Bit();
            cnn->write_result(byteBuffer.data());

            temp = "output_data.CNN/" + project_name+ ".CNN/" +"weight.txt";
            byteBuffer = temp.toLocal8Bit();
            cnn->write_weight(byteBuffer.data());

            temp = "output_data.CNN/" + project_name+ ".CNN/" +"setting.txt";
            byteBuffer = temp.toLocal8Bit();
            cnn->write_setting(byteBuffer.data());
        }
    }
}

void MainWindow::on_LoadButton_clicked()
{
    ui->inputButton->setDisabled(false);
    ui->learningButton->setDisabled(true);
    ui->LoadButton->setDisabled(false);
    ui->NewButton->setDisabled(false);
    ui->pushButton_start->setDisabled(true);
    ui->SaveButton->setDisabled(true);
    ui->settingButton->setDisabled(true);
    ui->testingButton->setDisabled(true);
    ui->progressBar->setValue(0);
    ui->TwoByTwo_Button->setDisabled(true);

    if(algorithm_num == 1)
    {
        ui->error_Button->setDisabled(false);

    }
    else
    {
        if(setting_dimeintion == 2)
        {
            ui->error_Button->setDisabled(true);
        }
    }

    learn_or_test = 1;
    input_name.clear();
    ui->textBrowser->clear();
    ui->textBrowser_2->clear();

    if(algorithm_num == 1) ;// BP
    else if(algorithm_num == 2 )
    {
        Lord w(1);
        w.exec();

        QString temp = w.get_read_path();
        if(temp.isEmpty() != 1)
        {
            temp = temp + "/" +"weight.txt";
            QByteArray byteBuffer = temp.toLocal8Bit();
            som->read_weight(byteBuffer.data());
            setting_dimeintion = som->weight.get_row();
            QFile file(temp);
            file.open(QIODevice :: ReadOnly);
            ui->textBrowser->clear();

            ui->textBrowser->append("\nresult weight\n");
            ui->textBrowser->append(file.readAll());
            file.close();
        }
        else ui->inputButton->setDisabled(true);

    }
    else
    {
        Lord w;
        w.exec();

        QString temp = w.get_read_path();
        if(temp.isEmpty() != 1)
        {
            temp = temp + "/" +"weight.txt";
            QByteArray byteBuffer = temp.toLocal8Bit();
            cnn->read_weight(byteBuffer.data());
            setting_dimeintion = cnn->weight.get_row();
            QFile file(temp);
            file.open(QIODevice :: ReadOnly);
            ui->textBrowser->clear();

            ui->textBrowser->append("\nresult weight\n");
            ui->textBrowser->append(file.readAll());
            file.close();
        }
        else ui->inputButton->setDisabled(true);
    }
}

void MainWindow::on_error_Button_clicked()
{

}


void MainWindow::on_TwoByTwo_Button_clicked()
{
    if( algorithm_num == 3)
    {
        if(chart != NULL) delete chart;
        if(chartView != NULL) delete chartView;
        if(scatter_series != NULL) delete [] scatter_series;

        scatter_series = new QScatterSeries[cnn->weight.get_column()+1];

        for(int i = 0 ; i < cnn->result.get_column() ; i++)
        {
            for(int j = 0 ; j < cnn->weight.get_column() ; j++)
            {
                if(cnn->result(i,2) == j)
                {
                    scatter_series[j].append(cnn->result(i,0),cnn->result(i,1));
                }
            }
        }
        for(int i = 0 ; i < cnn->weight.get_column() ; i++)
        {
            scatter_series[cnn->weight.get_column()].append(cnn->weight(i,0),cnn->weight(i,1));
        }

        chart = new QChart();
        chart->legend()->hide();
        for(int j = 0 ; j < cnn->weight.get_column() ; j++)
        {
            chart->addSeries(&scatter_series[j]);
        }
        chart->addSeries(&scatter_series[cnn->weight.get_column()]);

        chart->createDefaultAxes();

        chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        TwoPlotWindow.setCentralWidget(chartView);
        TwoPlotWindow.resize(400, 300);
        TwoPlotWindow.show();
    }
    if( algorithm_num == 2)
    {

        if(chart != NULL) delete chart;
        if(chartView != NULL) delete chartView;
        if(scatter_series != NULL) delete [] scatter_series;

        scatter_series = new QScatterSeries[som->weight.get_column()+1];

        for(int i = 0 ; i < som->result.get_column() ; i++)
        {
            for(int j = 0 ; j < som->weight.get_column() ; j++)
            {
                if(som->result(i,2) == j)
                {
                    scatter_series[j].append(som->result(i,0),som->result(i,1));
                }
            }
        }
        for(int i = 0 ; i < som->weight.get_column() ; i++)
        {
            scatter_series[som->weight.get_column()].append(som->weight(i,0),som->weight(i,1));
        }

        chart = new QChart();
        chart->legend()->hide();
        for(int j = 0 ; j < som->weight.get_column() ; j++)
        {
            chart->addSeries(&scatter_series[j]);
        }
        chart->addSeries(&scatter_series[som->weight.get_column()]);

        chart->createDefaultAxes();

        chartView = new QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);

        TwoPlotWindow.setCentralWidget(chartView);
        TwoPlotWindow.resize(400, 300);
        TwoPlotWindow.show();
    }
}
