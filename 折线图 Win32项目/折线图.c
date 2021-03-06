/*
	该Win32项目在VS2010下运行成功
	此模块为数据折线图
	‘航空数据分析’中其他模块请运行Win32控制台应用程序：<航空数据分析>
*/
#include"acllib.h"
int Setup()//程序运行时被调用的函数
{
initWindow("chart",DEFAULT,DEFAULT,900,800);//初始化窗口
beginPaint();//作图，x轴正方向水平向右，y轴正方向水平向下
/*乘坐飞机次数折线图*/
//初始坐标为（100，350）
 line(100,350,100,25);//建立y轴
 line(100,350,850,350);//建立x轴
 line(150,50,200,120);
 line(200,120,250,135);
 line(250,135,300,330);
 line(300,330,350,85);
 line(350,85,400,215);
 line(400,215,450,195);
 line(450,195,500,242);
 line(500,242,550,275);
 line(550,275,600,260);
 line(600,260,650,295);
 line(650,295,700,105);
 line(700,105,750,315);
 line(750,315,800,165);//line函数绘制一条从（x0，y0）到（x1，y1）的直线
 paintText(95,25,"∧");//打印文字
 paintText(850,345,">");
 paintText(60,10,"乘坐飞机次数");
 paintText(830,360,"客户");
 paintText(75,50,"210");
 paintText(75,120,"140");
 paintText(75,135,"135");
 paintText(75,330,"23");
 paintText(75,85,"152");
 paintText(75,215,"92");
 paintText(75,195,"101");
 paintText(75,242,"73");
 paintText(75,275,"56");
 paintText(75,260,"64");
 paintText(75,295,"43");
 paintText(75,105,"145");
 paintText(75,315,"29");
 paintText(75,165,"118");
 paintText(125,360,"客户1");
 paintText(175,360,"客户2");
 paintText(225,360,"客户3");
 paintText(275,360,"客户4");
 paintText(325,360,"客户5");
 paintText(375,360,"客户6");
 paintText(425,360,"客户7");
 paintText(475,360,"客户8");
 paintText(525,360,"客户9");
 paintText(575,360,"客户10");
 paintText(625,360,"客户11");
 paintText(675,360,"客户12");
 paintText(725,360,"客户13");
 paintText(775,360,"客户14");

 /*累计飞行里程折线图*/
 //初始坐标为（100，670）
 line(100,670,100,400);
 line(100,670,850,670);
 paintText(95,400,"∧");
 paintText(850,665,">");
 paintText(60,385,"累计飞行里程");
 paintText(830,680,"客户");
 line(150,425,200,535);
 line(200,535,250,572);
 line(250,572,300,583);
 line(300,583,350,510);
 line(350,510,400,525);
 line(400,525,450,560);
 line(450,560,500,550);
 line(500,550,550,495);
 line(550,495,600,460);
 line(600,460,650,615);
 line(650,615,700,600);
 line(700,600,750,485);
 line(750,485,800,650);
 paintText(55,425,"580717");
 paintText(55,535,"293678");
 paintText(55,572,"283712");
 paintText(55,583,"281336");
 paintText(55,510,"309928");
 paintText(55,525,"294585");
 paintText(55,560,"287042");
 paintText(55,550,"287230");
 paintText(55,495,"321489");
 paintText(55,460,"375074");
 paintText(55,615,"262013");
 paintText(55,600,"271438");
 paintText(55,485,"321529");
 paintText(55,650,"179514");
 paintText(125,680,"客户1");
 paintText(175,680,"客户2");
 paintText(225,680,"客户3");
 paintText(275,680,"客户4");
 paintText(325,680,"客户5");
 paintText(375,680,"客户6");
 paintText(425,680,"客户7");
 paintText(475,680,"客户8");
 paintText(525,680,"客户9");
 paintText(575,680,"客户10");
 paintText(625,680,"客户11");
 paintText(675,680,"客户12");
 paintText(725,680,"客户13");
 paintText(775,680,"客户14");

 /*折扣折线图*/

endPaint();//结束绘图操作，并将绘制的图形显示在屏幕上
return 0;
}
 