#include <iostream>
using namespace std;
int main (){
	int num, num2, menor , maior, aux;
	cin >> num >> num2;
	if (num > num2)
	{
		maior = num;
		menor = num2;
	}else if (num2 > num)
	{
		maior = num2;
		menor = num;
	}
	while (menor > 0)
	{
		aux = maior;
		maior = menor;
		menor = aux % menor;
	
	}
	cout << maior << endl;
	return 0;
}
