#include <iostream>
using namespace std;

	void ins(int vet[], int n){
		int aux,j;
		for (int i = n - 2; i >= 0; i--)
		{
			aux = vet[i];
			j = i+1;
			while (vet[j] > aux and j < n)
			{
				vet[j -1] = vet[j];
				j++;
			}
			vet[j-1] = aux;
			for (int k = 0; k < n; k++)
			{
				cout << vet[k] << " ";
			}
			cout << endl;
		}
		
	}
	
int main () {

	int n;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	ins(vet,n);
	return 0;
}
	
