#ifndef CHANNEL_H
#define CHANNEL_H
#include <QDateTime>
#include <mutex>
/*
 * 窗口间数据通信
*/
class Channel
{
public:
    void setBcurtainStart(const QDateTime& datetime)
    {
        Bcurtain_start_ = datetime;
    }
    void setBcurtainEnd(const QDateTime& datetime)
    {
        Bcurtain_end_ = datetime;
    }
    void setMcurtainStart(const QDateTime& datetime)
    {
        Mcurtain_start_ = datetime;
    }
    void setMcurtainEnd(const QDateTime& datetime)
    {
        Mcurtain_end_ = datetime;
    }
    void setLampStart(const QDateTime& datetime)
    {
        lamp_start_ = datetime;
    }
    void setLampEnd(const QDateTime& datetime)
    {
        lamp_end_ = datetime;
    }
    void setAircStart(const QDateTime& datetime)
    {
        airc_start_ = datetime;
    }
    void setAircEnd(const QDateTime& datetime)
    {
        airc_end_ = datetime;
    }
    void setTvStart(const QDateTime& datetime)
    {
        tv_start_ = datetime;
    }
    void setTvEnd(const QDateTime& datetime)
    {
        tv_end_ = datetime;
    }
    void setWashStart(const QDateTime& datetime)
    {
        wash_start_ = datetime;
    }
    void setWashEnd(const QDateTime& datetime)
    {
        wash_end_ = datetime;
    }
    void setwahsroom(const QDateTime& datetime)//卫生间灯
    {
        wahsroom_ = datetime;
    }

    void setHeater(bool flag)
    {
        heater_ = flag;
    }
    void setHanger(bool flag)
    {
        hanger_ = flag;
    }

    void setLight(const QString& arg)
    {
        light_ = arg;
    }

    void setVoice(const QString& arg)
    {
        voice_ = arg;
    }

    void setportName(const QString& portName)
    {
        portName_ = portName;
    }
    void setbaudRates(int baudRates)
    {
        baudRates_ = baudRates;
    }
    void setdataBits(int dataBits)
    {
        dataBits_ = dataBits;
    }
    void setstopBits(int stopBits)
    {
        stopBits_ = stopBits;
    }
    void setFrontTemperature(const QString& frontTemperature){
        frontTemperature_ = frontTemperature;
    }
    void setEndTemperature(const QString& endTemperature){
       endTemperature_ = endTemperature;
    }
    void setHumidityFront(const QString& humidityFront){
        humidityFront_ = humidityFront;
    }
    void setHumidityEnd(const QString& humidityEnd){
        humidityEnd_ = humidityEnd;
    }
    void setBWindowOpen(const QDateTime& bwindowsOpen){
             BwindowsOpen_ = bwindowsOpen;
    }
    void setBWindowClose(const QDateTime& bwindowsClose){
        BwindowsClose_ = bwindowsClose;
    }
    void setMWindowOpen(const QDateTime& mwindowsOpen )
    {
        MwindowsOpen_ = mwindowsOpen;
    }
    void setMWindowClose(const QDateTime& mwindowsClose )
    {
        MwindowsClose_ = mwindowsClose;
    }
    void setSystemtime(const QDateTime& datetime)
       {
           system_time = datetime;
       }


    QDateTime& getBcurtainStart()
    {
        return Bcurtain_start_;
    }
    QDateTime& getBcurtainEnd()
    {
        return Bcurtain_end_;
    }
    QDateTime& getMcurtainStart()
    {
        return Mcurtain_start_;
    }
    QDateTime& getMcurtainEnd()
    {
        return Mcurtain_end_;
    }
    QDateTime& getLampStart()
    {
        return lamp_start_;
    }
    QDateTime& getLampEnd()
    {
        return lamp_end_;
    }
    QDateTime& getAircStart()
    {
        return airc_start_;
    }
    QDateTime& getAircEnd()
    {
        return airc_end_;
    }
    QDateTime& getTvStart()
    {
        return tv_start_;
    }
    QDateTime& getTvEnd()
    {
        return tv_end_;
    }
    QDateTime& getWashStart()
    {
        return wash_start_;
    }
    QDateTime& getWashEnd()
    {
        return wash_end_;
    }
    QDateTime& getSystemtime()
       {
           return system_time;
       }

