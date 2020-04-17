#include<bits/stdc++.h>
using namespace std;

bool check(string &a)
{
    int countsFour = 0;
    for( auto i: a)
    {

        if( i != '4' && i != '1')
            return true;
        if( i == '4')
            countsFour++;
        else
            countsFour = 0;
        if( countsFour > 2 )
            return true;
    }
    return false;
}


int main()
{
   string num;
   cin >> num;
   if(num[0] != '1')
   {
       cout << "NO" << endl;
       return 0;
   }
   else if(check(num))
   {
       cout << "NO" << endl;
       return 0;
   }
   else
   {
       cout << "YES" << endl;
   }
   return 0;

}
