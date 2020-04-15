#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(12);
    for(int i = 0 ; i < 12 ; i++)
        cin >> arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
        int sum = 0;
        int ans = 0;
        for(auto i : arr)
        {
            if(sum < n)
            {
                sum += i;
                ans++;
            }
            else
                break;
        }
        if(sum < n)
            cout << -1 << endl;
        else
            cout << ans << endl;
    return 0;
}
