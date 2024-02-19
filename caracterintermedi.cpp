#include <iostream>
using namespace std;

int main () {

	int n, aux1 , aux2, maior, menor;
	cin >> n;
	char vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	char mar1, mar2;
	cin >> mar1 >> mar2;
	for (int i = 0; i < n; i++)
	{
		if (vet[i] == mar1)
		{
			aux1 = i;
		}else if (vet[i] == mar2)
		{
			aux2 = i;
		}
	}
	if (aux1 > aux2)
	{
		maior = aux1;
		menor = aux2;
	}else
	{
		maior = aux2;
		menor = aux1;
	}
	for (int i = menor +1 ; i < maior; i++)
	{
		cout << vet[i] << " "; 
	}
	
	return 0;

}
