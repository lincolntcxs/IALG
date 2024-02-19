#include <iostream>
using namespace std;

struct entrevistado{
	char sexo;
	int idade;
	char res;
};

int main () {
	int qtd, sim = 0, nao = 0, maior = 0, menor = 0, maimuie = 0, menhom = 0;
	cin >> qtd;
	entrevistado lista[qtd];
	for (int i = 0; i < qtd; i++)
	{
		cin >> lista[i].sexo;
		cin >> lista[i].idade;
		cin >> lista[i].res;
		if (lista[i].res == 'S')
		{
			sim++;
		}else
		{
			nao++;
		}
		if (lista[i].idade >= 18 and lista[i].res == 'S')
		{
			maior++;
		}else if (lista[i].idade < 18 and lista[i].res == 'N')
		{
			menor++;
		}
		if (lista[i].sexo == 'F' and lista[i].idade >= 18 and lista[i].res == 'N')
		{
			maimuie++;
		}else if (lista[i].sexo == 'M' and lista[i].idade < 18 and lista[i].res == 'S')
		{
			menhom++;
		}
	}
	cout << sim << endl << nao << endl << maior << endl << menor << endl << maimuie << endl << menhom << endl;
	return 0;
}
