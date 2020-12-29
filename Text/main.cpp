#include "text_edit_window.h"
#include "darkstyle/darkstyle.h"
#include "framelesswindow/framelesswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(darkstyle);
    Q_INIT_RESOURCE(framelesswindow);
    QApplication a(argc, argv);

   a.setStyle(new DarkStyle);

   // create frameless window (and set windowState or title)
   FramelessWindow framelessWindow;
   framelessWindow.setWindowIcon(a.style()->standardIcon(QStyle::SP_DesktopIcon));
#ifdef Q_OS_WIN
    a.setFont(QFont("Microsoft YaHei",9));
#endif

    TextEditWindow w(&framelessWindow);
    framelessWindow.setContent(&w);
    framelessWindow.show();

    Q_CLEANUP_RESOURCE(framelesswindow);
    Q_CLEANUP_RESOURCE(darkstyle);
    return a.exec();
}
