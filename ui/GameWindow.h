#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class GameWindow;
}
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

    // Preliminary functions
    void showMainMenu();
    void showGameScreen();
    void showGameOverScreen(bool won, int score);

private:
    Ui::GameWindow *ui;
};
#endif // GAMEWINDOW_H
