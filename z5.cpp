#include <iostream>
#include <string.h>
using namespace std;
int num=65;
string IneedSleep(char a,string b)
{
    if(b.length()==0)
    {
        b=(char)num+b;
        cout<<b<<endl;
        num++;
        IneedSleep(a,b);
    }
    else if(b.at(0)== a)
    {
        return b;
    }
    else
        {
            b=(char)num+b;
            num++;
            cout<<b<<endl;
            IneedSleep(a,b);
        }
    return b;
}
int main()
{
    char a;
    cin>>a;
    string S="";
    IneedSleep(a,S);
    return 0;
}
