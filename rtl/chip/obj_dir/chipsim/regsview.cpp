#include "regsview.h"
#include <QMenu>
#include <QAction>
#include <QContextMenuEvent>

RegsView::RegsView(QWidget *parent) : QTreeView(parent) {
    // Initialization code if needed
}

void RegsView::contextMenuEvent(QContextMenuEvent *event) {
    QMenu menu(this);

    // Create submenu for "Data Format"
    QMenu *dataFormatMenu = menu.addMenu("GPR Data Format");

    // Add actions to the submenu
    QAction *hexAction = dataFormatMenu->addAction("HEX");
    QAction *decimalAction = dataFormatMenu->addAction("DECIMAL");
    QAction *binaryAction = dataFormatMenu->addAction("BINARY");
    QAction *octalAction = dataFormatMenu->addAction("OCTAL");

    // For the HEX action
    connect(hexAction, &QAction::triggered, this, [this]() {
        emit gprRegsFormatChanged(16);
    });

    // Similarly for the DECIMAL action
    connect(decimalAction, &QAction::triggered, this, [this]() {
        emit gprRegsFormatChanged(10);
    });

    // For the BINARY action
    connect(binaryAction, &QAction::triggered, this, [this]() {
        emit gprRegsFormatChanged(2);
    });

    // And for the OCTAL action
    connect(octalAction, &QAction::triggered, this, [this]() {
        emit gprRegsFormatChanged(8);
    });

    // Show the context menu at the position of the mouse click
    menu.exec(event->globalPos());
}
