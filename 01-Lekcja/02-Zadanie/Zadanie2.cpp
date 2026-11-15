#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x;
    cin >> x;

    cout << fixed;
    cout << setprecision(1) << x << endl;
    cout << setprecision(3) << x << endl;
    cout << setprecision(5) << x << endl;

    return 0;
}
