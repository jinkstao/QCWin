#include "MainForm.h"
#include "ui_MainForm.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);
    setWindowFlag(Qt::SplashScreen);
    ui->ttlTitle->setWidgetParent(this);
}

MainForm::~MainForm()
{
    delete ui;
}
