#pragma once

#include <QWidget>
#include "player.h"

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;

private:
    player m_player;
    static constexpr int GRID_SIZE = 10;
    static constexpr int CELL_SIZE = 40;
};
