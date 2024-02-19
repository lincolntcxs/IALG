#include <iostream>
using namespace std;

	void bubble(int vet[], int n){
		int aux;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n -1; j++)
			{
				if (vet[j] < vet[j+1])
				{
					aux = vet[j+1];
					vet[j+1] = vet[j];
					vet[j] = aux;
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
	
