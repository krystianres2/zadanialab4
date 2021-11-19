

#include <iostream>
using namespace std;
int main()
{
	int tab[3][3] = {
		{9,8,7},
		{6,5,4},
		{3,2,1},
	};

	int suma = 0;
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j)
				suma += tab[i][j];
		}

	}
	cout << suma;
}