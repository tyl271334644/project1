#include "myserialport.h"
#include <QDebug>

QStringList MySerialPort::getPortList()
{
    QStringList list;
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Name : " << info.portName();
        list.append(info.portName());
    }
    return list;
}

//38400, 8, 1
void MySerialPort::InitPort(QString portName, int baudRate, int dataBits, int stopBits)
{
    mySerialport.setPortName(portName);
    //设置波特率
    mySerialport.setBaudRate(baudRate);
    //设置数据位数
    switch(dataBits)
    {
    case 8:
        mySerialport.setDataBits(QSerialPort::Data8);
        break;
    default: break;
    }
    //设置奇偶校验
    mySerialport.setParity(QSerialPort::NoParity);

    //设置停止位
    switch(stopBits)
    {
    case 1:mySerialport.setStopBits(QSerialPort::OneStop);break;
    case 2:mySerialport.setStopBits(QSerialPort::TwoStop);break;
    default:break;
    }

    //设置流控制
    mySerialport.setFlowControl(QSerialPort::NoFlowControl);
}


//关闭串口
void MySerialPort::ClosePort()
{
   qDebug() << "关闭串口";
   mySerialport.clear();
   mySerialport.close();
}

// 打开串口
bool MySerialPort::OpenPort()
{

    if(!mySerialport.open(QIODevice::ReadWrite))
    {
        qDebug() <<  "无法打开串口！";
        return false;
    }

    qDebug() <<  "打开串口！" << mySerialport.portName();

    return true;
}

// 发送命令到串口 QString& cmd: 发送的命令
// 使用用例: SendData("AA");
bool MySerialPort::SendData(const QString& cmd)
{
    //QByteArray str = QByteArray::fromHex(cmd.toLatin1().data());
    if (mySerialport.write(cmd.toLatin1().data()) == -1){
        return false;
    }
    else{
        return true;
    }
}

// 收数据, 外部提供槽函数调用
QString MySerialPort::ReadData()
{
    //qDebug() << mySerialport.bytesAvailable();

    if (mySerialport.bytesAvailable() >= 21){
        QByteArray buffer = mySerialport.read(21);
        QString res = QString(buffer.toHex());
        if (!(res.mid(0, 2) == "fd" || res.mid(0, 2) == "fc")){
            qDebug() << "error";
            ResetPort();
            return QString("");
        }
        return res;
    }

    return QString("");
}

//获取QSerialPort 指针
QSerialPort* MySerialPort::GetQSerialPortPointer()
{
    return &mySerialport;
}
