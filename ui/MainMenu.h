#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include <QPushButton>

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);

signals:
    void difficultySelected(int difficulty);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QPushButton* createButton(const QString &text, const QColor &color);
};

#endif
