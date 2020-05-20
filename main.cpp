#include<iostream>
#include<cstdlib>
#include <time.h> 
using namespace std;

int FibR(int n)
{
	if (n < 3)
		return 1;

	return FibR(n - 2) + FibR(n - 1);
}
void FibI(int n)
{
	long long a = 0, b = 1;

	for (int i = 0; i < n; i++)
	{
		cout << b << " ";
		b += a; //pod zmienn¹ b przypisujemy wyraz nastêpny czyli a+b
		a = b - a; //pod zmienn¹ a przypisujemy wartoœæ zmiennej b
	}
}

int main()
{
	time_t t, tt;
	
	int n = 50;
	
	t = clock();
	cout << n << " wyraz ciagu ma wartosc " << FibR(n) << endl;
	t = clock() - t;
	cout << "Rekurencyjnie " <<t<< endl;

	tt = clock();
	FibI(n);
	tt = clock() - tt;
	cout << "Iteracyjnie " << tt << endl;

	
	system("pause");
	return 0;
}