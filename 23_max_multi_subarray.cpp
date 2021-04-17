
#include<iostream>
using namespace std;
void solve()
{
  int n, a;
  cin>>n;
  cin>>a;
  int mx=a, mn=a, pro=a, prmx=a, prmn=a, ans=a;
  int temp;
  for(int i=1;i<n;i++)
  {
    cin>>a;
    mx=max(prmx*a,max(prmn*a, a));
    mn=min(prmx*a,min(prmn*a, a));
    ans=max(ans,mx);
    prmx=mx;
    prmn=mn;
  }
  cout<<ans<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
