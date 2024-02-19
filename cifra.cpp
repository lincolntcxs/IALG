#include <iostream>
#include <fstream>
using namespace std;


int main () {
	string nome;
	cin >> nome;
	ifstream arq (nome.c_str());
	ofstream arq2("cifrado");
	string palavra;
	char letra;
	int tam;
	while (arq >> palavra)
	{
		tam = palavra.size();
		for (int i = 0; i < tam; i++)
		{
			letra = palavra[i];
			if (letra == 'X')
			{
				arq2 << 'A';
			}else if (letra == 'Y')
			{
				arq2 << 'B';
			}else if (letra == 'Z')
			{
				arq2 << 'C';
			}else
			{
				letra = letra+3;
				arq2 << letra;
			}
		}
		arq2 << " ";
	}
	return 0;
}
	
