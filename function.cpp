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
	cin.clear();
}

void function::p15()
{
	system("cls");
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
	cin.clear();
}

void function::p16()
{
	system("cls");
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
		if (n3 == 0)
		{
			if (n2 == 0)
			{
				printf("排除首位是0的逆序输出:%d",n1);
			}
			else
			{
				printf("排除首位是0的逆序输出:%d%d", n2, n1);
			}
		}
		else
		{
			printf("排除首位是0的逆序输出:%d%d%d", n3, n2, n1);
		}
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
	cin.clear();
}

void function::p33()
{
	system("cls");
	char ch;
	int a, b;
	printf("please input a arithmetic expression\n");
	cin >> a >> ch >> b;
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
	printf("please input a array,the function will sort it\n");
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
	cin.clear();
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
		cout << "第" << i +1<< "位同学平均成绩是: " <<arr[i]<< endl;
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
	cin.clear();
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
	srand(time(0));
	int arr[3][4];
	memset(arr, 0, sizeof(arr));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = rand() % 100 + 1;
		}
	}
	cout << "先打印展示随机二维数组" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int arr_r[5];
	int arr_c[5];
	memset(arr_r, -1, sizeof(arr_r));
	memset(arr_c, -1, sizeof(arr_c));
	for (int i = 0; i < 3; i++)
	{
		int max_r = arr[i][0];
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] > max_r)
			{
				max_r = arr[i][j];
			}
		}
		arr_r[i] = max_r;
	}

	for (int j = 0; j < 4; j++)
	{
		int min_c = arr[0][j];
		for (int i = 0; i < 3; i++)
		{
			if (arr[i][j] < min_c)
			{
				min_c = arr[i][j];
			}
		}
		arr_c[j] = min_c;
	}

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if ((arr[i][j] == arr_r[i]) && (arr[i][j] == arr_c[j]))
			{
				cout << "第" << i + 1 << "行，第" << j + 1 << "列是鞍点" << endl;
				count++;
			}
		}
	}

	if (count == 0)
	{
		cout << "没有鞍点" << endl;
	}

}



void function::Bubble(char stu[10][20])
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (strcmp(stu[i], stu[j]) > 0)
			{
				char temp[20];
				strcpy(temp, stu[i]);
				strcpy(stu[i], stu[j]);
				strcpy(stu[j], temp);
			}
		}
	}
	cout << "现在打印排序后的学生姓名" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << stu[i] << endl;
	}
}

void function::Selection(char stu[10][20])
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		int k = i;
		for (j = i + 1; j < 10; j++)
		{
			if (strcmp(stu[j], stu[k]) < 0)
			{
				k = j;
			}
			if (k != i)
			{
				char temp[20];
				strcpy(temp, stu[i]);
				strcpy(stu[i], stu[k]);
				strcpy(stu[k], temp);
			}
		}
	}
	cout << "现在打印排序后的学生姓名" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << stu[i] << endl;
	}
}


void function::p62()
{
	system("cls");
	char stu[10][20];
	int i;
	char ch;
	for (i = 0; i < 10; i++)
	{
		cin >> stu[i];
	}
	cout << "do you want to use bubble sort or select sort?('1-bubble','2-selection')";
	cin >> ch;
	switch (ch)
	{
	case '1':
		Bubble(stu);
		break;
	case '2':
		Selection(stu);
		break;
	default:
		break;
	}
	cin.clear();
}

void function::p63()
{
	system("cls");
	cout << "please enter two string" << endl;
	char s1[20];
    cin>>s1;
    char s2[20];
    cin>>s2;
    int m,n;
    cin>>m>>n;
    int len=strlen(s1);
    for(int i=len;i<len+n;i++)
    {
        s1[i]=s2[m-1+i-len];
    }
    for(int i=0;i<len+n;i++)
    {
        cout<<s1[i];
    }
}

