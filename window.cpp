#include"window.h"
#include<graphics.h>
#include<conio.h>

function f;

Window::Window(const int& width, const int& height) : Widget(0, 0, width, height)
{
	show();

	// ���û�ͼ��ʽ
	LOGFONT f;							// ���������
	gettextstyle(&f);					// ��ȡ��ǰ������ʽ LOGFONT �ṹ���ָ�롣
	f.lfQuality = ANTIALIASED_QUALITY;	// ָ�����ֵ��������
	settextstyle(&f);					// ���õ�ǰ������ʽ
	settextcolor(BLACK);				// ������ɫ
	setbkmode(TRANSPARENT);				// ���õ�ǰ�豸ͼ�������������ʱ�ı���ģʽ ͸��
	setlinecolor(BLACK);				// ���õ�ǰ�豸������ɫ

	// ���������ڰ�ť
	w1 = new Button(220, 300, 150, 40, "��ҵһ");
	w2 = new Button(220, 350, 150, 40, "��ҵ��");
	w3 = new Button(220, 400, 150, 40, "��ҵ��");
	w4 = new Button(220, 450, 150, 40, "��ҵ��");
	w5 = new Button(220, 500, 150, 40, "��ҵ��");
	w6 = new Button(220, 550, 150, 40, "��ҵ��");
	w7= new Button(220, 600, 150, 40, "��ҵ��");
	w8 = new Button(220, 650, 150, 40, "��ҵ��");
	mainWindow_exit = new Button(220, 700, 150, 40, "�˳�����");

	// ������ҵһ���ڰ�ť
	c11 = new Button(850, 350, 120, 40, "����һ");
	c12 = new Button(850, 400, 120, 40, "�����");
	c13 = new Button(850, 450, 120, 40, "������");
	c14 = new Button(850, 500, 120, 40, "������");
	c15 = new Button(850, 550, 120, 40, "������");
	c16 = new Button(850, 600, 120, 40, "������");
	w1_back = new Button(850, 650, 120, 40, "����");

	// ������ҵ�����ڰ�ť
	c21 = new Button(850, 350, 120, 40, "����һ");
	c22 = new Button(850, 400, 120, 40, "�����");
	c23 = new Button(850, 450, 120, 40, "������");
	c24 = new Button(850, 500, 120, 40, "������");
	w2_back = new Button(850, 550, 120, 40, "����");

	// ������ҵ�����ڰ�ť
	c31 = new Button(850, 350, 120, 40, "����һ");
	c32 = new Button(850, 400, 120, 40, "�����");
	c33 = new Button(850, 450, 120, 40, "������");
	c34 = new Button(850, 500, 120, 40, "������");
	w3_back = new Button(850, 550, 120, 40, "����");

	// ������ҵ�Ĵ��ڰ�ť
	c41 = new Button(850, 350, 120, 40, "����һ");
	c42 = new Button(850, 400, 120, 40, "�����");
	c43 = new Button(850, 450, 120, 40, "������");
	c44 = new Button(850, 500, 120, 40, "������");
	c45 = new Button(850, 550, 120, 40, "������");
	w4_back = new Button(850, 600, 120, 40, "����");

	// �������崰�ڰ�ť
	c51 = new Button(850, 350, 120, 40, "����һ");
	c52 = new Button(850, 400, 120, 40, "�����");
	c53 = new Button(850, 450, 120, 40, "������");
	c54 = new Button(850, 500, 120, 40, "������");
	w5_back = new Button(850, 550, 120, 40, "����");

	// ������ҵ�����ڰ�ť
	c61 = new Button(850, 350, 120, 40, "����һ");
	c62 = new Button(850, 400, 120, 40, "�����");
	c63 = new Button(850, 450, 120, 40, "������");
	c64 = new Button(850, 500, 120, 40, "������");
	w6_back = new Button(850, 550, 120, 40, "����");

	// ������ҵ�ߴ��ڰ�ť
	c71 = new Button(850, 350, 120, 40, "����һ");
	c72 = new Button(850, 400, 120, 40, "�����");
	c73 = new Button(850, 450, 120, 40, "������");
	c74 = new Button(850, 500, 120, 40, "������");
	w7_back = new Button(850, 550, 120, 40, "����");

	// ������ҵ�˴��ڰ�ť
	c81 = new Button(850, 350, 120, 40, "����һ");
	c82 = new Button(850, 400, 120, 40, "�����");
	c83 = new Button(850, 450, 120, 40, "������");
	c84 = new Button(850, 500, 120, 40, "������");
	w8_back = new Button(850, 550, 120, 40, "����");

	showMainWindow();				// ��ʾ������
}

void Window::show() const
{
	// �½�����
	SetWindowText(initgraph(width, height, EX_SHOWCONSOLE), "C������ҵչʾϵͳ");//���ô��ڱ���
	setbkcolor(WHITE);
	cleardevice();
}

