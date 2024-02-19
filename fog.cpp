#include <iostream>
using namespace std;

	void maiores(int& ano, int& alt, int vet[],int& n){
		int maior = alt;
		int segm = 0;
		for (int i = 0; i < n; i++)
		{
			if (vet[i] + alt >= maior)
			{
				segm = maior;
				maior = vet[i]+alt;
			}else if (vet[i] + alt > segm and vet[i] + alt < maior)
			{
				segm = vet[i]+alt;
			}
			alt = alt + vet[i];
		}
		cout << maior << endl << segm << endl;

	}
	
int main () {

	int ano, alt, n;
	cin >> ano >> alt >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	maiores(ano,alt,vet,n);
	return 0;
}
	