void function::insert(int* arr, int pos, int num)
{
	for (int i = 10; i > pos + 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[pos + 1] = num;
}

void function::halfsearch(int* arr, int num)
{
	int left = 0;
	int right = 9;
	int mid = 0;
	int flag = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		else if (num > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			insert(arr, mid, num);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		insert(arr, right, num);
	}
}

void function::p64()
{
	system("cls");
	srand(time(0));
	int arr[11];
	memset(arr, -1, sizeof(arr));
	for (int i = 0; i < 10; i++)           //保证前十个元素没有相同的
	{
		int temp = rand() % 100 + 1;
		for (int j = 0; j < i; j++)
		{
			if (temp == arr[j])
			{
				temp = rand() % 100 + 1;
				j = 0;
			}
		}
		arr[i] = temp;
	}
	cout << "输出随机数列" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	shellsSort(arr, 10);
	cout << "输出排序后的随机数列" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "请输入要插入的数字" << endl;
	int num = 0;
	cin >> num;
	halfsearch(arr, num);
	for (int i = 0; i < 11; i++)
	{
		cout << arr[i] << " ";
	}

}

int function::fprint(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return ((2 * n - 1) * x - fprint(n - 1, x) - (n - 1) * fprint(n - 2, x)) / n;
}

void function::p71()
{
	system("cls");
	int n, x;
	scanf("%d %d", &n, &x);
	printf("%d", fprint(n, x));
}

int function::Sum(int a[][4], int sum)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &a[i][j]);
			if (i == 0 || i == 2 || j == 0 || j == 3)
				sum = sum + a[i][j];
		}
	}
	return sum;
}

void function::p72()
{
	system("cls");
	int sum = 0;
	int a[3][4];
	printf("%d", Sum(a, sum));
}

int function::F(char * a, int n)
{
	int sum = 0;
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		if (a[i] >= '0' && a[i] <= '9')
			sum += (a[i] - '0') * (int)pow(n, strlen(a) - i - 1);
		else if (a[i] >= 'A' && a[i] <= 'F')
			sum += (a[i] - 'A' + 10) * (int)pow(n, strlen(a) - i - 1);
		else if (a[i] >= 'a' && a[i] <= 'f')
			sum += (a[i] - 'a' + 10) * (int)pow(n, strlen(a) - i - 1);
		else
		{
			printf("输入错误！");
		}
	}
	return sum;
}

void function::p73()
{
	system("cls");
	int n;
	char a[10];
	printf("请输入要转换的进制(2,8,16)：");
	scanf("%d", &n);
	getchar();
	printf("请输入要转换的数字：");
	scanf("%s", &a);
	printf("%d", F(a, n));
	cin.ignore(1024, '\n');
}

void function::p74()
{
	system("cls");
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			printf("* ");
		printf("\n");
	}
}

void function::strcat_(char str1[], char str2[])
{
	strcat(str1, str2);
	printf("相连后的结果为:");
	puts(str1);
	return;
}

void function::strcmp_(char str1[], char str2[])
{
	if (strcmp(str1, str2) > 0)
	{
		printf("第一个字符串大于第二个字符串!\n");
	}
	else if (strcmp(str1, str2) == 0)
	{
		printf("两个字符串相等！\n");
	}
	else
	{
		printf("第一个字符串小于第二个字符串!\n");
	}
	return;
}

void function::strcpy_(char str1[], char str2[])
{
	strcpy(str1, str2);
	printf("复制后的结果为:");
	puts(str1);
	return;
}

void function::p81()
{
	system("cls");
	printf("请输入两个字符串,长度小于10\n");
	char str1[10], str2[10];
	scanf("%s", str1);
	scanf("%s", str2);
	printf("1、将两个字符串相连\n2、将一个字符串复制到另一个字符串中去\n3、比较两个字符串的大小\n");
	printf("请输入:\n");
	int want;
	scanf("%d", &want);
	switch (want)
	{
	case 1:
		strcat_(str1, str2);
		break;
	case 2:
		strcpy_(str1, str2);
		break;
	case 3:
		strcmp_(str1, str2);
		break;
	}
	cin.ignore(1024, '\n');
}

void function::Sum_char(char str[], int length_str)
{
	int dig = 0, letter = 0, character = 0, space = 0;
	for (int i = 0; i < length_str; i++)
	{
		if (str[i] == 32)
		{
			space++;
		}
		else if (str[i] < '0')
		{
			character++;
		}
		else if (str[i] <= '9')
		{
			dig++;
		}
		else if (str[i] < 'A')
		{
			character++;
		}
		else if (str[i] <= 'Z')
		{
			letter++;
		}
		else if (str[i] < 'a')
		{
			character++;
		}
		else if (str[i] <= 'z')
		{
			letter++;
		}
		else
		{
			character++;
		}
	}
	printf("统计结果如下:\n");
	printf("字母个数为:%d\n", letter);
	printf("数字个数如下:%d\n", dig);
	printf("空格个数如下:%d\n", space);
	printf("其它字符个数如下:%d\n", character);
	return;
}

