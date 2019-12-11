#include <iostream>
using namespace std;

class Queue
{
private:
    int front;
    int rear;
    int size;

public:
    Queue(int sizeOfTheArray)
    {
        front = rear = -1;
        size = sizeOfTheArray;
    }

    int *arr = new int[size];

    void enqueue(int data)
    {
        if (rear >= size - 1)
        {
            cout << "Error: StackOverFlow" << endl;
            exit(-1);
        }
        else
        {
            arr[++rear] = data;
            cout << "Data Enqueued" << endl;
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
            exit(-1);
        }
        else
        {
            int data = arr[front++];
            return data;
        }
    }

    int getFront()
    {
        if (rear == -1 && front == -1)
        {
            cout << "Error: StackUnderFlow" << endl;
            exit(-1);
        }
        else
        {
            int data = arr[front];
            return data;
        }
    }
};

int main()
{
    Queue queue(10);
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