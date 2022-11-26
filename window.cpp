#include"window.h"
#include<graphics.h>
#include<conio.h>

function f;

Window::Window(const int& width, const int& height) : Widget(0, 0, width, height)
{
	show();

	// 设置绘图样式
	LOGFONT f;							// 字体的属性
	gettextstyle(&f);					// 获取当前文字样式 LOGFONT 结构体的指针。
	f.lfQuality = ANTIALIASED_QUALITY;	// 指定文字的输出质量
	settextstyle(&f);					// 设置当前文字样式
	settextcolor(BLACK);				// 字体颜色
	setbkmode(TRANSPARENT);				// 设置当前设备图案填充和文字输出时的背景模式 透明
	setlinecolor(BLACK);				// 设置当前设备画线颜色

	// 创建主窗口按钮
	w1 = new Button(220, 300, 150, 40, "作业一");
	w2 = new Button(220, 350, 150, 40, "作业二");
	w3 = new Button(220, 400, 150, 40, "作业三");
	w4 = new Button(220, 450, 150, 40, "作业四");
	w5 = new Button(220, 500, 150, 40, "作业五");
	w6 = new Button(220, 550, 150, 40, "作业六");
	w7= new Button(220, 600, 150, 40, "作业七");
	w8 = new Button(220, 650, 150, 40, "作业八");
	mainWindow_exit = new Button(220, 700, 150, 40, "退出程序");

	// 创建作业一窗口按钮
	c11 = new Button(850, 350, 120, 40, "程序一");
	c12 = new Button(850, 400, 120, 40, "程序二");
	c13 = new Button(850, 450, 120, 40, "程序三");
	c14 = new Button(850, 500, 120, 40, "程序四");
	c15 = new Button(850, 550, 120, 40, "程序五");
	c16 = new Button(850, 600, 120, 40, "程序六");
	w1_back = new Button(850, 650, 120, 40, "返回");

	// 创建作业二窗口按钮
	c21 = new Button(850, 350, 120, 40, "程序一");
	c22 = new Button(850, 400, 120, 40, "程序二");
	c23 = new Button(850, 450, 120, 40, "程序三");
	c24 = new Button(850, 500, 120, 40, "程序四");
	w2_back = new Button(850, 550, 120, 40, "返回");

	// 创建作业三窗口按钮
	c31 = new Button(850, 350, 120, 40, "程序一");
	c32 = new Button(850, 400, 120, 40, "程序二");
	c33 = new Button(850, 450, 120, 40, "程序三");
	c34 = new Button(850, 500, 120, 40, "程序四");
	w3_back = new Button(850, 550, 120, 40, "返回");

	// 创建作业四窗口按钮
	c41 = new Button(850, 350, 120, 40, "程序一");
	c42 = new Button(850, 400, 120, 40, "程序二");
	c43 = new Button(850, 450, 120, 40, "程序三");
	c44 = new Button(850, 500, 120, 40, "程序四");
	c45 = new Button(850, 550, 120, 40, "程序五");
	w4_back = new Button(850, 600, 120, 40, "返回");

	// 创建作五窗口按钮
	c51 = new Button(850, 350, 120, 40, "程序一");
	c52 = new Button(850, 400, 120, 40, "程序二");
	c53 = new Button(850, 450, 120, 40, "程序三");
	c54 = new Button(850, 500, 120, 40, "程序四");
	w5_back = new Button(850, 550, 120, 40, "返回");

	// 创建作业六窗口按钮
	c61 = new Button(850, 350, 120, 40, "程序一");
	c62 = new Button(850, 400, 120, 40, "程序二");
	c63 = new Button(850, 450, 120, 40, "程序三");
	c64 = new Button(850, 500, 120, 40, "程序四");
	w6_back = new Button(850, 550, 120, 40, "返回");

	// 创建作业七窗口按钮
	c71 = new Button(850, 350, 120, 40, "程序一");
	c72 = new Button(850, 400, 120, 40, "程序二");
	c73 = new Button(850, 450, 120, 40, "程序三");
	c74 = new Button(850, 500, 120, 40, "程序四");
	w7_back = new Button(850, 550, 120, 40, "返回");

	// 创建作业八窗口按钮
	c81 = new Button(850, 350, 120, 40, "程序一");
	c82 = new Button(850, 400, 120, 40, "程序二");
	c83 = new Button(850, 450, 120, 40, "程序三");
	c84 = new Button(850, 500, 120, 40, "程序四");
	w8_back = new Button(850, 550, 120, 40, "返回");

	showMainWindow();				// 显示主界面
}

