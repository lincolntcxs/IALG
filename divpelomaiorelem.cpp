#include <iostream>
using namespace std;

int main () {

	int vet[20];
	int maior = -1;
	for (int i = 0; i < 20; i++)
	{
		cin >> vet[i];
		if (vet[i] > maior)
		{
			maior = vet[i];
		}
	}
	float veta[20];
	float maioro =  maior;
	for (int i = 0; i < 20; i++)
	{
		veta[i] = vet[i];
	}
	for (int i = 0; i < 20; i++)
	{
		cout << veta[i]/maioro << " ";
	}
	cout << endl;
	return 0;

}
