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

ll phi(ll n)
{
    ll ret=n;

    for(auto p:prime)
    {
        if(p*p>n || n==0) break;

        if(n%p==0)
        {
            ret/=p;

            ret*=(p-1);

            while(n%p==0)
            {
                n/=p;
            }
        }
    }


     if(n>1)
    {
        ret/=n;
        ret*=(n-1);
    }

  return ret;

}
void primeGen(ll n)
{
    
    for(int i=3;i<=n;i+=2) is_prime[i]=1;

    
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

    prime.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(is_prime[i]==1)
        prime.push_back(i);
    }
   

}

int main(){
ll a=1e7;
primeGen(a);

ll n;
cin>>n;
ll x=phi(n);
cout<<x<<endl;
return 0;
}
