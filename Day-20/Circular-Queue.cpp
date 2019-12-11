#include <iostream>
using namespace std;

class Circular_Queue
{
private:
    int front;
    int rear;
    int size;

public:
    Circular_Queue(int sizeOftheArray)
    {
        front = rear = -1;
        size = sizeOftheArray;
    }
    int *arr = new int[size];

    void enqueue(int data)
    {
        if ((rear + 1) % size == front)
        {
            cout << "Error: StackOverFlow" << endl;
        }
        else
        {
            rear += 1;
            arr[(rear) % size] = data;
            if (front == -1)
            {
                ++front;
            }
        }
    }

    int dequeue()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Error: StackUnderFlow" << endl;
        }
        else
        {

            int data = arr[front % size];
            front = front + 1;
            return data;
        }
    }

    int front_()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Error: StackUnderFlow" << endl;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Circular_Queue queue(10);
    queue.enqueue(34);
    queue.enqueue(35);
    queue.enqueue(41);
    queue.enqueue(56);
    printf("%d\n", queue.dequeue());
    printf("%d\n", queue.dequeue());
    queue.enqueue(62);
    queue.enqueue(63);
    queue.enqueue(64);
    queue.enqueue(65);
    queue.enqueue(66);
    queue.enqueue(67);
    queue.enqueue(68);
    queue.enqueue(69);
    printf("%d\n", queue.dequeue());
    queue.enqueue(70);
    return 0;
}