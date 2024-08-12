#include <QApplication>
#include <QLabel>

int main (int argc, char* argv[])
{
    QApplication app (argc, argv);
    QLabel* label = new QLabel("Hello World", 0);
    label->resize(120, 30);

    label->show();

    app.exec();
}