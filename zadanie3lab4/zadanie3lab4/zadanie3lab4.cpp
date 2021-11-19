

#include <iostream>
using namespace std;

int main()
{
	const int n = 10;
	 int tab[n], a, temp=0;
	 cout << "Podaj a: ", cin >> a;

	 for (int i = n-1; i>=0; i--)
	 {
		 tab[i] = a-temp;
		 temp += 5;
		 cout << "tab["<<i<<"]= "<<tab[i] << endl;

	 }

	 cout << "\ntab: \n";
	 for (int i = 0; i <n; i++)
	 {

		 cout << "tab[" << i << "]= " << tab[i] << endl;

	 }


}

