#ifndef PROJECT_ADVGUI_H
#define PROJECT_ADVGUI_H

#include <QWidget>



QT_BEGIN_NAMESPACE
namespace Ui { class AdvGUI; }
QT_END_NAMESPACE

class AdvGUI : public QWidget {
    Q_OBJECT

public:
    explicit AdvGUI(QWidget *parent = nullptr);

    ~AdvGUI() override;



private:
    Ui::AdvGUI *ui;
};



#endif //PROJECT_ADVGUI_H