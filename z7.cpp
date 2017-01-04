#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    string SuperKucheta;
    string DogeContainer[1000];
    int DogeCount=0;
    string HeroAssociation[1000];
    int HeroCount=0;
    int pos=0;
    getline(cin, SuperKucheta);
    for(string::iterator it=SuperKucheta.begin();it<SuperKucheta.end();it++)
    {
        if((int)*it>=65&&(int)*it<=90)
        {
            int nextpos=0;
            if(SuperKucheta.find(" ",pos+1)==-1)
            {
                string Hero=SuperKucheta.substr(pos,nextpos-pos);
                HeroAssociation[HeroCount]=Hero;
                HeroCount++;
            }
            else
            {
            nextpos=SuperKucheta.find(" ",pos+1);
            string Hero=SuperKucheta.substr(pos,nextpos-pos);
            it=it+nextpos-pos+1;
            pos=nextpos;
            HeroAssociation[HeroCount]=Hero;
            HeroCount++;
            }
        }
        else if((int)*it>=97&&(int)*it<=122)
        {
            int nextpos=0;
            if(SuperKucheta.find(" ",pos+1)==-1)
            {

                string Doge=SuperKucheta.substr(pos,nextpos-pos);
                DogeContainer[DogeCount]=Doge;
                DogeCount++;
            }
            else
            {
            nextpos=SuperKucheta.find(" ",pos+1);
            string Doge=SuperKucheta.substr(pos,nextpos-pos);
            it=it+nextpos-pos;
            pos=nextpos;
            DogeContainer[DogeCount]=Doge;
            DogeCount++;
            }
        }
    }
    /*for(int i=0;i<DogeCount;i++)
    {
       cout<<DogeContainer[i]<<" ";
    }
    cout<<DogeCount<<endl;
    for(int i=0;i<HeroCount;i++)
    {
       cout<<HeroAssociation[i]<<" ";
    }
    cout<<HeroCount<<endl;*/

    cout<<HeroCount<<"/"<<DogeCount;

    return 0;
}
