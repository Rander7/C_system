#include "function.h"

void function::p11()
{
	system("cls");
	float r = 3.2, c, v;
	c = Pi * r * r;
	v = 4.0 / 3.0 * Pi * r * r * r;
	cout << "圆的周长为" << c << endl << "圆的体积为" << v << endl;
}

void function::p12()
{
	system("cls");
	int a, b, temp;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "交换后第一个数为" << a << endl << "第二个数为" << b << endl;
}

void function::p13()
{
	system("cls");
	float celsius, fahren;
	cin >> celsius;
	fahren = (9.0 / 5.0) * (celsius - 10) + 50;
	cout << "转换后的华氏度为:" << fahren << endl;
}

void function::p14()
{
	system("cls");
	cin.ignore(1024, '\n');
	char a, b;
	cin >> a;
	while (1)
	{
		if (a < 97 || a>122)
		{
			cout << "输入错误！请重新输入" << endl;
			cin >> a;
		}
		if (a >= 97 && a <= 122) break;
	}
	b = a - 32;
	cout << "转换后的大写字母为:" << b << endl;
}

void function::p15()
{
	system("cls");
	cin.ignore(1024, '\n');
	char a, b;
	cin >> a;
	while (1)
	{
		if (a < 65 || a>90)
		{
			cout << "输入错误！请重新输入" << endl;
			cin >> a;
		}
		if (a >= 65 && a <= 90) break;
	}
	b = a + 32;
	cout << "转换后的小写字母为:" << b << endl;
}

void function::p16()
{
	system("cls");
	cin.ignore(1024, '\n');
	int a = 9;
	char b;
	cout << "这是数值型的" << a << endl;
	b = a + 48;
	cout << "这是字符型的" << b << endl;
}

void function::p21()
{
	system("cls");
	int a, n1, n2, n3, n4;
	scanf("%d", &a);
	n1 = a / 1000;
	n2 = a / 100 % 10;
	n3 = a / 10 % 10;
	n4 = a % 10;
	printf("逆序输出:%d%d%d%d\n", n4, n3, n2, n1);
	if (n4 == 0) {
		printf("逆序后这种情况首位是0，我们排除了0再输出:\n");
		printf("排除首位是0的逆序输出:%d%d%d", n3, n2, n1);
	}
}

void function::p22()
{
	system("cls");
	int h, r;
	float la, sa, v;
	scanf("%d", &h);
	scanf("%d", &r);
	la = 2 * Pi * r * h;
	sa = 2 * Pi * r * r + 2 * Pi * r * h;
	v = Pi * r * r * h;
	printf("该圆柱体的侧面积为%.2f，表面积为%.2f，体积为%.2f", la, sa, v);
}

void function::p23()
{
	system("cls");
	int n1, n2, n3, flag1 = 0, flag2 = 0, flag3 = 0;
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 % 3 == 0 && n1 % 2 == 0)
	{
		printf("%d为3的倍数的偶数\n", n1);
		flag1 = 1;
	}
	if (n2 % 3 == 0 && n2 % 2 == 0)
	{
		printf("%d为3的倍数的偶数\n", n2);
		flag2 = 1;
	}
	if (n3 % 3 == 0 && n3 % 2 == 0)
	{
		printf("%d为3的倍数的偶数\n", n3);
		flag3 = 1;
	}
	if (flag1 == 0 && flag2 == 0 && flag3 == 0)
	{
		printf("您输入的三个数字都不是3的倍数的偶数!");
	}
}

void function::p24()
{
	system("cls");
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("该年份是闰年");
	}
	else
	{
		printf("该年份不是闰年");
	}
}

void function::p31()
{
	system("cls");
	const char* week[7] = { "星期天","星期一","星期二","星期三","星期四","星期五","星期六" };
	int y;
	cin >> y;
	//获得年,月,日信息 
	int year, month, day;
	year = y / 10000, month = y % 10000 / 100, day = y % 100;
	//利用公式，计算星期
	if (month == 1 || month == 2) {
		month += 12;
		year--;
	}
	int k = 0;
	k = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;	//公式，计算星期几
	cout << week[k] << endl;
}

