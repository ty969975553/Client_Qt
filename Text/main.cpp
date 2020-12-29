#include "text_edit_window.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


#ifdef Q_OS_WIN
    a.setFont(QFont("Microsoft YaHei",9));
#endif

    TextEditWindow w;
    w.show();

    return a.exec();
}
