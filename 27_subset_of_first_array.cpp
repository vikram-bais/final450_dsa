#include<iostream>
#include<map>
using namespace std;
void solve()
{
  int n1, n2, a;
  cin>>n1>>n2;
  map<int,int> mm;
  for(int i=0;i<n1;i++)
  {
    cin>>a;
    mm[a]=1;
  }
  int c=0;
  for(int i=0;i<n2;i++)
  {
    cin>>a;
    if(mm.find(a)==mm.end()) c++;
  }
  if(c==0) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--) solve();
  return 0;
}
