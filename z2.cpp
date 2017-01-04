#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string k;
    char a;
    cin>>k>>a;
    int pos = k.find_first_of(a);
    if(pos!=-1)
    {
        k=k.substr(pos);
        cout<<"„H„~„p„{„Œ„„ '"<<a<<"' „u „~„p „„€„x„y„ˆ„y„‘ "<<pos+1<<", „R„|„u„t „~„u„s„€ „u '"<<k<<"'";
    }
    else cout<<"„H„~„p„{„Œ„„ „~„u „q„u„Š„u „~„p„}„u„‚„u„~.";
    return 0;
}
