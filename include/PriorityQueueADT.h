#if !defined(PRIORITYQUEUEADT_H)
#define PRIORITYQUEUEADT_H

#include <cstdlib>
#include <iostream>
#include <algorithm> // std::min_element
#include <iterator>  // std::begin, std::end

using namespace std;

class PriorityQueueADT
{
public:
    virtual void push(int) = 0; // Insertar elemento
    virtual int top() = 0;      // Obtener el elemento mínimo
    virtual void pop() = 0;     // Eliminar el elemento mínimo
    virtual int size() = 0;     // Obtener la cantidad de elementos almacenados
    virtual bool empty() = 0;   // Verificar si está vacío
};

#endif // PRIORITYQUEUEADT_H
