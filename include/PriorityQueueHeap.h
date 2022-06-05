#include "PriorityQueueADT.h"

class PriorityQueueHeap
{
private:
    vector<int> myVector;

public:
    PriorityQueueHeap();
    ~PriorityQueueHeap();

    void push(int);
    int top();
    void pop();
    int size();
    bool empty();
};