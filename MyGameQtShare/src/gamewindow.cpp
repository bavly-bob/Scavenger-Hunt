#include "../include/gamewindow.h"
#include <QPainter>
#include <QKeyEvent>

GameWindow::GameWindow(QWidget *parent)
    : QWidget(parent)
{
    setFixedSize(GRID_SIZE * CELL_SIZE, GRID_SIZE * CELL_SIZE);
    setWindowTitle("MyGame Qt");
    setFocusPolicy(Qt::StrongFocus);
}

void GameWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.fillRect(rect(), Qt::white);

    painter.setPen(Qt::black);
    for (int row = 0; row < GRID_SIZE; ++row) {
        for (int col = 0; col < GRID_SIZE; ++col) {
            painter.drawRect(col * CELL_SIZE, row * CELL_SIZE, CELL_SIZE, CELL_SIZE);
        }
    }

    QRect playerRect(m_player.getX() * CELL_SIZE + 1,
                     m_player.getY() * CELL_SIZE + 1,
                     CELL_SIZE - 1,
                     CELL_SIZE - 1);
    painter.fillRect(playerRect, Qt::blue);
}

void GameWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_W:
    case Qt::Key_Up:
        m_player.moveUp();
        break;
    case Qt::Key_S:
    case Qt::Key_Down:
        m_player.moveDown();
        break;
    case Qt::Key_A:
    case Qt::Key_Left:
        m_player.moveLeft();
        break;
    case Qt::Key_D:
    case Qt::Key_Right:
        m_player.moveRight();
        break;
    default:
        QWidget::keyPressEvent(event);
        return;
    }

    update();
}
