#pragma once
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<ctime>
#include<cstdio>
#define Pi 3.14
#define N 10
using namespace std;

class function
{
public:
	void p11();
	void p12();
	void p13();
	void p14();
	void p15();
	void p16();

	void p21();
	void p22();
	void p23();
	void p24();

	void p31();
	void p32();
	void p33();
	void p34();
	void shellsSort(vector<int>& arr, int len);

	void p41();
	int is_prime(int num);
	void p42();
	void p43();
	void p44();
	void p45();

	void p51();
	void bubble(int* arr);
	void select(int* arr);
	void p52();
	void p53();
	void p54();
	void shellsSort(int *arr, int len);

	void p61();

	void Bubble(char stu[10][20]);
	void Selection(char stu[10][20]);
	void p62();

	void p63();

	void halfsearch(int* arr, int num);
	void insert(int* arr, int pos, int num);
	void p64();

	int fprint(int n, int x);
	void p71();

	int Sum(int a[][4], int sum);
	void p72();

	int F(char a[], int n);
	void p73();
	void p74();

	void strcpy_(char str1[], char str2[]);
	void strcat_(char str1[], char str2[]);
	void strcmp_(char str1[], char str2[]);
	void p81();

	void Sum_char(char str[], int length_str);
	void p82();

	void avg_score();
	void avg_();
	void highest();
	double variance();
	void p83();

	void input(int num[], char name[N][8]);
	void sort(int num[], char name[N][8]);
	void search(int n, int num[], char name[N][8]);
	void p84();
};