void Window::show() const
{
	// 新建窗口
	SetWindowText(initgraph(width, height, EX_SHOWCONSOLE), "C语言作业展示系统");//设置窗口标题
	setbkcolor(WHITE);
	cleardevice();
}

void Window::messageLoop()
{
	// 开启消息循环
	ExMessage msg;
	while (true)
	{
		// 获取并判断消息
		msg = getmessage();//用于获取一个消息。如果当前消息队列中没有，就一直等待
		switch (state)
		{
		case Window::mainWindow:
			if (w1->state(msg))		
			{
				show_work1();
			}
			else if (w2->state(msg))
			{
				show_work2();
			}
			else if (w3->state(msg))
			{
				show_work3();
			}
			else if (w4->state(msg))
			{
				show_work4();
			}
			else if (w5->state(msg))
			{
				show_work5();
			}
			else if (w6->state(msg))
			{
				show_work6();
			}
			else if (w7->state(msg))
			{
				show_work2();
			}
			else if (w2->state(msg))
			{
				show_work7();
			}
			else if (w8->state(msg))
			{
				show_work8();
			}
			else if (mainWindow_exit->state(msg) && msg.message != WM_LBUTTONUP)// 退出程序
			{
				return;								// 直接return返回主函数
			}
			break;
		case Window::win1:
			if (c11->state(msg))
			{
				MessageBox(GetHWnd(), "现在在控制台输出指定半径的圆的周长和体积", "操作提示", MB_OK);
				f.p11();
			}
			else if (c12->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入两个数用于交换", "操作提示", MB_OK);
				f.p12();
			}
			else if (c13->state(msg))
			{
				MessageBox(GetHWnd(), "现在请在控制台输入摄氏度", "操作提示", MB_OK);
				f.p13();
			}
			else if (c14->state(msg))
			{
				MessageBox(GetHWnd(), "现在请在控制台输入一个小写字母", "操作提示", MB_OK);
				f.p14();
			}
			else if (c15->state(msg))
			{
				MessageBox(GetHWnd(), "现在请在控制台输入一个大写字母", "操作提示", MB_OK);
				f.p15();
			}
			else if (c16->state(msg))
			{
				MessageBox(GetHWnd(), "现在输出数字型9和字符型9", "操作提示", MB_OK);
				f.p16();
			}
			else if (w1_back->state(msg))		// 返回主窗口
			{
				showMainWindow();
			}
			break;
		case Window::win2:
			if (w2_back->state(msg))
			{
				showMainWindow();
			}
			else if (c21->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个数，程序将逆序输出他", "操作提示", MB_OK);
				f.p21();
			}
			else if (c22->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入圆柱体的高和底面半径", "操作提示", MB_OK);
				f.p22();
			}
			else if (c23->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入3个数字，将输出是3的偶倍数的数", "操作提示", MB_OK);
				f.p23();
			}
			else if (c24->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个年份，程序将判断其是不是闰年", "操作提示", MB_OK);
				f.p24();
			}
			break;
		case Window::win3:
			if (w3_back->state(msg))
			{
				showMainWindow();
			}
			else if (c31->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个日期，程序将输出是星期几", "操作提示", MB_OK);
				f.p31();
			}
			else if (c32->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个成绩，程序将输出其对应等级", "操作提示", MB_OK);
				f.p32();
			}
			else if (c33->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个算术表达式", "操作提示", MB_OK);
				f.p33();
			}
			else if (c34->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入4个数字，程序将对其进行排序", "操作提示", MB_OK);
				f.p34();
			}
			break;
		case Window::win4:
			if (w4_back->state(msg))
			{
				showMainWindow();
			}
			else if (c41->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入求任意两个正整数,程序将输出之间的所有素数。", "操作提示", MB_OK);
				f.p41();
			}
			else if (c42->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个小于1000的正整数，程序将判断该数是不是素数，若不是输出能被几个９整除", "操作提示", MB_OK);
				f.p42();
			}
			else if (c43->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一十进制数，程序将该十进制数转换为二进制数输出", "操作提示", MB_OK);
				f.p43();
			}
			else if (c44->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入6名学生的5门成绩，程序将分别统计并输出每个学生的平均成绩", "操作提示", MB_OK);
				f.p44();
			}
			else if (c45->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p45();
			}
			break;
		case Window::win5:
			if (w5_back->state(msg))
			{
				showMainWindow();
			}
			else if (c51->state(msg))
			{
				MessageBox(GetHWnd(), "程序将对随机生成的10个数分别用冒泡和选择二种方法对数组元素排序", "操作提示", MB_OK);
				f.p51();
			}
			else if (c52->state(msg))
			{
				MessageBox(GetHWnd(), "程序将随机生成二个二维数组，并数乘后生成输出", "操作提示", MB_OK);
				f.p52();
			}
			else if (c53->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一串字符，程序将统计其中字母个数，数字个数、空格个数及其它符号个数", "操作提示", MB_OK);
				f.p53();
			}
			else if (c54->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个数，程序用折半查找法找出该数是随机排序数组(已经从小到大排序)中第几个元素", "操作提示", MB_OK);
				f.p54();
			}
			break;
		case Window::win6:
			if (w6_back->state(msg))
			{
				showMainWindow();
			}
			else if (c61->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p61();
			}
			else if (c62->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p62();
			}
			else if (c63->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p63();
			}
			else if (c64->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p64();
			}
			break;
		case Window::win7:
			if (w7_back->state(msg))
			{
				showMainWindow();
			}
			else if (c71->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p71();
			}
			else if (c72->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p72();
			}
			else if (c73->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p73();
			}
			else if (c74->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p74();
			}
			break;
		case Window::win8:
			if (w8_back->state(msg))
			{
				showMainWindow();
			}
			else if (c81->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p81();
			}
			else if (c82->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p82();
			}
			else if (c83->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p83();
			}
			else if (c84->state(msg))
			{
				MessageBox(GetHWnd(), "请在控制台输入一个奇数n，程序将输出对应的漏斗形状", "操作提示", MB_OK);
				f.p84();
			}
			break;
		default:
			break;
		}
	}
}

