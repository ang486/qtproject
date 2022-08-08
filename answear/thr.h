#ifndef THR_H
#define THR_H

#include <QWidget>
#include <QThread>
class thr : public QThread
{
    Q_OBJECT
public:
    explicit thr(QWidget *parent = nullptr);
void run();
signals:
void curnum(int m);
public slots:
};

#endif // THR_H
