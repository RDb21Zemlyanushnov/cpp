#include <iostream>

using namespace std;

int main()
{
    int num1, num2, div, ost;
    cout << "vvodi pervoe celoe chislo" << endl;
    cin >> num1;
    cout << "vvodi vtoroe celoe chislo" << endl;
    cin >> num2;
    div=num1/num2;
    ost=num1%num2;
    cout << "div=" << div << endl;
    cout << "ost=" << ost << endl;
    return 0;
}
