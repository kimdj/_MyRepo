#include <iostream>
using namespace std;

int prototype();

int main()
{
	printf("Welcome\n");
	prototype();	

	int a=0;
	int b=2;
	while(100!=a)
	{
		++a;
		b*=b;
		cout << a << endl;
	}

	cout << "Final b: " << b << endl << '\n';

	return 0;
}

int prototype()
{
	cout << "to the start of an amazing program~!";
	return 0;
}
