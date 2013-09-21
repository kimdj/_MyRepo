#include <iostream>
using namespace std;

int main(void)
{
	printf("Hola\n");	

	int a=0;
	int b=2;
	while(100!=a)
	{
		++a;
		b*=b;
		cout << a << endl;
	}

	cout << "Final b: " << b << endl << '\n';

	prototype();

	return 0;
}
