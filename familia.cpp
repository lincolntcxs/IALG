#include <iostream>
using namespace std;

struct familia {
		int idapai;
		int idamae;
		int idafil;
	};


int main () {
	int tem = 0;
	familia fami[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> fami[i].idapai;
		cin >> fami[i].idamae;
		cin >> fami[i].idafil;
	}
	int agi , k = 0, f;

		for (int j = 0; j < 5; j++)
		{
			agi = fami[j].idafil;
			f = 0;
			while (f < k and fami[f].idafil != agi)
			{
				f++;
			}
			if (f == k)
			{
				for (int x = 0; x < 5; x++)
				{
					if (fami[x].idafil == fami[f].idafil and f != x)
					{
						cout << fami[f].idapai << " ";
						cout << fami[f].idamae << endl;
						tem++;
					}
					
				}
				
			}k++;
		}
		
	
	
	if (tem == 0)
	{
		cout << "-1" << endl;
	}
}
	
