#include <bits/stdc++.h>
using namespace std;

const int N = 1;


void solve()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   {
       cin>>a[i];
   }
   
   sort(a,a+n);
   int n1=n;
   for (int i = 0; i < n-1; ++i)
   {
      if (a[i]==a[i+1]) n1--; 
   }
   int minn =(n/2+1);
   minn = min(minn,n1);
   
   cout<<minn<<endl;
}

int main()
{
   int testcase;
   cin>>testcase;
   for (int i = 0; i < testcase; ++i)
   {
    //cout<<"Case #"<<i+1<<": ";
    solve();
   }
}