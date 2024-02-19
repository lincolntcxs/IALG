#include <iostream>
using namespace std;
int main (){
	int a = 1;
	int b = 1;
	
	while (a <= 10)
	{
		cout << a << " " << 'x' << " " << b << " " << '=' << " " << a*b << endl;
		b++;
		if (b == 11)
		{
			b = 1;
			a++;
		}
	}




	return 0;
}
