#include <iostream>
using namespace std;
int main()
{
    double a;
    double b;

    cout << "Podaj 1 liczbe: ";
    cin >> a;

    cout << "Podaj 2 liczbe: ";
    cin >> b;

    cout << "Suma: " << a + b << endl;
    cout << "Roznica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;
    cout << "Iloraz: " << a / b << endl;

    return 0;
}
