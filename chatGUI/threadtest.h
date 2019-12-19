#ifndef THREADTEST_H
#define THREADTEST_H

#include <QThread>

class ThreadTest : public QThread
{
    Q_OBJECT
public:
    explicit ThreadTest(QObject *parent = 0);

private:
    void run();

signals:
    void ReadServer();

public slots:
};

#endif // THREADTEST_H