void function::p82()
{
	system("cls");
	char str[100];
	printf("请输入:");
	gets_s(str);
	Sum_char(str, strlen(str));
	cin.clear();
	return;
}

int score[10][5];
int student_avg[10];
int avg[5];

void function::avg_score()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			student_avg[i] += score[i][j];
		}
		student_avg[i] = student_avg[i] / 5;
	}
}

void function::avg_()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			avg[i] += score[j][i];
		}
		avg[i] = avg[i] / 10;
	}
}

void function::highest()
{
	int student, lesson;
	int max = score[0][0];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (score[i][j] > max)
			{
				max = score[i][j];
				student = i;
				lesson = j;
			}
		}
	}
	printf("学生%d,课程%d", student, lesson);
}

double function::variance()
{
	int temp = 0;
	for (int i = 0; i < 10; i++)
	{
		temp += pow(student_avg[i], 2);
	}
	return temp / 10 - pow((temp / 10), 2);
}

void function::p83()
{
	system("cls");
	printf("请输入十个学生的5门课成绩\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}
	printf("每个学生平均分如下\n");
	avg_score();
	for (int i = 0; i < 10; i++)
	{
		printf("%5d", student_avg[i]);
	}
	printf("\n每门课平均分如下\n");
	avg_();
	for (int i = 0; i < 5; i++)
	{
		printf("%5d", avg[i]);
	}
	printf("\n最高分的分数对应的学生和课程是\n");
	highest();
	printf("平均分方差是:%lf", variance());
	printf("请输入十个学生的5门课成绩\n");
	for(int i=0;i<10;i++)
    {
		for(int j=0;j<5;j++)
        {
			scanf("%d",&score[i][j]);
		}
	}
	printf("每个学生平均分如下\n");
	avg_score();
	for(int i=0;i<10;i++)
    {
        printf("%5d",student_avg[i]);
    }
	printf("\n每门课平均分如下\n");
	avg_();
	for(int i=0;i<5;i++)
    {
        printf("%5d",avg[i]);
    }
	printf("\n最高分的分数对应的学生和课程是\n");
	highest();
	printf("平均分方差是:%lf",variance());
	system("cls");
}

void function::input(int num[], char name[N][8])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("请输入编号: ");
		scanf("%d", &num[i]);
		printf("请输入名称: ");
		getchar();
		scanf("%s", name[i]);
	}
}

void function::sort(int num[], char name[N][8])
{
	int i, j, min, templ;
	char temp2[8];
	for (i = 0; i < N - 1; i++)
	{
		min = i;
		for (j = i; j < N; j++)
			if (num[min] > num[j])  min = j;
		templ = num[i];
		strcpy(temp2, name[i]);
		num[i] = num[min];
		strcpy(name[i], name[min]);
		num[min] = templ;
		strcpy(name[min], temp2);
	}
	printf("\n结果为:\n");
	for (i = 0; i < N; i++)
		printf("\n %5d%10s", num[i], name[i]);
}

void function::search(int n, int num[], char name[N][8])
{
	int top, bott, mid, loca, sign;
	top = 0;
	bott = N - 1;
	loca = 0;
	sign = 1;
	if ((n < num[0]) || (n > num[N - 1]))
		loca = -1;
	while ((sign == 1) && (top <= bott))
	{
		mid = (bott + top) / 2;
		if (n == num[mid])
		{
			loca = mid;
			printf("编号为 %d , 名称为 %s.\n", n, name[loca]);
			sign = -1;
		}
		else if (n < num[mid])
			bott = mid - 1;
		else
			top = mid + 1;
	}
	if (sign == 1 || loca == -1)
		printf("无法查询到结果\n");
}

void function::p84()
{
	system("cls");
	int num[N], number, flag = 1, c;
	char name[N][8];
	input(num, name);
	sort(num, name);
	while (flag == 1)
	{
		printf("\n请输入想要查询的编号:");
		scanf("%d", &number);
		search(number, num, name);
		printf("是否继续查询(Y/N)?");
		getchar();
		c = getchar();
		if (c == 'N' || c == 'n')
			flag = 0;
	}
	cin.ignore(1024, '\n');
}
