/**
* LICENSE PLACEHOLDER
*/

#include <QApplication>
#include "gui/main_window.h"

/**
 * @brief main
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char *argv[])
{
    QApplication application(argc, argv);

    MainWindow mainWindow;

    mainWindow.show();

    return application.exec();
}
