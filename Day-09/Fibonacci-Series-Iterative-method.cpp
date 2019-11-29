//Praise the Lord

//Space-Optimized Method

#include <iostream>
using namespace std;

int fibonacciSeries(int number)
{
    int temp_1 = 1;
    int temp_2 = 1;
    int answer = 0;

    for (int i = 2; i < number; i++)
    {
        answer = temp_1 + temp_2;
        temp_2 = temp_1;
        temp_1 = answer;
    }

    return answer;
}

int main()
{
    int number;
    cout << "Enter the Number: ";
    cin >> number;
    cout << "The Fibonacci Value is: " << fibonacciSeries(number) << endl;
    return 0;
}