    QDateTime& getwahsroom()//卫生间灯
    {

        return wahsroom_;
    }
    bool getHeater()
    {
        return heater_;
    }
    bool getHanger()
    {
        return hanger_;
    }

    QString getLight()
    {
        return light_;
    }

    QString getvoice()
    {
        return voice_;
    }
    QString getportName()
    {
        return portName_;
    }
    int getbaudRates()
    {
        return baudRates_;
    }
    int getdataBits()
    {
        return dataBits_;
    }
    int getstopBits()
    {
        return stopBits_;
    }
    QString getFrontTemperature(){
        return frontTemperature_;
    }
    QString getEndTemperature(){
        return endTemperature_;
    }
    QString getHumidityFront(){
        return humidityFront_;
    }
    QString getHumidityEnd(){
        return humidityEnd_;
    }
    QDateTime& getBWindowOpen(){
        return BwindowsOpen_;
    }
    QDateTime& getBWindowClose(){
        return BwindowsClose_;
    }
    QDateTime& getMWindowOpen(){
        return MwindowsOpen_;
    }
    QDateTime& getMWindowClose(){
        return MwindowsClose_;
    }

public:
    static Channel* getInstance(){
          if (inst == nullptr){
            lock.lock();
            if(inst == nullptr){
              inst = new Channel;
            }
            lock.unlock();
          }
          return inst;
        }
    //私有拷贝构造
private:
    Channel(QDate date = QDate(2019,7,20),QTime time = QTime(0,0)):system_time(QDateTime(date,time)){}
    Channel(Channel const&);
    Channel& operator=(Channel const&);
    class CGarbo{
    public:
        ~CGarbo(){
        if(Channel::inst)
            delete inst;
        }
    };

private:
    QDateTime Bcurtain_start_;  //卧室窗帘开启时间
    QDateTime Bcurtain_end_;    //卧室窗帘关闭时间
    QDateTime Mcurtain_start_;  //客厅窗帘开启时间
    QDateTime Mcurtain_end_;    //卧室窗帘关闭时间
    QDateTime lamp_start_;      //床头灯开启时间
    QDateTime lamp_end_;        //床头灯关闭时间
    QDateTime wahsroom_;         //卫生间灯开启时间
    QDateTime airc_start_;      //空调开启时间
    QDateTime airc_end_;        //空调关闭时间
    QDateTime tv_start_;        //电视机开启时间
    QDateTime tv_end_;          //电视机关闭时间
    QDateTime wash_start_;      //洗衣机开启时间
    QDateTime wash_end_;        //洗衣机关闭时间
    bool heater_;               //热水器开关
    bool hanger_;               //晾衣杆开关
    QString light_;             //光照强度阈值
    QString voice_;             //噪声强度阈值
    QString portName_;          //串口号
    int baudRates_;             //波特率
    int dataBits_;              //数据位
    int stopBits_;              //停止位
    QString frontTemperature_;  //温度阈值上界
    QString endTemperature_;    //温度阈值下界
    QString humidityFront_;     //湿度阈值上界
    QString humidityEnd_;       //湿度阈值下界
    QDateTime BwindowsOpen_;    //卧室开窗时间
    QDateTime BwindowsClose_;   //卧室关窗时间
    QDateTime MwindowsOpen_;    //客厅开窗时间
    QDateTime MwindowsClose_;   //客厅关窗时间
    QDateTime system_time ;  //用户设置系统时间
    static Channel* inst;
    static std::mutex lock;
    static CGarbo cg;

};

#endif // CHANNEL_H
