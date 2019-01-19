#ifndef STAFF_FORM_H
#define STAFF_FORM_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QStackedWidget>
class StaffForm : public QWidget
{
    Q_OBJECT
public:
    explicit StaffForm(QWidget *parent = 0);
private:
    QLabel* h_label;
    QPushButton* h_btn_1;
    QPushButton* h_btn_2;
    QPushButton* h_btn_3;
    QPushButton* h_btn_4;
    QPushButton* h_btn_5;
    QPushButton* b_btn;
    QVBoxLayout* layout;
    QHBoxLayout* h_layout;
    QStackedWidget* c_stackedWidget;
private slots:
    void quit();
};

#endif // STAFF_FORM_H