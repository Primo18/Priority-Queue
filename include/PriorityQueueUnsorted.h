#include "PriorityQueueADT.h"

class PriorityQueueUnsorted
{
private:
    vector<int> myVector;

public:
    PriorityQueueUnsorted();
    ~PriorityQueueUnsorted();

    void push(int);
    int top();
    void pop();
    int size();
    bool empty();
};