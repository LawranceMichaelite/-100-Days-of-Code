#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    int m;
    cin >> m;
    vector<int>arr1(m);
    for(int i = 0 ; i < m ; i++)
        cin >> arr1[i];
    vector<int>ans;
    for(int i = 0; i < n ; i++)
    {
        int b = arr[i];
        for(int j= 0; j < m ; j++)
        {
            if(arr1[j]%b==0)
                ans.push_back(arr1[j]/b);
        }
    }
    sort(ans.begin() , ans.end() , greater<int>());
    cout << count(ans.begin(),ans.end(),ans[0]) << endl;
    return 0;
}
