#include<iostream>
using namespace std;
void solve()
{
  int n, a;
  cin>>n;
  int k=1, c=0;
  for(int i=1;i<=n;i++)
  {
    cin>>a;
    if(k==i)
    {
      k=k+a;
      c++;
    }
    if(k>=n)
    {
      cout<<c<<endl;
      break;
    }
    if(a==0)
    {
      cout<<-1<<endl;
      break;
    }
  }
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
