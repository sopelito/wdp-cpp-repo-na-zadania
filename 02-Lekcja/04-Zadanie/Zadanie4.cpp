#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Podaj liczbe sekund: ";
    cin >> a;

    b = a / 60;
    c = a % 60;

    cout << "Pelne minuty: " << b << endl;
    cout << "Pozostale sekundy: " << c << endl;

    return 0;
}
