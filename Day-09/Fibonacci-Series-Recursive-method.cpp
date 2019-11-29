//Praise the Lord

//Recursive-method casues many unwanted Function Calls which  Increase the Space Complexity

#include <iostream>
using namespace std;

int fibonacciSeries(int number)
{
    if (number <= 1)
    {
        return number;
    }
    else
    {
        return fibonacciSeries(number - 1) + fibonacciSeries(number - 2);
    }
}

int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    cout << "The Fibonacci Value is: " << fibonacciSeries(number) << endl;
    return 0;
}