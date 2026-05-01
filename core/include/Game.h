#pragma once

#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>

class Player;

enum GameState {
    START,
    PLAYING,
    PAUSED,
    GAME_OVER
};

class Game : public QObject
{
    Q_OBJECT

private:
    bool isMultiplayer = false;
    bool isHost = false;

    GameState state;

    Player* player1 = nullptr;
    Player* player2 = nullptr;

    QTcpServer* server = nullptr;
    QTcpSocket* socket = nullptr;

public:
    explicit Game(QObject* parent = nullptr);

    void startMultiplayerMode();
    void hostMultiplayerSession(int port);
    void joinMultiplayerSession(const QString& host, int port);
};

#endif
