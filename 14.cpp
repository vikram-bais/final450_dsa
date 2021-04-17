#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve()
{
  int a, b;
  vector<vector<int>> vv;
  for(int i=0;i<4;i++)
  {
    vector<int> temp;
    cout<<"E: ";
    cin>>a>>b;
    temp.push_back(a);
    temp.push_back(b);
    vv.push_back(temp);
  }
  sort(vv.begin(), vv.end());
  vector<vector<int>> oo;
  oo.push_back(vv[0]);
  for(int i=1;i<vv.size();i++)
  {
    if(oo.back()[1] >= vv[i][0]) oo.back()[1] = (oo.back()[1] > vv[i][1])?oo.back()[1]:vv[i][1];
    else oo.push_back(vv[i]);
  }
  for(int i=0;i<oo.size();i++) cout<<oo[i][0]<<", "<<oo[i][1]<<endl;
  cout<<endl;
}
int main()
{
  solve();
  return 0;
}
