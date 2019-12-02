#include <iostream>
using namespace std;

//this is the Address of the Pointer

class This_Pointer
{
private:
    int data;

public:
    This_Pointer(int data)
    {
        this->data = data;
    }
    int getData(int data)
    {
        return this->data;
    }
    This_Pointer &Multiply(int data)
    {
        this->data *= data;
        return *this;
    }
    This_Pointer &Addition(int data)
    {
        this->data += data;
        return *this;
    }
    This_Pointer &Subraction(int data)
    {
        this->data -= data;
        return *this;
    }
};

int main()
{
    This_Pointer obj(1000);

    cout << obj.getData(100) << endl; //Will print "1000"

    obj.Multiply(10).Addition(10).Subraction(1000); //Chaining-Member-Functions using this pointer

    cout << obj.getData(100) << endl;

    return 0;
}