void function::p32()
{
	system("cls");
	int grade;
	cin >> grade;
	if (grade < 0 || grade>100)
	{
		cout << "Input error!" << endl;
	}
	else
	{
		int grade_s = grade / 10;
		if (grade_s < 6)
		{
			grade_s = 0;
		}
		switch (grade_s)
		{
		case 9:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		case 0:
			cout << "E" << endl;
			break;
		default:
			break;
		}
	}
}

void function::p33()
{
	system("cls");
	char ch;
	int a, b;
	scanf("%d%c%d", &a, &ch, &b);
	switch (ch)
	{
	case '+':
		printf("%d%c%d=%d", a, ch, b, a + b);
		break;
	case '-':
		printf("%d%c%d=%d", a, ch, b, a - b);
		break;
	case '*':
		printf("%d%c%d=%d", a, ch, b, a * b);
		break;
	case '/':
		printf("%d%c%d=%d", a, ch, b, a / b);
		break;
	default:
		break;
	}
}

void function::shellsSort(vector<int>& arr, int len)
{
	int d, i, j, temp;
	for (d = len / 2; d >= 1; d /= 2)
	{
		// 这里类似直接插入排序
		for (i = d; i < len; i++) {
			temp = arr[i];
			for (j = i - d; j >= 0 && temp < arr[j]; j -= d) {
				arr[j + d] = arr[j];
			}
			arr[j + d] = temp;
		}
	}
}

void function::p34()
{
	system("cls");
	vector<int>array;
	int number;
	while (1)
	{
		cin >> number;
		array.push_back(number);
		if (cin.get() == '\n')
			break;

	}
	int len = array.size();
	shellsSort(array, len);

	for (int i = 0; i < len; i++)
	{
		cout << array[i] << " ";
	}
cin.ignore(1024,'\n');
}

int function::is_prime(int num)
{
	if (num <= 1)
		return 0;
	if (num == 2 || num == 3)
		return 1;
	else if (num % 6 != 1 && num % 6 != 5)
		return 0;
	for (int i = 5; i <= sqrt(num); i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
			return 0;
	}
	return 1;
}

void function::p41()
{
	system("cls");
	int min, max;
	cin >> min >> max;
	for (int i = min; i <= max; i++)
	{
		if (is_prime(i))
			cout << i << ' ';
	}
}

void function::p42()
{
	system("cls");
	int n;
	cin >> n;
	int count = 0;
	if (is_prime(n))
	{
		cout << "该数是素数" << endl;
	}
	else
	{
		if (n % 9 == 0)
		{
			int t = n;
			n /= 9;
			while (n)
			{
				count++;
				n /= 9;
			}
			cout << t << "不是素数，它能被" << count << "个9整除" << endl;
		}
		else
		{
			cout << n << "不是素数，也不能被9整除" << endl;
		}
	}
}

void function::p43()
{
	system("cls");
	int num;
	cin >> num;
	vector<int>A;
	while (num)
	{
		int t = num % 2;
		A.push_back(t);
		num /= 2;
	}
	for (vector<int>::iterator it = A.begin(); it != A.end(); it++)
	{
		cout << *it;
	}
}

void function::p44()
{
	system("cls");
	int arr[6] = { 0 };
	int a = 0;
	int sum = 0;
	for (int i = 0; i < 6; i++)
	{
		sum = 0;
		a = 0;
		for (int j = 0; j < 5; j++)
		{
			cin >> a;
			sum += a;
		}
		arr[i] = sum / 5;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << "第" << i << "位同学平均成绩是: " <<arr[i]<< endl;
	}
}

void function::p45()
{
	system("cls");
	int n;
	cin >> n;
	int half = n / 2;
	for (int i = 0; i <= half; i++)
	{
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = 1; j <= 2 * (half - i) + 1; j++)
			cout << '*';
		cout << endl;
	}
	for (int i = 1; i <= half; i++)
	{
		for (int j = half - i - 1; j >= 0; j--)
			cout << ' ';
		for (int j = 1; j <= 2 * i + 1; j++)
			cout << '*';
		cout << endl;
	}
}

