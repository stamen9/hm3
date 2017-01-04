#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sth;
    cin>>sth;
    int len = sth.length();
    cout<<"„„Œ„‚„r„y " <<sth.at(0)<<", „ƒ„‚„u„t„u„~ "<< sth.at(len/2) << ", „„€„ƒ„|„u„t„u„~"<<sth.at(len-1)<<endl;
    return 0;
}
