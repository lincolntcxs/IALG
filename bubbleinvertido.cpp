#include <iostream>
using namespace std;

	void bubble(int vet[], int n){
		int aux;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (vet[i] > vet[i+1])
				{
					aux = vet[i+1];
					vet[i+1] = vet[i];
					vet[i] = aux;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << vet[i] << " ";
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
	bubble(vet,n);
	return 0;
}
	
