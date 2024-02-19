#include <iostream>
using namespace std;

int main () {

	int hini, mini, hfim, minfim, res;
	cin >> hini >> mini;
	cin >> hfim >> minfim;
	hini = (hini * 60) + mini;
	hfim = (hfim * 60) + minfim;
	if (hini < hfim)
	{
		res = hfim - hini;
		cout << res / 60 << " " << (res % 60)  << endl;
	}else if (hini > hfim)
	{
		res = ((hfim + ( 24 * 60))  - hini);
		cout << res / 60 << " " << res % 60 << endl;
	}
	return 0;

}

