#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,a;
  map<int,int> mm;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(mm.find(a)==mm.end()) mm[a]=1;
    else mm[a]++;
  }
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(mm.find(a)==mm.end()) mm[a]=1;
    else mm[a]++;
  }
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>a;
    if(mm.find(a)!=mm.end()) cout<<a<<" ";
  }
  cout<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
