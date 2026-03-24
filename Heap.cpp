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

}

template<class T>
Heap<T>::Heap(int max_size) {

}

template<class T>
void Heap<T>::ReheapUp(T value) {

}

template<class T>
T Heap<T>::ReheapDown() {
    T priority_value;

    return priority_value;
}
