

#include <iostream>
using namespace std;

int main()
{
	int tab[20], i;
		tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	tab[7] = 8;
	tab[8] = 9;
	tab[9] = 10;


	for (i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
		cout << endl << tab[i];
	
}



}

