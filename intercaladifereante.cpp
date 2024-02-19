#include <iostream>
#include <fstream>
using namespace std;

int main () {
	ifstream arqa("arquivoA.txt");
	ifstream arqb("arquivoB.txt");
	int conta = 0;
	int i = 0;
	string palavra;
	string veta[100];
	while (arqa >> palavra )
	{
		veta[i] = palavra;
		i++;
		conta++;
	}
	string vetb[100];
	int j = 0;
	int contb = 0;
	while (arqb >> palavra)
	{
		vetb[j] = palavra;
		j++;
		contb++;
	}
	int tam = conta + contb;
	string vetc[tam];
	i = 0;
	j = 0;
	int k = contb - 1;
	while (i < tam)
	{
	if (j < conta and j < contb)
	{
		vetc[i] = veta[j];
		vetc[i+1] = vetb[k];
		i = i +2;
		j++;
		k--;
	}else if (j >= conta and i < tam)
	{
		vetc[i] = vetb[k];
		j++;
		i++;
		k--;
	}else if (j >= contb and i < tam)
	{
		vetc[i] = veta[j];
		i++;
		j++;
	}
	}
	
	ofstream arqc("arquivoC.txt");
	for (int i = 0; i < conta + contb; i++)
	{
		arqc << vetc[i] << " ";
	}
	
	
	
	return 0;
}
	
