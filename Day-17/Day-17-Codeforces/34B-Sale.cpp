#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >>m ;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
   sort(arr.begin(),arr.end());
   auto i = arr.begin();
   int ans = 0;
   int carry = 0;
   while(i != arr.end() && *i <= 0 &&  carry < m)
   {
       ans += *i;
       i++;
       carry++;
   }
   cout << abs(ans) << endl;
    return 0;
}
