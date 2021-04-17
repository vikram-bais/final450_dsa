#include<iostream>
#include<set>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int a[n];
  set<int> ss;
  for(int i=0;i<n;i++)
  {
    cin>>a[i]; ss.insert(a[i]);
  }
  int mx=0;
  for(int i=0;i<n;i++)
  {
    if(ss.find(a[i]-1)==ss.end())
    {
      int j=0,c=0;
      while(ss.find(a[i]+j)!=ss.end())
      {
        c++;
        j++;
      }
      mx=max(c,mx);
    }
  }
  cout<<mx<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
