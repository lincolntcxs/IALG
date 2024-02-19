#include <iostream>
#include <fstream>
using namespace std;


int main () {
	int tam, pivo = 2, aux;
	cin >> tam;
	tam = tam -2;
	aux = pivo;
	ofstream arq("saida.txt");
	int vet[tam];
	for (int i = 0; i <= tam; i++)
	{
		vet[i] = aux;
		aux++;
	}
	for (int j = 0; j < tam; j++)
	{
		pivo = vet[j];
		if (pivo == 0)
		{
			
		}else
		{
	for (int i = 0; i <= tam; i++)
	{
		if (vet[i] % pivo == 0 and vet[i] != pivo)
		{
			vet[i] = 0;
		}
	}
		}
	}
	for (int i = 0; i < tam; i++)
	{
		if (vet[i] != 0)
		{
			arq << vet[i] << " ";
		}
	}
	arq.close();
	return 0;
}
	
