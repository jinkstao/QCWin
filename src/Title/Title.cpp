#include "Title.h"
#include "ui_Title.h"
#include <QMouseEvent>
#include <QWidget>

Title::Title(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Title)
{
    ui->setupUi(this);
}

Title::~Title()
{
    delete ui;
}

void Title::mousePressEvent(QMouseEvent *event)
{
    pressFlag = true;
    beginDrag = event->pos();
    QWidget::mousePressEvent(event);
}

void Title::mouseReleaseEvent(QMouseEvent *event)
{
    pressFlag = false;
    QWidget::mouseReleaseEvent(event);
}

void Title::mouseMoveEvent(QMouseEvent *event)
{
    if(pressFlag)
    {
        QPoint relaPos(QCursor::pos() - beginDrag);
        parent->move(relaPos);
    }
    QWidget::mouseMoveEvent(event);
}

void Title::setWidgetParent(QWidget* parent)
{
    this->parent = parent;
}
