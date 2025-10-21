#ifndef MY_QUEUE
#define MY_QUEUE

#include <iostream>
#include <queue>
using namespace std;

template<typename T>
class Queue {
private:
    queue<T> q;   
public:
    
    void enqueue(T data) {
        q.push(data);
    }

    
    void dequeue() {
        if (!isEmpty()) {
            q.pop();
        } else {
            cout << "Queue Underflow! Cannot dequeue.\n";
        }
    }

    
    T frontElement() {
        if (!isEmpty()) {
            return q.front();
        }
        throw underflow_error("Queue is Empty");
    }

    
    T backElement() {
        if (!isEmpty()) {
            return q.back();
        }
        throw underflow_error("Queue is Empty");
    }

    
    bool isEmpty() {
        return q.empty();
    }

    
    int size() {
        return q.size();
    }

    
    void clear() {
        while (!q.empty()) {
            q.pop();
        }
    }

    
    void show() {
        queue<T> temp = q; 
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

#endif
