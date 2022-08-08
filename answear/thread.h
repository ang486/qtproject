#ifndef THREAD_H
#define THREAD_H
#include "thr.h"
#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDebug>
#include <QProgressBar>
namespace Ui {
class thread;
}

class thread : public QWidget
{
    Q_OBJECT

public:
    explicit thread(QWidget *parent = nullptr);
    ~thread();
    thr *th;
private slots:
    void on_pushButton_clicked();

private:
    Ui::thread *ui;
};

#endif // THREAD_H
