#include <iostream>
using namespace std;

int main () {

	int n,g,dia = 0, aux = 0;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	cin >> g;
	int vet2[g];
	for (int i = 0; i < g; i++)
	{
		cin >> vet2[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < g; j++)
		{
			if (vet[i] == vet2[j])
			{
				dia++;
			}
		}
		
	}
	int vet3[n - dia];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < g; j++)
		{
			if (vet[i] == vet2[j])
			{
				aux = 1;
			}
		}
		if (aux == 0)
		{
			vet3[k] = vet[i];
			k++;
		}
		aux = 0;
	}
	
	for (int i = 0; i < n - dia; i++)
	{
		cout << vet3[i] << " ";
	}
	cout << endl;
	return 0;
}
