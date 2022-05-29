#include "PriorityQueueADT.h"

class PriorityQueueHeap
{
private:
public:
    PriorityQueueHeap();
    ~PriorityQueueHeap();

    void push(int);
    int top();
    void pop();
    int size();
    bool empty();
};