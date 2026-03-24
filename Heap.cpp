//
// Created by we7289 on 3/13/2024.
//

#include "Heap.h"

void swap(int *array, int i, int j) {
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

template<class T>
Heap<T>::Heap() {
    size = 0;
    max_size = DEFAULT_SIZE;
    elements = new T[max_size];
}

template<class T>
Heap<T>::Heap(int max_size) {
    size = 0;
    this->max_size = max_size;
    elements = new T[max_size];
}

template<class T>
void Heap<T>::ReheapUp(T value) {
    if (size >= max_size) {
        throw FullHeap();
    }

    elements[size] = value;

    int currInd = size;

    while (currInd != 0) {
        int parInd = (currInd - 1) / 2;
        //current is bigger than parent
        if (elements[currInd] > elements[parInd]) {
            swap(elements, currInd, parInd);
            currInd = parInd;
        }
        else {
            break;
        }
    }
    ++size;
}

template<class T>
T Heap<T>::ReheapDown() {
    T priority_value = elements[0];

    elements[0] = elements[size - 1];
    --size;

    int currInd = 0;
    int btmInd = size - 1;

    int leftIndex = currInd * 2 + 1;
    int rightIndex = currInd * 2 + 2;
    int maxChildInd;

    while (currInd != btmInd || leftIndex > btmInd || rightIndex > btmInd) {
        if (leftIndex == btmInd) {
            maxChildInd = leftIndex;
        }
        else if (elements[leftIndex] > elements[rightIndex]) {
            maxChildInd = leftIndex;
        }
        else {
            maxChildInd = rightIndex;
        }

        //compare curr to max

        //If we are smaller than the max
        if (elements[currInd] < elements[maxChildInd]) {
            swap(elements, currInd, maxChildInd);
            currInd = maxChildInd;
        }
        else { //If we are bigger than the max
            break;
        }
        leftIndex = currInd * 2 + 1;
        rightIndex = currInd * 2 + 2;
    }

    return priority_value;
}
