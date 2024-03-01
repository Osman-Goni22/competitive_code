#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb   push_back()
#define yes   cout<<"YES"<<endl;
#define no   cout<<"NO"<<endl;
#define all(x) ((x).begin(), (x).end());
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const ll mx=1e8;
bitset<mx> is_prime;
vector<int> prime;
int ans[mx];
void primeGen(ll n)
{
    
    for(int i=3;i<=n;i+=2) is_prime[i]=1;
    is_prime[2]=1;
    
    ll sq=sqrt(n);

    for(int i=3;i<=sq;i+=2)
    {
        if(is_prime[i]==1)
        {
        for(int j=i*i;j<=n;j+=(i+i))
        {
           is_prime[j]=0;
        }
        }
    }

    
}

int main(){
ll n=1e7;
primeGen(n);

for(int x=1;x<=3200;x++)
{
    for(int y=1;y<=60;y++)
    {
        int d=(x*x)+(y*y*y*y);
        if(d>n )
        {
            continue;
        }

        if(is_prime[d]==1)
        {
            ans[d]=1;
        }
    }
}

for(int i=1;i<=mx;i++)
{
    ans[i]+=ans[i-1];
}

ll t;
cin>>t;
while(t--)
{
    int p;
    cin>>p;
    cout<<ans[p]<<endl;
}
return 0;
}