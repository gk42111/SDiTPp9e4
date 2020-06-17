#include<iostream>
#include<cstdlib>
#include <time.h> 
using namespace std;
int c = 1;
long int fib(int n) /* rekurencyjna */
{
	if (c == 1) {
		c--; 
		n--;
	}
	if (n == 1 || n == 2)
		return 1;
	else if (n == 0)
		return 0;
	else
		return fib(n - 1) + fib(n - 2);
}

long int fib2(int n) /* iteracyjna */
{
	n--;
	int x0 = 0;
	int x1 = 1;

	for (int i = 0; i < n; ++i) {
		int temp = x0 + x1;
		x0 = x1;
		x1 = temp;
	}
	return x0;
}

int main()
{
	time_t t, tt;
	
	int n = 10;
	
	t = clock();
	cout << n << " wyraz ciagu ma wartosc " << fib(n) << endl;
	t = clock() - t;
	cout << "Rekurencyjnie " <<t<< endl;

	tt = clock();
	cout << n <<" wyraz ciagu ma wartosc "<< fib2(n) << endl;;
	tt = clock() - tt;
	cout << "Iteracyjnie " << tt << endl;

	
	system("pause");
	return 0;
}