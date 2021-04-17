#include<iostream>
using namespace std;
void solve()
{
  int r=4, c=4;
  //cin>>n; 1,3 = 8
  int a[4][4]={{ 1,  2,  3,  4},
               { 5,  6,  7,  8},
               { 9, 10, 11, 12},
               {13, 14, 15, 16}};
  int y=0,x=0, ud=r-1, rl=c-1;
  for(int i=0;i<rl;i++)
  {
    //cout<<x<<","<<y++<<" ";
    //cout<<rl<<","<<ud<<endl;
    cout<<a[x][y++]<<" ";
  }
  while(ud>=0 || rl>=0)
  {
    for(int i=0;i<ud;i++)
    {
      //cout<<x++<<","<<y<<" ";
      //cout<<rl<<","<<ud<<endl;
      cout<<a[x++][y]<<" ";
    }
    ud--;
    for(int i=0;i<rl;i++)
    {
      //cout<<x<<","<<y--<<" ";
      //cout<<rl<<","<<ud<<endl;
      cout<<a[x][y--]<<" ";
    }
    rl--;
    for(int i=0;i<ud;i++)
    {
      //cout<<x--<<","<<y<<" ";
      //cout<<rl<<","<<ud<<endl;
      cout<<a[x--][y]<<" ";
    }
    ud--;
    for(int i=0;i<rl;i++)
    {
      //cout<<x<<","<<y++<<" ";
      //cout<<rl<<","<<ud<<endl;
      cout<<a[x][y++]<<" ";
    }
    rl--;
  }
  //cout<<rl<<","<<ud<<endl;
  if(rl==0 || ud==0) cout<<a[x][y]<<endl;
}
int main()
{
  solve();
  return 0;
}
