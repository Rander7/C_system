#pragma once
#include "widget.h"
#include "button.h"
#include"function.h"
#define BACKGROUND_IMAGE "background.jpg"

class Window :public Widget
{
public:
	Window(const int& width = 600, const int& height = 400);

	void show() const;				// 显示窗口
	void messageLoop();				// 消息循环
	void close();					// 关闭窗口

	void showMainWindow();			// 显示主窗口
	void show_work1();
	void show_work2();
	void show_work3();
	void show_work4();
	void show_work5();
	void show_work6();
	void show_work7();
	void show_work8();


public:
	// 窗口状态标识，每个状态代表了一个界面
	enum WindowState { mainWindow,win1,win2,win3,win4,win5,win6,win7,win8 };

private:
	// 主窗口按钮
	Button* mainWindow_exit;
	Button* w1;
	Button* w2;
	Button* w3;
	Button* w4;
	Button* w5;
	Button* w6;
	Button* w7;
	Button* w8;

	// 第1次作业按钮
	Button* c11;
	Button* c12;
	Button* c13;
	Button* c14;
	Button* c15;
	Button* c16;
	Button* w1_back;

	// 第2次作业按钮
	Button* c21;
	Button* c22;
	Button* c23;
	Button* c24;
	Button* w2_back;

	// 第3次作业按钮
	Button* c31;
	Button* c32;
	Button* c33;
	Button* c34;
	Button* w3_back;

	// 第4次作业按钮
	Button* c41;
	Button* c42;
	Button* c43;
	Button* c44;
	Button* c45;
	Button* w4_back;

	// 第5次作业按钮
	Button* c51;
	Button* c52;
	Button* c53;
	Button* c54;
	Button* w5_back;

	// 第6次作业按钮
	Button* c61;
	Button* c62;
	Button* c63;
	Button* c64;
	Button* w6_back;

	// 第7次作业按钮
	Button* c71;
	Button* c72;
	Button* c73;
	Button* c74;
	Button* w7_back;

	// 第8次作业按钮
	Button* c81;
	Button* c82;
	Button* c83;
	Button* c84;
	Button* w8_back;

	// 窗口状态
	WindowState state;							
};