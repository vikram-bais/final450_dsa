#include<iostream>
#include<set>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int a[n];
  set<int> ss;
  map<int> mm;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(mm.find(a[i])==mm.end()) mm[a[i]]=1;
    else
  }
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
