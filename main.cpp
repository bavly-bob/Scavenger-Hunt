#include "ui/MainMenu.h"
#include "ui/GameWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainMenu menu;
    GameWindow *gameWindow = nullptr;

    QObject::connect(&menu, &MainMenu::difficultySelected, [&](int difficulty){
        menu.hide();
        if (!gameWindow) {
            gameWindow = new GameWindow();
        }
        gameWindow->show();
    });

    menu.show();
    return app.exec();
}