void Window::close()
{
	closegraph();
}

void Window::showMainWindow()
{
	state = WindowState::mainWindow;
	cleardevice();

	// 加载背景图片
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	// 绘制提示文字
	RECT rect = { 0, 0, width, 200 };
	settextstyle(70, 0, "华光胖头鱼_CNKI");

	//用于在指定区域内以指定格式输出字符串
	drawtext("C语言作业展示系统", &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	// 显示按钮
	w1->show();
	w2->show();
	w3->show();
	w4->show();
	w5->show();
	w6->show();
	mainWindow_exit->show();
}

void Window::show_work1()
{
	state = WindowState::win1;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c11->show();
	c12->show();
	c13->show();
	c14->show();
	c15->show();
	c16->show();
	w1_back->show();
}

void Window::show_work2()
{
	state = WindowState::win2;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c21->show();
	c22->show();
	c23->show();
	c24->show();
	w2_back->show();
}

void Window::show_work3()
{
	state = WindowState::win3;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c31->show();
	c32->show();
	c33->show();
	c34->show();
	w3_back->show();
}

void Window::show_work4()
{
	state = WindowState::win4;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c41->show();
	c42->show();
	c43->show();
	c44->show();
	c45->show();
	w4_back->show();
}

void Window::show_work5()
{
	state = WindowState::win5;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c51->show();
	c52->show();
	c53->show();
	c54->show();
	w5_back->show();
}

void Window::show_work6()
{
	state = WindowState::win6;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c61->show();
	c62->show();
	c63->show();
	c64->show();
	w6_back->show();
}

void Window::show_work7()
{
	state = WindowState::win7;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c71->show();
	c72->show();
	c73->show();
	c74->show();
	w7_back->show();
}

void Window::show_work8()
{
	state = WindowState::win8;
	cleardevice();
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	c81->show();
	c82->show();
	c83->show();
	c84->show();
	w8_back->show();
}
