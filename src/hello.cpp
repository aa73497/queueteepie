#include <string>
#include <iostream>
using namespace std;
#include "hello.hpp"

QueueTees::QueueTees(int max_size) {
    this->max_size = max_size;
    this->current_size = 0;
    this->front =0;
    this->rear = 0;
    data = new Cutie*[max_size];

}

QueueTees::~QueueTees() {
    delete [] data;

}
bool QueueTees::full() const {
    return current_size == max_size;
}
bool QueueTees::empty() const {
    return current_size == 0;
}
Cutie *QueueTees::dequeue() {
    if (empty()) {
        cout<<"Queue is empty"<<endl;
        return nullptr;

    }
    Cutie *ret = data[front];
    front = (front + 1) % max_size;
    current_size--;
    return ret;

}
void QueueTees::enqueue(Cutie& cutie) {
    if (full()) {
        cout<<"Queue is full"<<endl;
        return;
    }
    data[rear] = &cutie;
    rear = (rear + 1) % max_size;
    current_size++;
}
int QueueTees::size() const {
    return current_size;
}
