#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    string c;
    getline(cin, c);
    transform(c.begin(), c.end(), c.begin(), ::tolower);
    string S;
    int Cnt=0;
    for(string::iterator it=c.begin();it<c.end();++it)
    {
        if(S.find(*it)==-1&&(int)*it>=97&&(int)*it<=122)
        S=S+*it;
    }
    sort(S.begin(),S.end());
    cout<<"'"<<S<<"' "<<S.length()<<"„x„~„p„{„p.";
    return 0;
}
