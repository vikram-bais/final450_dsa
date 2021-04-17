#include<iostream>
using namespace std;
void solve()
{
  int r=4, c=4, ele, co=0;
                            //  1,3 = 8
  int a[4][4]={{ 1,  2,  3,  4},
               { 5,  6,  7,  8},
               { 9, 10, 11, 12},
               {13, 14, 15, 16}};
  int kkk;
  cin>>kkk;
  while(kkk--)
  {
    cin>>ele;
    co=0;
    for(int i=0;i<r;i++)
    {
      if(ele==a[i][0])
      {
        co++; break;
      }
      else if(ele==a[i][c-1])
      {
        co++; break;
      }
      else if(ele>a[i][0] && ele<a[i][c-1])
      {
        int lft=1,rgt=c-1;
        int mid=(lft+rgt)/2;
        while(lft<rgt)
        {
          if(ele<a[i][mid])
          {
            rgt=mid;
            mid=(lft+rgt)/2;
          }
          else if(ele>a[i][mid])
          {
            lft = mid;
            mid=(lft+rgt)/2;
          }
          else if(ele==a[i][mid])
          {
            co++;
            break;
          }
        }
      }
    }
    if(co==0) cout<<"false"<<endl;
    else cout<<"true"<<endl;
  }
}
int main()
{
  solve();
  return 0;
}
