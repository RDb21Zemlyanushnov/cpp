#include <iostream>
#include <cmath>

using namespace std;

int get_angle(double a, double b, double c)
{
    double cos_ugla=(pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
    double ugol=acos(cos_ugla)*(180/M_PI);
    return ugol;
}

int main()
{

    double a, b, c;
    do {
        cout << "Dlina storoni A" << endl;
        cin >> a;
        cout << "Dlina storoni B" << endl;
        cin >> b;
        cout << "Dlina storoni C" << endl;
        cin >> c;

        if ((a<=0) || (b<=0) || (c<=0)) {
            cout << "Debil, dlina storoni A dolzhna bit' bol'she nulya!" << endl;
            cout << "Vvodi po-novoy!" << endl;
            cout << '\n' << endl;
            continue;
        }
        else if ((a+b<=c) || (a+c<=b) || (b+c<=a)) {
            cout << "Debil, takoy treugolnik ne mozhet suschestvovat'!" << endl;
            cout << "Vvodi po-novoy!" << endl;
            cout << '\n' << endl;
            continue;
        }
        else {
            break;
        }
    }while(true);
        cout << "Iskomiy ugol = " << get_angle(a, b, c) << " grad" << endl;

    return 0;
}
