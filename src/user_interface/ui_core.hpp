//
// Created by sourena khanzadeh on 2023-03-18.
//

#ifndef SMARTTIMETABLESCHEDULER_UI_CORE_HPP
#define SMARTTIMETABLESCHEDULER_UI_CORE_HPP

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class ui_core; }
QT_END_NAMESPACE

class ui_core : public QWidget {
Q_OBJECT

public:
    explicit ui_core(QWidget *parent = nullptr);

    ~ui_core() override;

private:
    Ui::ui_core *ui;
};


#endif //SMARTTIMETABLESCHEDULER_UI_CORE_HPP
