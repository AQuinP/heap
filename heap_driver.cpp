#include <iostream>
#include <random>
#include "Heap.h"

using namespace std;

int main() {

    Heap<int> myHeap;
    // Heap<int> myHeap(100);

    // Add 100 random values
    for (int i = 0; i < 100; i++)
    {
        myHeap.ReheapUp(rand()%2000);
    }

    // The 100 random values should come back in order
    for (int i = 0; i < 100; i++)
    {
        cout << myHeap.ReheapDown() << endl;
    }

    return 0;
}
