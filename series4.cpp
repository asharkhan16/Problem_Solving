#include <iostream>
#include<math.h>
using namespace std;


double Series(double x, int n)
{
	double sum = 1, term = 1, fct, j, y = 2, m;

	
	int i;
	for (i = 1; i < n; i++) {
		fct = 1;
		for (j = 1; j <= y; j++) {
			fct = fct * j;
		}
		term = term * (-1);
		m = term * pow(x, y) / fct;
		sum = sum + m;
		y += 2;
	}
	return sum;
}


int main()
{
	double x =2;
	int n =4;
	cout << Series(x, n);
	return 0;
}

