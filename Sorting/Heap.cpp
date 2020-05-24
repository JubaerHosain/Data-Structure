#include<bits/stdc++.h>
using namespace std;

void BuildMaxHeap(int *heap, int arraySize);
void BuildMinHeap(int *heap, int arraySize);
void MaxHeapify(int *heap, int arraySize, int i);
void MinHeapify(int *heap, int arraySize, int i);


int main(void)
{
    int *heapArray, arraySize;
    cout << "Enter Array Size:" ;
    cin >> arraySize;
    heapArray = new int[arraySize+1 * 50];

    cout << "Enter " << arraySize << " number to HeapArray: " << endl;
    for(int i=1;  i<=arraySize;  i++)
        cin >> heapArray[i];

    BuildMaxHeap(heapArray, arraySize);

    cout << "MaxHeap Array is: " << endl;
    for(int i=1; i<=arraySize; i++)
        cout << heapArray[i] << " ";

    BuildMinHeap(heapArray, arraySize);

    cout << "\nMinHeap Array is: " << endl;
    for(int i=1; i<=arraySize; i++)
        cout << heapArray[i] << " ";

    cout << endl << endl;

    return 0;
}

void BuildMaxHeap(int *heap, int arraySize)
{
     for(int i=arraySize/2;  i>=1; i--)
     {
         MaxHeapify(heap, arraySize, i);
     }
}

void BuildMinHeap(int *heap, int arraySize)
{
    for(int i=arraySize/2; i>=1; i--)
    {
        MinHeapify(heap, arraySize, i);
    }
}

void MaxHeapify(int *heap, int arraySize, int i)
{
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    int largeIndex;

    if(leftIndex<=arraySize && heap[leftIndex]>heap[i])
    {
        largeIndex = leftIndex;
    }
    else
    {
        largeIndex = i;
    }

    if(rightIndex<=arraySize && heap[rightIndex]>heap[largeIndex])
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

void MinHeapify(int *heap, int arraySize, int i)
{
    int leftIndex = 2*i;
    int rightIndex = 2*i+1;
    int smallIndex;

    if(leftIndex<=arraySize && heap[leftIndex]<heap[i])
    {
        smallIndex = leftIndex;
    }
    else
    {
        smallIndex = i;
    }

    if(rightIndex<=arraySize && heap[rightIndex]<heap[smallIndex])
    {
        smallIndex = rightIndex;
    }

    if(smallIndex != i)
    {
        int temp = heap[i];
        heap[i] = heap[smallIndex];
        heap[smallIndex] = temp;

        MinHeapify(heap, arraySize, smallIndex);
    }
}





