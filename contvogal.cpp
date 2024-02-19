#include <iostream>
#include <fstream>
using namespace std;


int main () {
	string nome;
	cin >> nome;
	ifstream arq(nome.c_str());
	string palavra;
	char letra;
	int tam, vogal = 0;
	while (arq >> palavra)
	{
		tam = palavra.size();
		for (int i = 0; i < tam; i++)
		{
			letra = palavra[i];
			if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'
			or letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra == 'U')
			{
				vogal++;
			}
		}
		
	}
	cout << vogal << endl;
	arq.close();
	return 0;
}
	
