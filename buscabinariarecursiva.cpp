#include <iostream>
using namespace std;

	void busca(int vet[],int inicio, int fim, int pro,int cont){
		int i = (fim+inicio)/2;
		if (pro == vet[i]){
			cont ++;
			cout << i << endl << cont << endl;
		}else if (fim == inicio)
		{
			cont++;
			cout << "-1" << endl << cont << endl;
			
		}else if (vet[i] < pro)
		{
			cont++;
			busca(vet,i+1,fim,pro,cont);
		}else if (vet[i] > pro)
		{
			cont++;
			busca(vet,inicio,i-1,pro,cont);
		}
	}
	
int main () {

	int n, pro, cont = 0;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	cin >> pro;
	int inicio = 0, fim = n-1;
	busca(vet,inicio,fim,pro, cont);
	return 0;
}
	
