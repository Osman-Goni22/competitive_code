#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll Maximum_subArray_Sum(vector<int> v)
{
    ll sum=0,ans=0,n;
    n=v.size();
    for(int i=0;i<n;i++)
     {
        if(sum+v[i]>0)
        {
            sum+=v[i];
        }

        else
        sum=0;

        ans=max(ans,sum);

     }


     if(ans==0)
     {
        sort(v.begin(),v.end());
        return v[n-1];
     }

     return ans;
}

// ll SubSequence_Sum(vector<int> v)
// {
//     sort(v.begin(),v.end());
//     ll sum=0;
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]>0)
//         {
//             sum+=v[i];
//         }
//     }

//     if(sum==0)
//     {
//         return v[v.size()-1];

//     }
//     else
//     return sum;
// }
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     vector<int> v;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v.push_back(k);
      }

      ll x=Maximum_subArray_Sum(v);

      //ll y=SubSequence_Sum(v);

      cout<<x<<endl;
   }

}