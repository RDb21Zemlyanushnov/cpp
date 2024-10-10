#include<iostream>
#include<string>
#include<cstring>

using namespace std;

char *reverce(char *str)
{
    int i, n;
    char place_holder;
    n=strlen(str)-1;
    for(i = 0; i <=(strlen(str)/2); i++)
    {
        place_holder=str[i];
        str[i]=str[n];
        str[n]=place_holder;
        n--;
    }
    return str;
}
int main()
{
    char text1[100];
    cout << "ishodnaya stroka: " << endl;
    cin >> text1;
    cout << "perevernutaya stroka: " << endl;
    cout << reverce(text1);
    return 0;
}
