//Praise the Lord
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {5, 6, 7, 8, 9, 10};
    cout << "The Size of the Array is: " << arr.size() << endl; //Prints size of the Vector

    cout << "Element at the top of the Vector is: " << arr.back() << endl; //Prints the Last element *aka* Top of the Stack

    cout << "Element can be added by using vector.push_back(Number)" << endl;

    arr.push_back(100);

    cout << "After pushing 100 into the Stack (or) Vector, the Last element is: " << arr.back() << endl;

    cout << "Element can be deleted (or) poped by using vector.pop_back" << endl;

    arr.pop_back(); //This Delete element at the Top of the Stack (or) Vector

    cout << "After poping an Element from the top of the Stack (or) Vector, Now the Last element is " << arr.back() << endl;

    return 0;
}
