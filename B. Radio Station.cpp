#include<bits/stdc++.h>
using namespace std;
int main()
{
    int server,ip;
    cin>>server>>ip;
    string name;
    string address;
    map<string,string> mp;
    while(server--)
    {
        cin>>name;
        cin>>address;
        mp[address]=name;

    }

    while(ip--)
    {
        cin>>name;
        cin>>address;
       
        cout<<name<<" "<<address<<" ";
        address.pop_back();
        cout<<"#"<<mp[address]<<endl;
    }
}
