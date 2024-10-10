#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string txt;
    int i=0;
    ifstream file_to_read("output.txt");
    while(!(file_to_read.eof()))
    {
        file_to_read >> txt;
        i++;
        cout << i << ". " << txt << endl;
    }
    file_to_read.close();
    return 0;
}
