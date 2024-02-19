#include <iostream>
using namespace std;



int main () {
	int n, m, agi = 2, k = 0;
	cin >> n >> m;
	int mat[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mat[i][j];
		}
		
	}
	for (int i = n-1; i >= 0; i--)
	{
		if (agi % 2 == 0)
		{
		for (int j = k; j < m; j++)
		{
			cout << mat[i][j] << " ";
		}
		}else
		{
			for (int j = m -1; j >= 0; j--)
			{
				cout << mat[i][j] << " ";
			}
			
		}
		agi++;
		if (agi % 2 == 0)
		{
			k = 0;
		}else
		{
			k = m -1;
		}
	}
	cout << endl;
	return 0;
}
	
