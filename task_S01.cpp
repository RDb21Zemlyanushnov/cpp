#include <iostream>

using namespace std;

int main()
{
    int num;
    float dot_num;
    char sym;
    bool flag=0;

    cout << "vvodi celoe chislo" << endl;
    cin >> num;
    cout << "vvodi chislo s zapyatoy" << endl;
    cin >> dot_num;
    float sum=num+dot_num;
    float mult=num*dot_num;
    float div=num/dot_num;
    float ost=(num^2)%(2*num);
    cout << "sum=" << sum << endl;
    cout << "mult=" << mult << endl;
    cout << "div=" << div << endl;
    cout << "ost=(num^2)%(2*num)=" << ost << endl;

    cout << "vvodi symvol" << endl;
    cin >> sym;
    char rez=sym+1;
    cout << "rez=sym+1=" << rez << endl;

    cout << "flag=" << flag << endl;
    flag++;
    cout << "flag+1=" << flag << endl;
    flag=flag-2;
    cout << "flag-2=" << flag << endl;

    return 0;
}
