#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int alarm,h,m;

        cin>>alarm>>h>>m;
        int ans=24*60;
        int time=h*60+m;
        while(alarm--)
        {
            int minute,hour;
            cin>>hour>>minute;
            int t=(hour*60+minute)-time;

            if(t<0) t+=(24*60);

            ans=min(ans,t);
        }

        cout<<ans/60<<" "<<ans%60<<endl;
    }
}
