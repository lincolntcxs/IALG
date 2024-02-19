#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main () {
	int i = 0;
	int agi;
	while (i < 10)
	{
		agi = (rand() % 6 +1);
		cout << agi << endl;
		if (agi == 6)
		{
			cout << "buzzer" << endl;
		}
		i++;
	}
	return 0;
}
	
