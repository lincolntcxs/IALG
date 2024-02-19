#include <iostream>
using namespace std;
int main (){
	int x;
	int aux = 0;
	cin >> x;
	if ( x % 2 == 0)
	{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (aux % 2 == 0)
			{
				cout << '.';
			}else
			{
				cout << '#';
			}
			aux++;
		}
		cout << endl;
		aux--;
	}
	
}else 
for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (aux % 2 == 0)
			{
				cout << '.';
			}else
			{
				cout << '#';
			}
			aux++;
		}
		cout << endl;

	}


	return 0;
}

	
