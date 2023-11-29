#ifndef REGSVIEW_H
#define REGSVIEW_H

#include <QTreeView>

class RegsView : public QTreeView {
    Q_OBJECT

public:
    explicit RegsView(QWidget *parent = nullptr);

signals:
    void gprRegsFormatChanged(const int format);

protected:
    void contextMenuEvent(QContextMenuEvent *event) override;
};

#endif // REGSVIEW_H
