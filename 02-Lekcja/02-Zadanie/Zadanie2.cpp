#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, d, e;

    cout << "Podaj 1 ocene: ";
    cin >> a;

    cout << "Podaj 2 ocene: ";
    cin >> b;

    cout << "Podaj 3 ocene: ";
    cin >> c;

    cout << "Podaj 4 ocene: ";
    cin >> d;

    cout << "Podaj 5 ocene: ";
    cin >> e;

    double srednia = (a + b + c + d + e) / 5;

    cout << fixed << setprecision(2);
    cout << "Srednia ocen wynosi: " << srednia << endl;

    return 0;
}