void function::bubble(int* arr)
{
	int temp = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void function::select(int* arr)
{
	int left = 0;
	int right = 9;
	while (left < right)
	{
		int min = left;
		int max = right;
		for (int i = left; i <= right; i++) {
			if (arr[i] < arr[min])
				min = i;
			if (arr[i] > arr[max])
				max = i;
		}
		int temp = arr[max];
		arr[max] = arr[right];
		arr[right] = temp;
		if (min == right)
			min = max;
		temp = arr[min];
		arr[min] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
}

void function::p51()
{
	system("cls");
	int arr[11];
	memset(arr, 0, sizeof(arr));
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
	}
	bubble(arr);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	select(arr);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}

void function::p52()
{
	system("cls");
	srand(time(0));
	int a[2][3];
	int b[3][2];
	int c[2][2] = { 0 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			a[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			b[i][j] = rand() % 10;
		}
	}
	int i = 0;//行
	int j = 0;//列
	int k = 0;//行列中，第k个元素相乘
	for (i = 0; i < 2; i++)//从第i行开始
	{
		for (j = 0; j < 2; j++)//从第j列开始
		{
			for (k = 0; k < 3; k++)//i行元素和j列元素相乘，结果累加
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
}

void function::p53()
{
	system("cls");
	cin.ignore(1024, '\n');
	char* s;
	int nums = 0;
	int letters = 0;
	int spaces = 0;
	int others = 0;
	char ch;
	while ((ch = cin.get()) != '\n')
	{
		if (ch >= 48 && ch <= 57) {
			// 字符c为数字
			nums++;
		}
		else if (ch >= 65 && ch <= 90 || (ch >= 97 && ch <= 122)) {
			// 字符c为字母 65~99为大写字母 97~122为小写字母
			letters++;
		}
		else if (ch == 32) {
			// 字符c为空格
			spaces++;
		}
		else {
			others++;
		}
	}
	cout << "数字数是:" << nums << endl;
	cout << "字符数是:" << letters << endl;
	cout << "空格数是:" << spaces << endl;
	cout << "其他字符数是:" << others << endl;
}

void function::shellsSort(int *arr, int len)
{
	int d, i, j, temp;
	for (d = len / 2; d >= 1; d /= 2)
	{
		// 这里类似直接插入排序
		for (i = d; i < len; i++) {
			temp = arr[i];
			for (j = i - d; j >= 0 && temp < arr[j]; j -= d) {
				arr[j + d] = arr[j];
			}
			arr[j + d] = temp;
		}
	}
}


void function::p54()
{
	system("cls");
	srand(time(0));
	int arr[16];
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < 15; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
	cout << "首先输出随机生成的数列" << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "输出升序排序后的数列" << endl;
	shellsSort(arr, 15);
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int num = 0;
	cout << "请输入想要查找的数" << endl;
	cin >> num;
	int left = 0;
	int right = 14;
	int mid = 0;
	int flag = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid + 1;
		}
		else if (num > arr[mid])
		{
			left = mid - 1;
		}
		else
		{
			cout << "找到" << num << "了" << endl;
			cout << "在数组的第" << mid + 1 << "位" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "该数组中没有该数" << endl;
	}
}

void function::p61()
{
	system("cls");

}

void function::p62()
{
	system("cls");

}

void function::p63()
{
	system("cls");

}

void function::p64()
{
	system("cls");

}

void function::p71()
{
	system("cls");

}

void function::p72()
{
	system("cls");

}

void function::p73()
{
	system("cls");

}

void function::p74()
{
	system("cls");

}

void function::p81()
{
	system("cls");

}

void function::p82()
{
	system("cls");

}

void function::p83()
{
	system("cls");

}

void function::p84()
{
	system("cls");

}
