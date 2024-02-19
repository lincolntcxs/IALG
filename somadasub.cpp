#include <iostream>
using namespace std;

int main () {

	unsigned int veta[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> veta[i];
	}
	unsigned int vetb[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> vetb[i];
	}
	int soma = 0;
	int j = 4, i = 0;
	while (i < 5 and j >= 0)
	{
		soma = (veta[i] -  vetb[j]) + soma;
		cout<<veta[i]<<"  "<<vetb[j]<<"  "<<(veta[i] -  vetb[j])<<endl;
		i++;
		j--;
	}
	cout << soma << endl;
	return 0;

}
