#include "TransparentCanvas.h"
#include <QPainter>
#include <QMouseEvent>

TransparentCanvas::TransparentCanvas(QWidget *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint | Qt::Tool);
    setAttribute(Qt::WA_NoSystemBackground);
    setAttribute(Qt::WA_TransparentForMouseEvents, false);
    setMouseTracking(true);
    resize(800, 600);  // اندازه موقت

    pen = QPen(Qt::red, 3);  // رنگ و ضخامت قلم
    
    // اضافه کردن تنظیمات پس‌زمینه شفاف
    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::transparent);
    setPalette(pal);
}

TransparentCanvas::~TransparentCanvas() {}

void TransparentCanvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.fillRect(rect(), Qt::transparent);
    painter.setPen(pen);

    // رسم خطوط برای هر مجموعه از نقاط
    for (const auto& strokePoints : allStrokes) {
        for (int i = 1; i < strokePoints.size(); ++i) {
            painter.drawLine(strokePoints[i - 1], strokePoints[i]);
        }
    }
    
    // رسم خط‌های فعلی
    for (int i = 1; i < currentStroke.size(); ++i) {
        painter.drawLine(currentStroke[i - 1], currentStroke[i]);
    }
}

void TransparentCanvas::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDrawing = true;
        currentStroke.clear();  // شروع یک stroke جدید
        lastPoint = event->pos();
        currentStroke.append(lastPoint);
        update();
    }
}

void TransparentCanvas::mouseMoveEvent(QMouseEvent *event)
{
    if (isDrawing && (event->buttons() & Qt::LeftButton)) {
        lastPoint = event->pos();
        currentStroke.append(lastPoint);
        update();
    }
}

void TransparentCanvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        isDrawing = false;
        if (!currentStroke.isEmpty()) {
            allStrokes.append(currentStroke);
        }
        lastPoint = QPoint();
    }
}