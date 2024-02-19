#include <iostream>
#include <fstream>
using namespace std;

void primo(int n, int& pri){
	int primo = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			primo++;
		}
	}
	if (primo == 2)
	{
		pri = 1;
	}
}

int main () {
	string nome, sai, sain;
	cin >> nome;
	ifstream arq(nome.c_str());
	int n;
	int pri = 0, i = 0;
	int vet[1000];
	int tam = 0;
	while (pri == 0 )
	{
		primo(n,pri);
		if (pri == 0)
		{
			arq >> n;
			vet[i]= n;
			i++;
			tam++;
		}else
		{
			arq >> sai;
			sain = sai;
		}
	}
	int menor,segme;
	if (vet[0] > vet[1])
	{
		menor = vet[1];
		segme = vet[0];
	}else
	{
		menor = vet[0];
		segme = vet[1];
	}
	for (int i = 0; i < tam; i++)
	{
		if (vet[i] < menor)
		{
			segme = menor;
			menor = vet[i];
		}
	}
	int soma = 0;
	for (int i = 0; i < tam; i++)
	{
		soma = soma + vet[i];
	}
	soma = soma - menor - segme;
	ofstream saida(sain.c_str());
	saida << menor << " ";
	saida << segme << " ";
	saida << soma;
	return 0;
}
	
