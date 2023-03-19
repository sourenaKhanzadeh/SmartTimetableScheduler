//
// Created by sourena khanzadeh on 2023-03-18.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ui_core.h" resolved

#include "ui_core.hpp"

ui_core::ui_core(QWidget *parent) :
        QWidget(parent), ui(new Ui::ui_core) {
    ui->setupUi(this);
}

ui_core::~ui_core() {
    delete ui;
}
