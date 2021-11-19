

#include <iostream>
using namespace std;

int main()
{
	const int roz = 10;
	int tab[10], x = 3;
	int tab1[10];


	for (int i = 0; i < roz; i+=2)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 6;
	}



}

