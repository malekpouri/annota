#ifndef TRANSPARENTCANVAS_H
#define TRANSPARENTCANVAS_H

#include <QWidget>
#include <QVector>
#include <QPoint>
#include <QPen>

class TransparentCanvas : public QWidget
{
    Q_OBJECT

public:
    TransparentCanvas(QWidget *parent = nullptr);
    ~TransparentCanvas();

protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QVector<QVector<QPoint>> allStrokes;  // نگهداری همه خطوط ترسیم شده
    QVector<QPoint> currentStroke;        // خط فعلی در حال ترسیم
    QPen pen;
    bool isDrawing = false;
    QPoint lastPoint;
};

#endif // TRANSPARENTCANVAS_H