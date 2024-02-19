#include <iostream>
using namespace std;

int main () {

	int qtd, migra = 0;
	cin >> qtd;
	float vet[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> vet[i];
	}
	float min;
	cin >> min;
	float aux[qtd];
	for (int i = 0; i < qtd; i++)
	{
		aux[i] = vet[i];
	}
	
	int i = 0;
	int j = 0;
	while (i < qtd)
	{
		while (j < qtd)
		{
			if (vet[i] > aux[j])
			{
				vet[i] = vet[i] + 1;
			}
			j++;
		}
		i++;
		j = 0;
	}
	
	
	for (int i = 0; i < qtd; i++)
	{
		if (vet[i] >= min)
		{
			migra++;
		}
	}
	if (migra == 0)
	{
		cout << '0' << endl;
	}else
	{
		cout << migra << endl;
	}
	return 0;

}
