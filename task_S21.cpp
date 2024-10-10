#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int A, B;
    int text;
    cout << "vvedi 2 chisla, pervoe men'she vtorogo" << endl;
    cin >> A >> B;
    ofstream file_to_write;
    file_to_write.open("output.txt");
    for (int i=A; i<=B; i++)
    {
        int i1=i;
        int i3=i1*3;
        //text=text+(char*)i3;

        file_to_write << i3 << " ";

        cout << i3 << " ";
    }
    file_to_write.close();
    return 0;
}
