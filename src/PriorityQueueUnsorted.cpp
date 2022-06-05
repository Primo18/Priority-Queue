#include "PriorityQueueUnsorted.h"

PriorityQueueUnsorted::PriorityQueueUnsorted()
{
}

PriorityQueueUnsorted::~PriorityQueueUnsorted()
{
}

void PriorityQueueUnsorted::push(int element)
{
    myVector.push_back(element);
}

int PriorityQueueUnsorted::top()
{
    auto min = *min_element(begin(myVector), end(myVector));
    return min;
}

void PriorityQueueUnsorted::pop()
{
    auto min = min_element(begin(myVector), end(myVector));
    myVector.erase(min); // Time Complexity: O(N) - worst case, O(1) - best case
}

int PriorityQueueUnsorted::size()
{
    return myVector.size();
}

bool PriorityQueueUnsorted::empty()
{
    return myVector.empty();
}