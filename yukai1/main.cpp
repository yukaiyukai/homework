#include <QCoreApplication>
#include <iostream>
#include <QDebug>
#define number 0x12345678
#define pr(in) QString("0x%1").arg(in,0,16,QLatin1Char(' '))          //输出16进制
typedef quint32 doubleword;
typedef quint8  byte;
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))
#define HHI(xxx) ( (byte) ((doubleword) (xxx) >> 24 ))                //取最高8位
#define LHI(xxx) ( (byte) ((doubleword) (xxx) >> 16 ) & 255 )         //取次高8位
#define HLO(xxx) ( (byte) ((doubleword) (xxx) >> 8 ) & 255 )          //取次低8位
#define LLO(xxx) ( (byte) ((doubleword) (xxx) & 255 ))                //取最低8位

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //qint32 number = 0x12345678;
    QList <qint8> values;
    qint32 i;
    //输出各位置数值
    qDebug()<<"原始值:"<<pr(number)<<"=="<<number<<endl;               //输出number为十进制
    qDebug()<< pr(HHI(number)) <<"=="<<dec<<HHI(number);              //输出最高8位，转换为10进制
    qDebug()<< pr(LHI(number)) <<"=="<<dec<<LHI(number);              //输出次高8位，转换为10进制
    qDebug()<< pr(HLO(number)) <<"=="<<dec<<HLO(number);              //输出次低8位，转换为10进制
    qDebug()<< pr(LLO(number)) <<"=="<<dec<<LLO(number)<<endl;        //输出最低8位，转换为10进制

    qDebug()<<"最高8位和次高8位中的最大值:"<<MAX(pr(HHI(number)) , pr(LHI(number)))<<"=="<<MAX(HHI(number) , LHI(number));
    qDebug()<<"次低8位和最低8位中的最小值:"<<MIN(pr(HLO(number)) , pr(LLO(number)))<<"=="<<MIN(HLO(number) , LLO(number))<<endl;
    //组合新数
    values << HHI(number) << LHI(number) << HLO(number) << LLO(number);

    i = (HHI(number) << 16) + LHI(number) + (HLO(number) << 24) + (LLO(number) << 8);

    qDebug() <<"重新组合后32位数:"<<pr(i)<<"=="<<i<<endl;
    qDebug() <<"排序前的32位数:"<<values;
    //使用std::sort函数排列新数
    std::sort(values.begin() , values.end() , std::greater<qint8>());  //从大到小排序
    qDebug() <<"排序后的32位数:"<<values;

    return a.exec();

}
