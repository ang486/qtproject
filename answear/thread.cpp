#include "thread.h"
#include "ui_thread.h"

thread::thread(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::thread)
{
    ui->setupUi(this);
    th=new thr;
    QPushButton *po= new QPushButton(tr("ok"),this);
    QProgressBar *op=new QProgressBar(this);
    connect(po,&QPushButton::clicked,th,&QThread::start);
    connect(th,&thr::curnum,[=](int num){
        op->setValue(num);
    });
    //connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

thread::~thread()
{
    delete ui;
}

void thread::on_pushButton_clicked()
{
    qDebug()<<23*14+21*14+16*24+23*14+22*14+19*14<<endl;
    qDebug()<<6*300<<endl;
     qDebug()<<6*9.9-4*31*6<<endl;
}
