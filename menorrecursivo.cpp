#include <iostream>
using namespace std;

	void menor(int vet[], int n, int men){
		if (n == 0)
		{
			cout << men << endl;
		}else
		{
			if (vet[n-1] < men)
			{
				men = vet[n-1];
			} menor(vet,n-1,men);
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
	int men = vet[0];
	menor(vet,n,men);
	return 0;
}
	
