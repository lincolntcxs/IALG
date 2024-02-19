#include <iostream>
#include <cmath>
using namespace std;
int main (){
	float degrau, altura, pre;
	int res;
	cin >> degrau >> altura;
	pre = ceil((altura * 100) / degrau);
	res = pre;
	cout << res << endl;
	return 0;
}
