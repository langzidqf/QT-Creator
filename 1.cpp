//this is application
#include<QApplication>

//windows
#include<QWidget>

//button
#include<QPushButton>


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QWidget w;
    QPushButton btn;
    btn.setParent(&w);
    btn.setText("button");
    w.setWindowTitle("Hello World!");
    w.show();

    QObject::connect(&btn,SIGNAL(clicked()),&w,SLOT(close()));
    return app.exec();
}
