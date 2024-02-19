#include <iostream>
using namespace std;

int main () {

	int ta1, ta2, aux = 0;
	cin >> ta1 >> ta2;
	float vet[ta1];
	for (int i = 0; i < ta1; i++)
	{
		cin >> vet[i];
	}
	float vet2[ta2];
	for (int i = 0; i < ta2; i++)
	{
		cin >> vet2[i];
	}
	
	for (int i = 0; i < ta1; i++)
	{
		for (int j = 0; j < ta2; j++)
		{
			if (vet[i] == vet2[j])
			{
				cout << vet[i] << " ";
				aux++;
			}
		}
		
	}
	if (aux ==0)
	{
		cout << "-1";
	}
	cout << endl;
	return 0;

}

