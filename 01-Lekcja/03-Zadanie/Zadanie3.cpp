#include <iostream>
#include <iomanip>
using namespace std;
    int main(){
    string x;
    int y;
    int z;
    cout<<"Podaj imie:";
    cin>>x;
    cout<<"Podaj wiek:";
    cin>>y;
    cout<<"Podaj wzrost:";
    cin>>z;
    cout<< fixed;
    cout<<"imie:"<<x<<endl;
    cout<<"wiek:"<<y<<endl;
    cout<<"wzrost wynosi:"<<setprecision(2)<<z<<endl;
    }
