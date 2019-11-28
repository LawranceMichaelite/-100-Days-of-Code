//Praise the Lord
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "To Display the size of the Vector: " << arr.size() << endl;

    //To Resize the Size of the Vector
    arr.resize(7);

    cout << "\nThe Resized vector is:  ";
    for (auto element : arr)
        cout << element << " ";

    cout << "\n";

    arr.resize(5);
    cout << "Again after Resizing:  ";
    for (auto element : arr)
        cout << element << " ";
    cout << endl;
    //Resizing a vector is computationally expensive

    //Boolean Vector can also be used and it Only costs a Byte
    cout << "The Output of Boolean Vector is: ";
    vector<bool> Bool_Array = {true, false, true, false, false};
    for (auto element : Bool_Array)
        cout << element << " ";

    return 0;
}
