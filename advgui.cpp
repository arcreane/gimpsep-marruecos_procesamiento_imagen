// You may need to build the project (run Qt uic code generator) to get "ui_AdvGUI.h" resolved
#include "advgui.h"


#include "ui_AdvGUI.h"


AdvGUI::AdvGUI(QWidget *parent) :
        QWidget(parent), ui(new Ui::AdvGUI) {
    ui->setupUi(this);
}

AdvGUI::~AdvGUI() {
    delete ui;
}/**/