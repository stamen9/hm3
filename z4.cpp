#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    /*
    „P„‚„y„}„u„‚:C
    „I„x„‡„€„t:

    A
    B*B
    C***C    <----Tova ne e romb
    B*B
    A

    */
    char a;
    cin>>a;
    int s=(int)a-64;

    for(int i=0;i<s;i++)
    {
        for(int Wspace=s-1-i;Wspace>0;Wspace--)
        {
            cout<<" ";
        }
        int b=i+65;
        cout<<(char)b;
        for(int j=s-(i-1)*2-1;j<s;j++)
        {
            cout<<"*";
        }
        if(i!=0)
        cout<<(char)b<<endl;
        else cout<<endl;
    }

    for(int i=s-2;i>=0;i--)
    {
        for(int Wspace=s-1-i;Wspace>0;Wspace--)
        {
            cout<<" ";
        }
        int b=i+65;
        cout<<(char)b;
        for(int j=s-(i-1)*2-1;j<s;j++)
        {
            cout<<"*";
        }
        if(i!=0)
        cout<<(char)b<<endl;
        else cout<<endl;

    }
    return 0;
}
