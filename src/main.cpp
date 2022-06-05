#include "PriorityQueueHeap.h"
#include "PriorityQueueUnsorted.h"

// Algoritmos de ordenamiento
void heapSort(vector<int> &vec);      // Usando PriorityQueueHeap
void selectionSort(vector<int> &vec); // Usando PriorityQueueUnsorted

int main(int argc, char const *argv[])
{

    PriorityQueueUnsorted *queueUnsorted = new PriorityQueueUnsorted();
    PriorityQueueHeap *queueHeap = new PriorityQueueHeap();

    queueUnsorted->push(5);
    queueUnsorted->push(7);
    queueUnsorted->push(50);
    queueUnsorted->push(2);
    queueUnsorted->push(15);
    cout << queueUnsorted->top() << endl; // 2
    queueUnsorted->pop();
    cout << queueUnsorted->top() << endl; // 5

    vector<int> array;
    heapSort(array);
    selectionSort(array);

    delete queueUnsorted;
    delete queueHeap;

    return 0;
}

void heapSort(vector<int> &vec)
{
}

void selectionSort(vector<int> &vec)
{
}