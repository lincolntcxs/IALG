#include <iostream>
using namespace std;

int main () {

	int n, zio = 0;
	cin >> n;
	char vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	char bus;
	cin >> bus;
	for (int i = 0; i < n; i++)
	{
		if (vet[i] == bus)
		{
			zio = 1;
			cout << i << " ";
		}
	}
	if (zio == 0)
	{
		cout << "-1";
	}
	cout << endl;
	return 0;

}
