#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<locale.h>
#include<time.h>

int main()
{
	setlocale(LC_ALL, "");
//1.Дано натуральное(целое неотрицательное) число, а и целое положительное число d.Вычислить частное q и остаток r при делении, а на d
	/*int a, b, q, r;
	printf("Введите натуральное число a: ");
	scanf_s("%d", &a);
	printf("Введите целое положительно число b: ");
	scanf_s("%d", &b);
	q = a / b;
	printf("Частное: %d\n", &q);
	r = a % b;
	printf("Остаток при делении: %d\n", &r);*/
//2.Напишите функцию int f(int x, int y), которая возвращает 0, если значения x и y оба равны нулю, 12 / x, если y равен 0, 12 / y, если x равен 0, иначе 144 / (x*y).

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
//3.Напишите функцию int f(int x, int y), которая возвращает x - y, если x больше y, иначе возвращает y - x
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
//4.Напишите функцию double f(double x, double y), которая возвращает x / y, если x больше y, иначе возвращает y / x.Предполагается, что значения параметров больше нуля.
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
//5.Напишите функцию double f(double x, double y, double z), которая возвращает m*n / k, где k есть меньшее из чисел x, y, z, а m и n есть среднее и большее из этих чисел.Предполагается, что значения параметров больше нуля
	/*srand(time(NULL));
	int k = 0 + rand() % 44;
	int m = 0 + rand() % 44;
	int n = 0 + rand() % 44;
	double f(double x, double y, double z);
	int x, y, z;
start: 
	z = double(m * n / k);
	printf("%d\n", z);*/
//6.Напишите функцию int f(int a, int b, int c), которая возвращает наименьшее из значений a, b, c.
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
//7.Напишите функцию int f(int a, int b, int c), которая возвращает наибольшее из значений a, b, c.
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
//8.Напишите функцию bool f(int x, int y, int z), которая возвращает true, если х2 + у2 = z2, иначе возвращает false.
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
//9.Напишите функцию bool f(int x, int y), которая возвращает true, если x делится нацело на y, или наоборот, y делится нацело на x, иначе возвращает false.Предполагается, что значения параметров больше нуля.
/*srand(time(NULL));
int x = 2 + rand() % 22;
int y = 2 + rand() % 44;
if (y/x!=0)
{
	printf("Не целое \n");
}
else
{
	printf("Целое \n");
}*/
//10.Положительные числа x, y, z могут быть сторонами треугольника, если большее из них меньше суммы двух других.Напишите функцию bool f(int x, int y, int z), которая возвращает true, если числа x, y, z могут быть сторонами треугольника, иначе возвращает false.Предполагается, что значения параметров больше нуля
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