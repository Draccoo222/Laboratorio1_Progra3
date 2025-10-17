#include <QCoreApplication>
#include <iostream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << 1 << std::endl;

    return a.exec();
}
