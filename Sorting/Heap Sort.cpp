#include<bits/stdc++.h>
using namespace std;

void BuildHeap(int *heap, int arraySize);
void MaxHeapify(int *heap, int arraySize, int i);
void HeapSort(int *heap, int arraySize);

int main(void)
{
    int *heapArray, arraySize;
    cout << "Enter Array Size:" ;
    cin >> arraySize;
    heapArray = new int[arraySize+1];

    cout << "Enter " << arraySize << " number to HeapArray: " << endl;
    for(int i=1;  i<=arraySize;  i++)
        cin >> heapArray[i];

    BuildHeap(heapArray, arraySize);
    HeapSort(heapArray, arraySize);

    cout << "After sorting the HeapArray: " << endl;
    for(int i=1; i<=arraySize; i++)
        cout << heapArray[i] << " ";

    cout << endl << endl;

    return 0;
}

void BuildHeap(int *heap, int arraySize)
{
     for(int i=arraySize/2;  i>=1; i--)
     {
         MaxHeapify(heap, arraySize, i);
     }
}

void MaxHeapify(int *heap, int arraySize, int i)
{
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    int largeIndex;

    if(leftIndex <= arraySize && heap[leftIndex] > heap[i])
    {
        largeIndex = leftIndex;
    }
    else
    {
        largeIndex = i;
    }

    if(rightIndex<=arraySize && heap[rightIndex] > heap[largeIndex])
    {
        largeIndex = rightIndex;
    }

    if(largeIndex != i)
    {
        int temp = heap[i];
        heap[i] = heap[largeIndex];
        heap[largeIndex] = temp;

        MaxHeapify(heap, arraySize, largeIndex);
    }
}

void HeapSort(int *heap, int arraySize)
{
    for(int i=arraySize; i>1; i--)
    {
        int temp = heap[1];
        heap[1] = heap[i];
        heap[i] = temp;

        arraySize=arraySize-1;
        MaxHeapify(heap, arraySize, 1);
    }
}

