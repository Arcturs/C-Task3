// CTask3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    cout << "-----test #1-----\n";
    Queue<int> intQueue(5);
    intQueue.add(1);
    intQueue.add(2);
    intQueue.add(3);
    intQueue.add(4);
    cout << "----pop #1----\n";
    cout << "element: " << intQueue.pop() << "\n";
    cout << "----pop #2----\n";
    cout << "element: " << intQueue.pop() << "\n";
    cout << "----peek #1----\n";
    cout << "element: " << intQueue.peek() << "\n";
    intQueue.add(5);
    cout << "----peek #2----\n";
    cout << "element: " << intQueue.peek() << "\n";
    cout << "----pop #3----\n";
    cout << "element: " << intQueue.pop() << "\n";
    cout << "----pop #4----\n";
    cout << "element: " << intQueue.pop() << "\n";
    cout << "----pop #5----\n";
    cout << "element: " << intQueue.pop() << "\n";

    cout << "\n";

    cout << "-----test #2-----\n";
    Queue<string> stringQueue;
    stringQueue.add("one");
    stringQueue.add("two");
    stringQueue.add("three");
    stringQueue.add("four");
    cout << "----pop #1----\n";
    cout << "element: " << stringQueue.pop() << "\n";
    cout << "----pop #2----\n";
    cout << "element: " << stringQueue.pop() << "\n";
    cout << "----peek #1----\n";
    cout << "element: " << stringQueue.peek() << "\n";
    stringQueue.add("five");
    cout << "----peek #2----\n";
    cout << "element: " << stringQueue.peek() << "\n";
    cout << "----pop #3----\n";
    cout << "element: " << stringQueue.pop() << "\n";
    cout << "----pop #4----\n";
    cout << "element: " << stringQueue.pop() << "\n";
    cout << "----pop #5----\n";
    cout << "element: " << stringQueue.pop() << "\n";
}
