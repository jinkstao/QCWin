#ifndef TITLE_H
#define TITLE_H

#include <QWidget>

namespace Ui {
class Title;
}

class Title : public QWidget
{
    Q_OBJECT

public:
    explicit Title(QWidget *parent = nullptr);
    ~Title();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void setWidgetParent(QWidget* parent);

private:
    Ui::Title *ui;
    bool pressFlag;
    QPoint beginDrag;
    QWidget *parent;
};

#endif // TITLE_H
