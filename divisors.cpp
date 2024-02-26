#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb   push_back()
#define yes   cout<<"YES"<<endl;
#define no   cout<<"NO"<<endl;
#define all(x) ((x).begin(), (x).end());
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
ll n;
cin>>n;
vector<int>v[100];
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            v[i].push_back(j);
            if(i/j!=j)
            {
                v[i].push_back(i/j);
            }
        }
    }
}

for(int i=1;i<=n;i++)
{
    cout<<i<<":";
    for(auto u:v[i])cout<<u<<" ";
    cout<<endl;
}
return 0;
}