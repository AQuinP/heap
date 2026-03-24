#ifndef HEAP_H
#define HEAP_H

class FullHeap{};

template<class T>
class Heap {
public:
    Heap();
    explicit Heap(int max_size);

    void ReheapUp(T value);  // adding stuff
    T ReheapDown();        // remove the root

private:
    int max_size;   // maximum size of the heap
    int size;       // number of elements in the heap
    T *elements;  // array
};



#include "Heap.cpp"

#endif
