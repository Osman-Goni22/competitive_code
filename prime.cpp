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
   

   for(int i=0;i<prime.size();i+=100)
   {
     cout<<prime[i]<<" ";
   }
  cout<<endl;
}

int main(){
ll n=1e7;
primeGen(n);
return 0;
}