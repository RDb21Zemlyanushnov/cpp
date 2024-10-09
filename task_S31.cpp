#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string s[10]={"Null", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    cout << "vvedi cifru ot 0 do 9" << endl;
    do {
        cin >> i;
        if ((i>=0) && (i<=9)){

            break;
        }
        else{
            cout << "!!!ot 0 do 9!!!" << endl;
            continue;
        }
    }while(true);
    cout << s[i] << endl;
    return 0;
}
