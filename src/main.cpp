//
// Created by sourena khanzadeh on 2023-03-18.
//
#include <iostream>
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]){
    std::cout << "Hello, World!" << std::endl;
    // draw a window
    QApplication app(argc, argv);
    QWidget window;
    window.resize(250, 150);
    window.setWindowTitle("Hello World");
    window.show();
    return app.exec();
}