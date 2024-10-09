#include <iostream>
#include <cmath>

using namespace std;

float squared_sum(float a, float b)
{
    float sum2=pow(a+b,2);
    return sum2;
}

int main()
{
    float a, b;
    cout << "vvedi pervoe chislo" << endl;
    cin >> a;
    cout << "vvedi vtoroe chislo" << endl;
    cin >> b;
    cout << "kvadrat summi = " << squared_sum(a,b) << endl;
    return 0;
}
