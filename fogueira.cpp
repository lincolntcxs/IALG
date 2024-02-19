#include <iostream>
using namespace std;

	void maiores(int ano, int alt, int vet[],int n){
		int maior = alt;
		int seg, ma = 0;
		for (int i = 0; i < n; i++)
		{
			if (vet[i] + alt >= maior)
			{
				seg = ma; 
				ma = i;
			}
			alt = alt + vet[i];
		}
		cout << ma << " " << seg << endl;

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
	
