#include <iostream>
using namespace std;

bool chk(int mid)
{
}

void binarysrch()
{
     int n;
     cin >> n;
     int ar[n];
     for (int i = 0; i < n; i++)
     {
          cin >> ar[i];
     }
     int s = 0;
     int e = n;
     int ans = -1;
     while (s <= e)
     {
          int mid = (s + e) / 2;
          if (chk(mid))
          {
               ans = mid;
               s = mid + 1;
          }
          else
          {
               e = mid - 1;
          }
     }
}
int main()
{

     return 0;
}