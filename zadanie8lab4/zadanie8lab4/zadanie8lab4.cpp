

#include <iostream>
using namespace std;
int main()

{
	const int x = 2, y = 3;
	int tab1[x][y] = {
		{1,2,3},
		{4,5,6},
		
	};
	int tab2[x][y] = {
		{1,2,3},
		{4,5,6},
		
	};
	int tab3[x][y];

	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			cin >> tab1[x][y];

	for(int i=0;i<x;i++)
		for (int j = 0; j < y; j++)
		{
			cin >> tab2[i][j];
			tab3[i][j] = tab1[i][j] + tab2[i][j];
		}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
			cout << tab3[i][j] << " ";
		cout << endl;
}


}

