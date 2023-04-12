#include <iostream>

using namespace std;

template<typename T> class Queue 
{
private:
	T* array;
	int capacity;
	int frontIndex;
	int backIndex;
	int currentSize;

public:
	Queue();
	Queue(int capacity);
	~Queue();
	T pop();
	T peek();
	void add(T element);
	bool isEmpty();
	bool isFull();
};

template<class T>
Queue<T>::Queue()
{
    Queue::array = new T[100];
    Queue::capacity = 100;
    Queue::backIndex = -1;
    Queue::frontIndex = 0;
    Queue::currentSize = 0;
}

template<class T>
Queue<T>::Queue(int capacity)
{
    if (capacity <= 0) {
        cout << "Negative or zero capacity\n";
        exit(EXIT_FAILURE);
    }

    Queue::array = new T[capacity];
    Queue::capacity = capacity;
    Queue::backIndex = -1;
    Queue::frontIndex = 0;
    Queue::currentSize = 0;
}

template<class T>
Queue<T>::~Queue() {
    delete[] array;
}

template<class T>
void Queue<T>::add(T element)
{
    if (isFull())
    {
        cout << "Queue is full\n";
        exit(EXIT_FAILURE);
    }

    backIndex = (backIndex + 1) % capacity;
    array[backIndex] = element;
    currentSize++;
}

template<class T>
T Queue<T>::pop()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        exit(EXIT_FAILURE);
    }

    T element = array[frontIndex];
    frontIndex = (frontIndex + 1) % capacity;
    currentSize--;
    return element;
}

template<class T>
T Queue<T>::peek()
{
    if (isEmpty())
    {
        cout << "Queue is empty\n";
        exit(EXIT_FAILURE);
    }

    return array[frontIndex];
}

template<class T>
bool Queue<T>::isEmpty()
{
    return currentSize == 0;
}

template<class T>
bool Queue<T>::isFull()
{
    return currentSize == capacity;
}
