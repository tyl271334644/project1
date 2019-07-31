#ifndef NAVIGATIONWIDGET_H
#define NAVIGATIONWIDGET_H

#include <QWidget>
#include <QMouseEvent>

class NavigationWidget : public QWidget
{
    Q_OBJECT

public:
    NavigationWidget(QWidget *parent= nullptr);
    ~NavigationWidget();

    void addItem(const QString &title);
    void setWidth(const int &width);
    void setBackgroundColor(const QString &color);
    void setSelectColor(const QString &color);
    void setRowHeight(const int &height);

protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);

private:
    QList<QString> listItems;
    QString backgroundColor;
    QString selectedColor;
    int rowHeight;
    int currentIndex;

signals:
    void currentItemChanged(const int &index);
};


#endif // NAVIGATIONWIDGET_H
