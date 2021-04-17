#include<iostream>
using namespace std;
void solve()
{
  int n, a;
  cin>>n;
  cin>>a;
  int t1=0, t2=0, mx=a, mn=a;
  for(int i=1;i<n;i++)
  {
    cin>>a;
    if(mx<a)
    {
      mx=a;
      if(t1<mx-mn)
      {
        t1=max(t1, mx-mn);
      }
      else
      {
        t2=max(t2,mx-mn);
      }
    }
    if(mn>a) mn=a;
  }
  cout<<t1<<"+"<<t2<<"= "<<t1+t2<<endl;
}
int main()
{
  solve();
  return 0;
}
