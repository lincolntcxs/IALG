#include <iostream>
#include <fstream>
using namespace std;


int main () {
	char dig [3];
	string sen = "2018";
	char digi;
	char senha[5];
	int correto = 0;
	senha = "2018";
	for (int i = 0; i < 4; i++)
	{
		digi = sen[i];
		senha[i] = digi;
	}
	
	for (int i = 0; i < 4; i++)
	{
		cin >> dig[i];
	}
	for (int i = 0; i < 4; i++)
	{
			if (dig[i] == senha[i])
	{
		correto++;
	}
	}
	if (correto == 4)
	{
		cout << " ACERTOUY" << endl;
		cout << dig[3] << endl;
		cout << senha[3];
	}else
	{
		cout << "ERROU" << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << dig[i];
		}
		cout << endl;
		for (int i = 0; i < 4; i++)
		{
			cout << senha[i];
		}
		
		
	}

	return 0;
}
	
