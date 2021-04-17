#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n, tot=0,M=1000000007;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    tot*=i;
    tot=tot%M;
  }

}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
