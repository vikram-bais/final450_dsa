#include<iostream>
#include<unordered_set>
using namespace std;
void solve()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  int ans=0;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n-2;i++)
  {
    unordered_set<int> us;
    int curr=k-a[i];
    for(int j=i+1;i<n;j++)
    {
      if(us.find(curr-a[j])!=us.end())
      {
        ans=1;
        break;
      }
      us.insert(a[j]);
    }
    us.clear();
  }
  if(ans=1) cout<<"true"<<endl;
  else cout<<"false"<<endl;
}
int main()
{
  solve();
  return 0;
}
