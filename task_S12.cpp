#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    for(int i=1; i<=1000; i=i+4){
        if (i%7==0){
            sum=sum+i;
        }
    }
    cout << "sum(1-1000)=" << sum << endl;

    sum=0;
    for(int i=0; i<=1000; i=i+4){
        if (i%7==0){
            sum=sum+i;
        }
    }
    cout << "sum(0-1000)=" << sum << endl;
    return 0;
}
