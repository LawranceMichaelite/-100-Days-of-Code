#include<bits/stdc++.h>
using namespace std;
#define endl "\n" ;
typedef long long ll ;


int main() {

#ifndef ONLINE_JUDGE
    freopen(R"(C:\Users\Lawrance\CLionProjects\jesus\input.txt)", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int pw = 2; pw < 30; ++pw) {
            int val = pow(2 , pw) - 1;
            if (n % val == 0) {
                cout << n / val << endl;
                break;
            }
        }
    }
}
