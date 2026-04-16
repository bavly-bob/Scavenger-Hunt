#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include "Player.h"

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

    // Preliminary functions
    void showMainMenu();
    void showGameScreen();
    void showGameOverScreen(bool won, int score);

private:
    Player m_player;
    static constexpr int GRID_SIZE = 10;
    static constexpr int CELL_SIZE = 40;
};

#endif // GAMEWINDOW_H
