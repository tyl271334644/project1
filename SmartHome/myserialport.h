#ifndef MYSERIALPORT_H
#define MYSERIALPORT_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class MySerialPort
{
public:
    MySerialPort(){}
    ~MySerialPort(){}
public:
    static QStringList getPortList();
	void InitPort(QString portName, int baudRate, int dataBits, int stopBits);
    bool OpenPort();
    void ClosePort();
    bool SendData(const QString& cmd);
    QSerialPort* GetQSerialPortPointer();
    QString ReadData();

private:
    void ResetPort(){
        ClosePort();
        OpenPort();
    }
    QSerialPort mySerialport;
};

#endif // MYSERIALPORT_H
