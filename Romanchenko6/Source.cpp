#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<locale.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "");
//1.���� �����������(����� ���������������) �����, � � ����� ������������� ����� d.��������� ������� q � ������� r ��� �������, � �� d
	/*int a, b, q, r;
	printf("������� ����������� ����� a: ");
	scanf_s("%d", &a);
	printf("������� ����� ������������ ����� b: ");
	scanf_s("%d", &b);
	q = a / b;
	printf("�������: %d\n", &q);
	r = a % b;
	printf("������� ��� �������: %d\n", &r);*/
//2.�������� ������� int f(int x, int y), ������� ���������� 0, ���� �������� x � y ��� ����� ����, 12 / x, ���� y ����� 0, 12 / y, ���� x ����� 0, ����� 144 / (x*y).

	/*srand(time(NULL));
	int x = 0 + rand() % 12;
	int y = 0 + rand() % 12;
	int f, f1, f2;
start:
	if (x==0)
	{
		int f1 =(12 / y);
		printf("X= %d\n", f1);}
	else if(y==0)
	{
		int f2 =(12 / x);
		printf("Y= %d\n",f2);
	}
	else
	{
		int f =(144 / (x*y));
		printf("F=  %d\n",f);
	}*/
//3.�������� ������� int f(int x, int y), ������� ���������� x - y, ���� x ������ y, ����� ���������� y - x
	/*srand(time(NULL));
	int x = -4 + rand() % 88;
	int y = -4 + rand() % 88;
	int f, f1;
start:
	if (x>y)
	{
		int f = float(x - y);
		printf("X-Y= %d\n", f);
	}
	else
	{
		int f1 = float(y - x);
		printf("Y-X= %d\n", f1);
	}*/
//4.�������� ������� double f(double x, double y), ������� ���������� x / y, ���� x ������ y, ����� ���������� y / x.��������������, ��� �������� ���������� ������ ����.
	/*srand(time(NULL));
	int x = -22 + rand() % 666;
	int y = -22 + rand() % 666;
	double f, f1;
start:
	if (x > y)
	{
		int f = double(x / y);
		printf("X/Y= %d\n", f);
	}
	else
	{
		int f1 = double(y / x);
		printf("Y/X= %d\n", f1);
	}*/
//5.�������� ������� double f(double x, double y, double z), ������� ���������� m*n / k, ��� k ���� ������� �� ����� x, y, z, � m � n ���� ������� � ������� �� ���� �����.��������������, ��� �������� ���������� ������ ����
	/*srand(time(NULL));
	int k = 0 + rand() % 44;
	int m = 0 + rand() % 44;
	int n = 0 + rand() % 44;
	double f(double x, double y, double z);
	int x, y, z;
start: 
	z = double(m * n / k);
	printf("%d\n", z);*/
//6.�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
	/*srand(time(NULL));
	int a = -10 + rand() % 44;
	int b = -10 + rand() % 44;
	int c = -10 + rand() % 44;
	if ((a<=b) && (a<=c))
	{
		printf("A %d\n", a);
	}
	else if ((c<=a) && (c<=b))
	{
		printf("C %d\n", c);
	}
	else if ((b<=c) && (b<=a))
	{
		printf("B %d\n", b);
	}*/
//7.�������� ������� int f(int a, int b, int c), ������� ���������� ���������� �� �������� a, b, c.
	/*srand(time(NULL));
	int a = 0 + rand() % 333;
	int b = 0 + rand() % 333;
	int c = 0 + rand() % 333;
	if ((a>=b) && (a>=c))
	{
		printf("A %d\n", a);
	}
	else if ((c>=a) && (c>=b))
	{
		printf("C %d\n", c);
	}
	else if ((b>=c) && (b>=a))
	{
		printf("B %d\n", b);
	}*/
//8.�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� �2 + �2 = z2, ����� ���������� false.
/*srand(time(NULL));
int x = 0 + rand() % 2;
int y = 0 + rand() % 2;
int z = 0 + rand() % 4;
if (pow(x,2) + pow(y,2) == pow(z,2))
{
	printf("OK \n");
}
else
{
	printf("Not OK \n");
}*/
//9.�������� ������� bool f(int x, int y), ������� ���������� true, ���� x ������� ������ �� y, ��� ��������, y ������� ������ �� x, ����� ���������� false.��������������, ��� �������� ���������� ������ ����.
/*srand(time(NULL));
int x = 2 + rand() % 22;
int y = 2 + rand() % 44;
if (y/x!=0)
{
	printf("�� ����� \n");
}
else
{
	printf("����� \n");
}*/
//10.������������� ����� x, y, z ����� ���� ��������� ������������, ���� ������� �� ��� ������ ����� ���� ������.�������� ������� bool f(int x, int y, int z), ������� ���������� true, ���� ����� x, y, z ����� ���� ��������� ������������, ����� ���������� false.��������������, ��� �������� ���������� ������ ����
/*srand(time(NULL));
int x = 0 + rand() % 30;
int y = 0 + rand() % 15;
int z = 0 + rand() % 15;
if (y+z>x)
{
	printf("OK \n");
}
else if (y+z<=x)
{
	printf("Not Ok \n");
}*/
	system("pause");
	







}