//Praise the Lord

//Dynamic Array Which doesn't need any Explicit Initialization of its Size

#include<iostream>
using namespace std;

class ArrayList
{
    private:
        int max_size , length = 0;
        int *arr = new int[1];
    
    bool isFull(int size)
    {
        if(max_size <= size)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    public:
    ArrayList()
    {
        max_size = 1 ;
    }

    void Insertion(int Element)
    {
        if(isFull(length))
        {
            int *temp_arr = new int[2*max_size] ;
            max_size = 2 * max_size ;

            for(int i=0 ; i<length ; i++)
            {
                temp_arr[i] = arr[i];
            }

            delete [] arr;
            
            arr = temp_arr ;
            Insertion(Element);
        }
        else
        {
            arr[length] = Element;
            length++;
        }
        
    }

    int* get_array(int *size)
    {
        *size = length;
        return arr ;
    }
};

int main()
{
    ArrayList a;
    a.Insertion(1);
    a.Insertion(10);
    a.Insertion(15);
    a.Insertion(14);
    a.Insertion(1);
    a.Insertion(10);
    a.Insertion(15);
    a.Insertion(14);
    a.Insertion(17);
    int length = 0;
    int *arr = a.get_array(&length);
    for(int i=0; i<length ; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}