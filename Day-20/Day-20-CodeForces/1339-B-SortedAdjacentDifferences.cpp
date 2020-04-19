#include<bits/stdc++.h>
using namespace std;
#define endl "\n" ;



int main() {

#ifndef ONLINE_JUDGE
    freopen(R"(C:\Users\Lawrance\CLionProjects\jesus\input.txt)", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num ;
        vector<int>arr(num);
        for(auto & i : arr)
            cin >> i;
        sort(arr.begin(),arr.end());
        vector<int>ans;
        if(num%2==0)
        {
            int temp1 = num/2 -1;
            int temp2 = num/2;
            while( temp1 >= 0 && temp2 < num)
            {
                ans.push_back(arr.at(temp1--));
                ans.push_back(arr.at(temp2++));
            }
        } else {
            int temp1 = num/2 -1;
            int temp2 = num/2 +1;
            ans.push_back(arr.at(num/2));
            while( temp1 >= 0 && temp2 < num)
            {
                ans.push_back(arr.at(temp1--));
                ans.push_back(arr.at(temp2++));
            }
        }
        for(int i : ans)
            cout << i << " ";
        cout << endl;

    }
    return 0;
}
