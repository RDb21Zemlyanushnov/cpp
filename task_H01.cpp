#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

long long fucktorial(long n)
{
    long long f,i;
    f=1;
    for(i=1; i<=n; ++i)
    {
        f=f*i;
    }
    return f;
}

double sinus_ryadom(double y)
{
    int j;
    double iteration, sum;
    for(j=0; j<10; j++)
    {
        iteration=(pow(-1,j))*pow(y,2*j+1)/(fucktorial(2*j+1));
        sum=sum+iteration;
    }
    return sum;
}

int main()
{
    double x;
    cout << "x, grad = ";
    cin >> x;
    cout << '\n';
    x=x*M_PI/180;
    cout << "samopisniy sin = " << sinus_ryadom(x) << endl;
    cout << "sin = " << sin(x) << endl;
    return 0;
}
