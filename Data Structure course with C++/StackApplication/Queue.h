#ifndef MY_CIRCULAR_QUEUE
#define MY_CIRCULAR_QUEUE
#include <iostream>
using namespace std;

template <typename T>
class CircularQueue {
private:
    T* arr;
    int size;
    int front;
    int rear;
    int count;  

    
    void resize(int newSize) {
        T* newArr = new T[newSize];
        for (int i = 0; i < count; i++) {
            newArr[i] = arr[(front + i) % size];
        }
        delete[] arr;
        arr = newArr;
        size = newSize;
        front = 0;
        rear = count - 1;
        cout << "Queue resized to " << newSize << " elements\n";
    }

public:
    CircularQueue(int initialSize = 10) {
        size = initialSize;
        arr = new T[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isFull() {
        return count == size;
    }

    bool isEmpty() {
        return count == 0;
    }

    void enqueue(T x) {
        if (isFull()) {
            resize(size * 2);  
        }
        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        front = (front + 1) % size;
        count--;
    }

    T peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return T();  
        }
        return arr[front];
    }

    void printQueue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % size] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return count;
    }
};

#endif
