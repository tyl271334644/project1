#include "navigationwidget.h"
#include <QPainter>
#include <QDebug>

NavigationWidget::NavigationWidget(QWidget *parent) : QWidget(parent)
{
    backgroundColor = "#E4E4E4";
    selectedColor = "#2CA7F8";
    rowHeight = 40;
    currentIndex = 0;

    setMouseTracking(true);
    setFixedWidth(150);
}

NavigationWidget::~NavigationWidget()
{
}

void NavigationWidget::addItem(const QString &title)
{
    listItems << title;

    update();
}

void NavigationWidget::setWidth(const int &width)
{
    setFixedWidth(width);
}

void NavigationWidget::setBackgroundColor(const QString &color)
{
    backgroundColor = color;

    update();
}

void NavigationWidget::setSelectColor(const QString &color)
{
    selectedColor = color;

    update();
}

void NavigationWidget::setRowHeight(const int &height)
{
    rowHeight = height;

    update();
}

void NavigationWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    // Draw background color.
    painter.setPen(Qt::NoPen);
    painter.setBrush(QColor(backgroundColor));
    painter.drawRect(rect());

    // Draw Items
    int count = 0;
    for (const QString &str : listItems) {
        QPainterPath itemPath;
        itemPath.addRect(QRect(0, count * rowHeight, width(), rowHeight));

        if (currentIndex == count) {
            painter.setPen("#FFFFFF");
            painter.fillPath(itemPath, QColor(selectedColor));
        }else {
            painter.setPen("#202020");
            painter.fillPath(itemPath, QColor(backgroundColor));
        }

        painter.drawText(QRect(0, count * rowHeight, width(), rowHeight), Qt::AlignVCenter | Qt::AlignHCenter, str);

        ++count;
    }
}

void NavigationWidget::mouseMoveEvent(QMouseEvent *e)
{
    if (e->y() / rowHeight < listItems.count()) {
        // qDebug() << e->y() / rowHeight;
    }
}

void NavigationWidget::mousePressEvent(QMouseEvent *e)
{
    if (e->y() / rowHeight < listItems.count()) {
        currentIndex = e->y() / rowHeight;

        emit currentItemChanged(currentIndex);

        update();
    }
}

void NavigationWidget::mouseReleaseEvent(QMouseEvent *e)
{
    Q_UNUSED(e);
}
