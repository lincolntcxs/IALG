#include <iostream>
using namespace std;

int main () {
	int agi = 0, bufu = 0, zio = 0;
	int vet[7];
	for (int i = 0; i < 7; i++)
	{
		cin >> vet[i];
	}
	for (int i = 0; i < 7; i++)
	{
		if (vet[i] % 2 == 0)
		{
			cout << vet[i] << " "; 
			zio++;
		}
	}
	if (zio == 0)
		{
			cout << '0' << " ";
		}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		if (vet[i] % 3 == 0)
		{
			cout << vet[i] << " " ;
			agi++;
		}
	}
	if (agi == 0)
		{
			cout << '0' << " ";
		}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		if (vet[i] % 2 == 0 and vet[i] % 3 == 0)
		{
			cout << vet[i] << " " ;
			bufu++;
		}
	}
	if (bufu == 0)
		{
			cout << '0' << " ";
		}
	cout << endl;
	
	return 0;

}
