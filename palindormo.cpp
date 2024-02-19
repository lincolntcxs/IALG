#include <iostream>
using namespace std;



int main () {
	int qtd, bufu = 0;
	cin >> qtd;
	char vet[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> vet[i];
	}
	int i = 0, j = qtd -1;
	while (vet[i] == vet[j] and i != j and i < qtd /2)
	{
		bufu++;
		cout << i << " " << vet[i] << " " << j << " " << vet[j] << " ";
		i++;
		j--;
	}
		cout << endl;
	if (bufu == qtd/2 )
	{
		cout << "sim" << endl;
	}else
	{
		cout << "nao" << endl;
	}
	return 0;
}
	
