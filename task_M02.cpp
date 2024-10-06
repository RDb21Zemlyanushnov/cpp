#include <iostream>
#include <cmath>

using namespace std;

int get_square(float A, int N)
{
    float r=A/(2*tan((180/N)*M_PI/180));
    float S=(A*N*r)/2;
    return S;
}

int main()
{
    float A; int N;
    cout << "dlina storoni" << endl;
    cin >> A;
    cout << "kol-vo uglov" << endl;
    cin >> N;
    cout << "ploshad' mnogougolnika=" << get_square(A,N) << endl;
    return 0;
}
