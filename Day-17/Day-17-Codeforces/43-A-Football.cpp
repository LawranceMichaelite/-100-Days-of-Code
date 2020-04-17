#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string , int>law ;
    int num ;
    cin >>num;
    string temp;
    for(int i = 0 ; i < num ; i++)
    {
        cin >> temp ;
        if(law.find(temp) == law.end())
            law.insert(make_pair(temp,1));
        else
            law.find(temp)->second += 1;
    }
    map<string ,int>::const_iterator iter ;
    int maxi = -1;
    for(auto i = law.begin() ; i != law.end() ; i++)
    {
        if( i->second > maxi)
        {
            maxi = i->second ;
            iter = i;
        }
    }
    cout << iter->first << endl;
    return 0;
}
