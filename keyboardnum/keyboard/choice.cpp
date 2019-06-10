#include "choice.h"
#include "ui_choice.h"
#include<QApplication>
#include<QPushButton>
#include<QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QDialog>

choice::choice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choice)
{
    ui->setupUi(this);
}

choice::~choice()
{
    delete ui;
}

void choice::on_pushButton_2_clicked()
{
    int part = 1;//热

    InputView = new input(this);
    InputView -> show();
}

void choice::on_pushButton_clicked()
{
    int part = 0;//冷
    InputView = new input(this);
    InputView -> show();
}
