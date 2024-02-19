#include <iostream>
using namespace std;

int main () {

	int n, achou = 0, agi;
	char bus;
	cin >> n;
	char vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	cin >> bus;
	int i = 0;
	while (vet[i] != bus or i < n)
	{
		if (vet[i] == bus)
		{
			achou = 1;
			agi = i;
		}
		i++;
	}
	if (achou == 1)
	{
		cout << agi << endl;
	}else
	{
	cout << "-1" << endl;
	}
	return 0;

}
