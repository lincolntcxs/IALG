#include <iostream>
using namespace std;

struct alimento {
		string nome;
		int qtd;
	};

struct pessoa{
		string nome;
		alimento prato[2];
};

int main () {
	int qtd;
	cin >> qtd;
	pessoa lista[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> lista[i].nome;
		for (int j = 0; j < 2; j++)
		{
			cin >> lista[i].prato[j].nome;
			cin >> lista[i].prato[j].qtd;
		}
		
	}
	
	int k = 0, f = 0 , total = 0;
	string pratos[qtd*2];
	int totals[qtd*2];
	string agi;
	
	for (int i = 0; i < qtd; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			agi = lista[i].prato[j].nome;
			f = 0;
			while (f < k and pratos[f] != agi )
			{
				f++;
			}
			if (f == k)
			{
				pratos[k] = agi;
				for (int x = 0; x < qtd; x++)
				{
					for (int z = 0; z < 2; z++)
					{
						if (pratos[k] == lista[x].prato[z].nome)
						{
							total = total + lista[x].prato[z].qtd;
							
						}
					}
					
				}
				totals[k] = total;
				total = 0;
				k++;
			}
		}
		
	}
	
	for (int i = 0; i < k; i++)
	{
		cout << pratos[i] << " " << totals[i] << endl;
	}
	
	
	
}
	