void Window::messageLoop()
{
	// ������Ϣѭ��
	ExMessage msg;
	while (true)
	{
		// ��ȡ���ж���Ϣ
		msg = getmessage();//���ڻ�ȡһ����Ϣ�������ǰ��Ϣ������û�У���һֱ�ȴ�
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
			else if (mainWindow_exit->state(msg) && msg.message != WM_LBUTTONUP)// �˳�����
			{
				return;								// ֱ��return����������
			}
			break;
		case Window::win1:
			if (c11->state(msg))
			{
				MessageBox(GetHWnd(), "�����ڿ���̨���ָ���뾶��Բ���ܳ������", "������ʾ", MB_OK);
				f.p11();
			}
			else if (c12->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨�������������ڽ���", "������ʾ", MB_OK);
				f.p12();
			}
			else if (c13->state(msg))
			{
				MessageBox(GetHWnd(), "�������ڿ���̨�������϶�", "������ʾ", MB_OK);
				f.p13();
			}
			else if (c14->state(msg))
			{
				MessageBox(GetHWnd(), "�������ڿ���̨����һ��Сд��ĸ", "������ʾ", MB_OK);
				f.p14();
			}
			else if (c15->state(msg))
			{
				MessageBox(GetHWnd(), "�������ڿ���̨����һ����д��ĸ", "������ʾ", MB_OK);
				f.p15();
			}
			else if (c16->state(msg))
			{
				MessageBox(GetHWnd(), "�������������9���ַ���9", "������ʾ", MB_OK);
				f.p16();
			}
			else if (w1_back->state(msg))		// ����������
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
				MessageBox(GetHWnd(), "���ڿ���̨����һ�������������������", "������ʾ", MB_OK);
				f.p21();
			}
			else if (c22->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����Բ����ĸߺ͵���뾶", "������ʾ", MB_OK);
				f.p22();
			}
			else if (c23->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����3�����֣��������3��ż��������", "������ʾ", MB_OK);
				f.p23();
			}
			else if (c24->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ����ݣ������ж����ǲ�������", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���ڿ���̨����һ�����ڣ�������������ڼ�", "������ʾ", MB_OK);
				f.p31();
			}
			else if (c32->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ���ɼ�������������Ӧ�ȼ�", "������ʾ", MB_OK);
				f.p32();
			}
			else if (c33->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ���������ʽ", "������ʾ", MB_OK);
				f.p33();
			}
			else if (c34->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����4�����֣����򽫶����������", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���ڿ���̨��������������������,�������֮�������������", "������ʾ", MB_OK);
				f.p41();
			}
			else if (c42->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ��С��1000���������������жϸ����ǲ�������������������ܱ�����������", "������ʾ", MB_OK);
				f.p42();
			}
			else if (c43->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һʮ�����������򽫸�ʮ������ת��Ϊ�����������", "������ʾ", MB_OK);
				f.p43();
			}
			else if (c44->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����6��ѧ����5�ųɼ������򽫷ֱ�ͳ�Ʋ����ÿ��ѧ����ƽ���ɼ�", "������ʾ", MB_OK);
				f.p44();
			}
			else if (c45->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���򽫶�������ɵ�10�����ֱ���ð�ݺ�ѡ����ַ���������Ԫ������", "������ʾ", MB_OK);
				f.p51();
			}
			else if (c52->state(msg))
			{
				MessageBox(GetHWnd(), "����������ɶ�����ά���飬�����˺��������", "������ʾ", MB_OK);
				f.p52();
			}
			else if (c53->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ���ַ�������ͳ��������ĸ���������ָ������ո�������������Ÿ���", "������ʾ", MB_OK);
				f.p53();
			}
			else if (c54->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ�������������۰���ҷ��ҳ������������������(�Ѿ���С��������)�еڼ���Ԫ��", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p61();
			}
			else if (c62->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p62();
			}
			else if (c63->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p63();
			}
			else if (c64->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p71();
			}
			else if (c72->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p72();
			}
			else if (c73->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p73();
			}
			else if (c74->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
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
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p81();
			}
			else if (c82->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p82();
			}
			else if (c83->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
				f.p83();
			}
			else if (c84->state(msg))
			{
				MessageBox(GetHWnd(), "���ڿ���̨����һ������n�����������Ӧ��©����״", "������ʾ", MB_OK);
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

	// ���ر���ͼƬ
	loadimage(NULL, BACKGROUND_IMAGE, 1000, 800);

	// ������ʾ����
	RECT rect = { 0, 0, width, 200 };
	settextstyle(70, 0, "������ͷ��_CNKI");

	//������ָ����������ָ����ʽ����ַ���
	drawtext("C������ҵչʾϵͳ", &rect, DT_CENTER | DT_VCENTER | DT_SINGLELINE);

	// ��ʾ��ť
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
