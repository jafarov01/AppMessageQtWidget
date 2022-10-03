#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->username_input->setPlaceholderText("Please, enter email or ID");
    ui->password_input->setPlaceholderText("Please, enter password");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{
    //connecting to MySql database
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("messageappregister");

    if (db.open())
    {
        QMessageBox::information(this, "Database success", "Database connection succeded");
    }
    else
    {
        QMessageBox::warning(this, "Database failed", "Database connection failed");
    }
}

