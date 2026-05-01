#include "Game.h"
#include <QDebug>
#include <QHostAddress>

Game::Game(QObject* parent) : QObject(parent)
{
}

void Game::startMultiplayerMode()
{
    isMultiplayer = true;
    state = PLAYING;

    qDebug() << "Multiplayer started!";
}

void Game::hostMultiplayerSession(int port)
{
    isHost = true;

    server = new QTcpServer(this);

    if (!server->listen(QHostAddress::Any, port)) {
        qDebug() << "Server failed to start!";
        return;
    }

    qDebug() << "Server started. Waiting for player...";

    connect(server, &QTcpServer::newConnection, this, [=]() {
        socket = server->nextPendingConnection();

        qDebug() << "Player connected!";

        startMultiplayerMode();
    });
}

void Game::joinMultiplayerSession(const QString& host, int port)
{
    isHost = false;

    socket = new QTcpSocket(this);

    qDebug() << "Connecting to host...";

    socket->connectToHost(host, port);

    connect(socket, &QTcpSocket::connected, this, [=]() {
        qDebug() << "Connected to server!";

        startMultiplayerMode();
    });

    connect(socket, &QTcpSocket::errorOccurred, this, [=]() {
        qDebug() << "Connection failed!";
    });
}
