#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<int> q1;

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    cout << "Queue Elements: ";
    q1.show();

    cout << "Front Element: " << q1.frontElement() << endl;
    cout << "Back Element: " << q1.backElement() << endl;

    q1.dequeue();
    cout << "After Dequeue: ";
    q1.show();

    q1.clear();
    cout << "Queue Cleared, isEmpty? " << (q1.isEmpty() ? "Yes" : "No") << endl;

    // Queue with strings
    Queue<string> names;
    names.enqueue("Alice");
    names.enqueue("Bob");
    names.enqueue("Charlie");
    cout << "Names Queue: ";
    names.show();

    return 0;
}
