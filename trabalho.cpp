#include <iostream>

using namespace std;

struct games {
    string nome;
    int lancamento;
    string plataforma;
    string descricao;
};

int main()
{
    int n;
    cin >> n;
    int opcao;
    games lista[n];
    cin >> opcao;
    int cont = 0;
    int i = 0, op2n = 0, op4n = 0;
    bool cheio = false;
    string excluir;
    string alterar;
    
	while (opcao != 5)
	{
		if (opcao == 1 and cheio == false)
		{
			if (cont == n){
				cout << "cheio" << endl;
				cheio = true;
			}
			else
			{
				cin >> lista[i].nome;
				cin >> lista[i].lancamento;
				cin >> lista[i].plataforma;
				cin >> lista[i].descricao;
				i++;
				cont++;
		}
		}
		if (opcao == 2 )
		{
			cin >> excluir;
		for (int i = 0; i < n; i++)
		{
			if (lista[i].nome == excluir)
			{
				cheio = false;
				op2n++;
				lista[i].nome = "nao";
			}
			
		}
		if (op2n == 0)
			{
				cout << "nao existe" << endl;
			}
			op2n = 0;
		}
		if (opcao == 3)
		{
			for (int i = 0; i < n; i++)
			{
				if (lista[i].nome != "nao")
				{
					cout << lista[i].nome << endl;
					cout << lista[i].lancamento << endl;
					cout << lista[i].plataforma << endl;
					cout << lista[i].descricao << endl;
				}
				cout << endl;
			}
			
		}
		if (opcao == 4)
		{
			cin >> alterar;
			for (int i = 0; i < n; i++)
			{
				if (alterar == lista[i].nome)
				{
					cin >> lista[i].lancamento;
					cin >> lista[i].plataforma;
					cin >> lista[i].descricao;
					op4n++;
				}
			}
			if (op4n == 0)
			{
				cout << "nao existe" << endl;
			}
			op4n = 0;
		}
		cin >> opcao;
	}
              
    return 0;
}
