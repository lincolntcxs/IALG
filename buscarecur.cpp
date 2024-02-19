#include <iostream>
using namespace std;

	void busca(int vet[], int n, int pro, int i){
		if (pro == vet[i])
		{
			cout << '1' << endl;
		}else if (n == 0 )
		{
			cout << '0' << endl;
		}else
		{
			i++;
			busca(vet,n-1,pro,i);
		}
		
	}
	
int main () {

	int n,pro, i = 0;
	cin >> n;
	int vet[n];
	for (int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	cin >> pro;
	busca(vet,n,pro,i);
	return 0;
}
	
