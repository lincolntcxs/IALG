#include <iostream>
using namespace std;

	void ricci(int n, int m, int qtd,int aux){
		int agi;
		if (qtd == 0)
		{
			cout << endl;
		}else
		{
			if (aux == 0)
			{
				cout << n << " " << m << " ";
				aux++;
			}
			agi = n + m;
			n = m;
			m = agi;
			cout << agi << " ";
			ricci(n,m,qtd -1, aux);
		}
		
	}
	
int main () {

	int n,m,qtd,aux = 0;
	cin >> n >> m >> qtd;
	qtd = qtd -2;
	ricci(n,m,qtd,aux);

	return 0;
}
	
