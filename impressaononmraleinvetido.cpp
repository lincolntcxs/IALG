#include <iostream>
using namespace std;

int main () {

	int cod;
	cin >> cod;
	int vet[20];
	if (cod == 0)
	{
		cout << endl;
	}else if (cod == 1)
	{
		for (int i = 0; i < 20; i++)
	{
		cin >> vet[i];
	}
		for (int i = 0; i < 20; i++)
		{
			cout << vet[i] << " ";
		}
		cout << endl;
	}else
	{
		for (int i = 0; i < 20; i++)
	{
		cin >> vet[i];
	}
		for (int i = 19; i >= 0; i--)
		{
			cout << vet[i] << " " ;
		}
		cout << endl;
	}
	return 0;

}
