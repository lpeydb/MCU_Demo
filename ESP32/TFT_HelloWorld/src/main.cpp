#include <Arduino.h>
#include <SPI.h> //导入库
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();

void setup()
{
    tft.init();                  //初始化
    tft.fillScreen(TFT_BLACK);   //屏幕颜色
    tft.setCursor(10, 50, 1);    //设置起始坐标(10, 10)，2 号字体
    tft.setTextColor(TFT_WHITE); //设置文本颜色为白色
    tft.setTextSize(1);          //设置文字的大小 (1~7)
    tft.println("Hello World!"); //显示文字
}
void loop()
{
}