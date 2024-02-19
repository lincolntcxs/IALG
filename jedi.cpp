#include <iostream>
using namespace std;

struct jedi{
	string nome;
	string hie;
	string sabre;
};
struct sabre{
	string cris;
	string cor;
};
	
int main () {

	int qtd;
	cin >> qtd;
	jedi jedis[qtd];
	sabre sabres[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> jedis[i].nome;
		cin >> jedis[i].hie;
		cin >> sabres[i].cris;
		cin >> sabres[i].cor;
		
	}
	int k = 0;
	string vet[qtd];
	for (int i = 0; i < qtd; i++)
	{
			
			if (sabres[i].cor != sabres[k +1].cor)
			{
				vet[i] = sabres[i].cor;
				k++;
			}
		
	}
	int vet2[k];
	for (int i = 0; i < k; i++)
	{
		vet2[i] = 0;
	}
	
	string agi;
	cin >> agi;
	for (int i = 0; i < qtd; i++)
	{
		if (jedis[i].hie == agi)
		{
			
			vet2[i]++;
			
		}
	}
	for (int i = 0; i < k; i++)
	{
		cout << vet[i] << " ";
		cout << vet2[i] << endl;
	}
	
	
	return 0;
}
	
