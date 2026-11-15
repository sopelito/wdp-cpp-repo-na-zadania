#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cout << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;
    cout << "Podaj 3 liczbe: ";
    cin >> z;
    cout << setw(4) << x << endl;
    cout << setw(4) << y << endl;
    cout << setw(4) << z << endl;

    return 0;
}
