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
vector<int>v[n];
for(ll i=1;i<=n;i++)
{
    for(int j=i;j<=n;j+=i)
    {
        v[j].push_back(i);
    }
}

for(int i=1;i<=n;i++)
{
    for(auto u:v[i])
    {
        cout<<u<<" ";
    }
    cout<<endl;
}
return 0;
}