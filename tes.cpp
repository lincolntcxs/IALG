#include <iostream>
#include <fstream>
using namespace std;


int main () {
	char dig [3];
	string sen = "2018";
	char digi;
	char senha[3];
	bool correto = true;
	for (int i = 0; i < 3; i++)
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
			if (dig[0] != senha[0])
	{
		correto = false;
	}
	}
	if (correto == true)
	{
		cout << " ACERTOUY" << endl;
		cout << dig << endl;
		cout << senha;
	}else
	{
		cout << "ERROU";
		cout << dig << endl;
		cout << senha;
	}

	return 0;
}
	
