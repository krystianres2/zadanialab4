

#include <iostream>
using namespace std;
int main()

{
    int tab[1000], n, x, y;
    cout << "Ile liczb wyœwietlic:";
    cin >> n;
    cout << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;

    tab[0] = x;
    tab[1] = y;

    for (int i = 2; i < n; i++)
    {
        tab[i] = tab[i - 1] + tab[i - 2];
}


    for (int i = 0; i < n; i++)
    {
        cout <<endl<< tab[i];
    }
}

