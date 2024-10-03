#include <iostream>

using namespace std;

int main()
{
    cout << "Pifagor's tab" << endl;
    for(int i=1; i<10; i++){
        for(int j=1;j<10; j++){
            int rez=i*j;
            cout << rez << '\t';
        }
        cout << '\n';
    }

    return 0;
}
