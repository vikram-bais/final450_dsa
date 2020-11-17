#include<iostream>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int a;
  cin>>a;
  int ms = a, me = a;
  for(int i=1;i<n;i++)
  {
    cin>>a;
    me = me + a;
    if(me<a) me=a;
    if(ms<me) ms=me;
  }
  cout<<ms<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
