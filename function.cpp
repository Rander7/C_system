#include "function.h"

void function::p11()
{
	system("cls");
	float r = 3.2, c, v;
	c = Pi * r * r;
	v = 4.0 / 3.0 * Pi * r * r * r;
	cout << "Բ���ܳ�Ϊ" << c << endl << "Բ�����Ϊ" << v << endl;
}

void function::p12()
{
	system("cls");
	int a, b, temp;
	cin >> a >> b;
	temp = a;
	a = b;
	b = temp;
	cout << "�������һ����Ϊ" << a << endl << "�ڶ�����Ϊ" << b << endl;
}

void function::p13()
{
	system("cls");
	float celsius, fahren;
	cin >> celsius;
	fahren = (9.0 / 5.0) * (celsius - 10) + 50;
	cout << "ת����Ļ��϶�Ϊ:" << fahren << endl;
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
			cout << "�����������������" << endl;
			cin >> a;
		}
		if (a >= 97 && a <= 122) break;
	}
	b = a - 32;
	cout << "ת����Ĵ�д��ĸΪ:" << b << endl;
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
			cout << "�����������������" << endl;
			cin >> a;
		}
		if (a >= 65 && a <= 90) break;
	}
	b = a + 32;
	cout << "ת�����Сд��ĸΪ:" << b << endl;
}

void function::p16()
{
	system("cls");
	cin.ignore(1024, '\n');
	int a = 9;
	char b;
	cout << "������ֵ�͵�" << a << endl;
	b = a + 48;
	cout << "�����ַ��͵�" << b << endl;
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
	printf("�������:%d%d%d%d\n", n4, n3, n2, n1);
	if (n4 == 0) {
		printf("��������������λ��0�������ų���0�����:\n");
		printf("�ų���λ��0���������:%d%d%d", n3, n2, n1);
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
	printf("��Բ����Ĳ����Ϊ%.2f�������Ϊ%.2f�����Ϊ%.2f", la, sa, v);
}

void function::p23()
{
	system("cls");
	int n1, n2, n3, flag1 = 0, flag2 = 0, flag3 = 0;
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 % 3 == 0 && n1 % 2 == 0)
	{
		printf("%dΪ3�ı�����ż��\n", n1);
		flag1 = 1;
	}
	if (n2 % 3 == 0 && n2 % 2 == 0)
	{
		printf("%dΪ3�ı�����ż��\n", n2);
		flag2 = 1;
	}
	if (n3 % 3 == 0 && n3 % 2 == 0)
	{
		printf("%dΪ3�ı�����ż��\n", n3);
		flag3 = 1;
	}
	if (flag1 == 0 && flag2 == 0 && flag3 == 0)
	{
		printf("��������������ֶ�����3�ı�����ż��!");
	}
}

void function::p24()
{
	system("cls");
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("�����������");
	}
	else
	{
		printf("����ݲ�������");
	}
}

void function::p31()
{
	system("cls");
	const char* week[7] = { "������","����һ","���ڶ�","������","������","������","������" };
	int y;
	cin >> y;
	//�����,��,����Ϣ 
	int year, month, day;
	year = y / 10000, month = y % 10000 / 100, day = y % 100;
	//���ù�ʽ����������
	if (month == 1 || month == 2) {
		month += 12;
		year--;
	}
	int k = 0;
	k = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;	//��ʽ���������ڼ�
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
		// ��������ֱ�Ӳ�������
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
		cout << "����������" << endl;
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
			cout << t << "�������������ܱ�" << count << "��9����" << endl;
		}
		else
		{
			cout << n << "����������Ҳ���ܱ�9����" << endl;
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
		cout << "��" << i << "λͬѧƽ���ɼ���: " <<arr[i]<< endl;
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
	int i = 0;//��
	int j = 0;//��
	int k = 0;//�����У���k��Ԫ�����
	for (i = 0; i < 2; i++)//�ӵ�i�п�ʼ
	{
		for (j = 0; j < 2; j++)//�ӵ�j�п�ʼ
		{
			for (k = 0; k < 3; k++)//i��Ԫ�غ�j��Ԫ����ˣ�����ۼ�
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
			// �ַ�cΪ����
			nums++;
		}
		else if (ch >= 65 && ch <= 90 || (ch >= 97 && ch <= 122)) {
			// �ַ�cΪ��ĸ 65~99Ϊ��д��ĸ 97~122ΪСд��ĸ
			letters++;
		}
		else if (ch == 32) {
			// �ַ�cΪ�ո�
			spaces++;
		}
		else {
			others++;
		}
	}
	cout << "��������:" << nums << endl;
	cout << "�ַ�����:" << letters << endl;
	cout << "�ո�����:" << spaces << endl;
	cout << "�����ַ�����:" << others << endl;
}

void function::shellsSort(int *arr, int len)
{
	int d, i, j, temp;
	for (d = len / 2; d >= 1; d /= 2)
	{
		// ��������ֱ�Ӳ�������
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
	cout << "�������������ɵ�����" << endl;
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "�����������������" << endl;
	shellsSort(arr, 15);
	for (int i = 0; i < 15; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int num = 0;
	cout << "��������Ҫ���ҵ���" << endl;
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
			cout << "�ҵ�" << num << "��" << endl;
			cout << "������ĵ�" << mid + 1 << "λ" << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "��������û�и���" << endl;
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
