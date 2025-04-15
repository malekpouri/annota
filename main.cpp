#include <QApplication>

#include "ui/TransparentCanvas.h"

int main(int argc, char *argv[])
{
    
    QApplication app(argc, argv);

    TransparentCanvas canvas;
    canvas.setAttribute(Qt::WA_TranslucentBackground);
    canvas.showFullScreen();

    return app.exec();
}
