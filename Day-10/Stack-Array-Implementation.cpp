#include <iostream>
using namespace std;

class Stack_Implementation_Array
{
private:
    const int maxSize = 10;
    int *arr = new int[maxSize];
    int length;

public:
    Stack_Implementation_Array()
    {
        length = 0;
    }

    ~Stack_Implementation_Array()
    {
        cout << "Memory is De-allocated" << endl;
        delete[] arr;
    }

    bool Push(int data)
    {
        if (length > maxSize)
        {
            return false;
        }
        else
        {
            arr[length++] = data;
            return true;
        }
    }

    int Pop()
    {
        if (length == 0)
        {
            cout << "Stack UnderFlow" << endl;
        }
        else
        {
            int data = arr[--length];
            return data;
        }
    }

    void printStack()
    {
        if (length == 0)
        {
            cout << "There is No Element in Stack" << endl;
        }
        else
        {
            int temp = length;
            while (temp--)
            {
                cout << arr[temp] << "  ";
            }
        }
    }
};

int main()
{
    Stack_Implementation_Array obj;

    for (int i = 0; i < 11; i++)
    {
        if (obj.Push(i + 1))
        {
            cout << i + 1 << " Pushed Successfully" << endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    cout << "Pop_Back: " << obj.Pop() << endl;
    cout << "Pop_Back: " << obj.Pop() << endl;
    cout << "Pop_Back: " << obj.Pop() << endl;

    cout << "Printing the Stack:  \n";
    obj.printStack();

    return 0;
}
