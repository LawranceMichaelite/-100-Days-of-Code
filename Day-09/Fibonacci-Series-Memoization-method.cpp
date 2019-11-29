//Praise the Lord

//Dynamic Programming Method which caches the Unwanted Calls

#include <iostream>
#include <vector>
using namespace std;

int fibonacciSeries(int number)
{
    vector<int> arr = {0, 1};

    for (int i = 2; i <= number; i++)
    {
        arr.push_back(arr[i - 1] + arr[i - 2]);
    }

    return arr[number];
}

int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    cout << "The Fibonacci Value is: " << fibonacciSeries(number) << endl;
    return 0;
}