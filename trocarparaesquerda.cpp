#include <iostream>
using namespace std;

int main () {
	int n,p, garu, zio, aux =0;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	cin >> p;
	int vet2[n];
	
	for (int i = 0; i < n; i++)
	{
		vet2[i] = 0;
	}
	
	vet2[n-1] = vet[p];
	zio = p;
	garu = p;
	p = zio;
	int i = 0;
	while (i < (n -1) - zio )
	{
		vet2[i] = vet[p +1];
		i++;
		p++;
		aux++;
	}
	i = 0;
	while ( i < (n - (garu -1)) )
	{
		vet2[aux] = vet[i];		
		i++;
		aux++;
	}
	for (int i = 0; i < n; i++)
	{
		cout << vet2[i] << "  ";
	}
	cout << endl;
	return 0;

}
