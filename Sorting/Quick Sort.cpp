#include <bits/stdc++.h>
using namespace std;

void menu();
void quickSort(int *Array,int lowIndex,int highIndex);
int Partition(int *Array,int lowIndex,int highIndex);

int main()
{
    menu();
    return 0;
}

void menu()
{
    int *Array, arraySize;
    int i, highIndex, lowIndex;

    cout << "\t\t ::::::: " << "WELCOME TO QUICK SORT" << " :::::::" << endl;
    cout << "\t\t ====================================" << endl;

    cout << "\t " << "Enter Array Size: ";
    cin >> arraySize;

    Array = new int[arraySize];

    cout<<"\n\t Enter " << arraySize << " Element(Using Space): ";

    for(i=0;  i<arraySize;  i++)
    {
        cin >> Array[i];
    }

    cout << "\n\t " << "Before Sorting: ";
    for(i=0;  i<arraySize;  i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;

    highIndex = arraySize-1;
    lowIndex = 0;
    quickSort(Array, lowIndex, highIndex);

    cout<<"\n\t After Sorting: ";
    for(i=0;  i<arraySize;  i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl << endl;

    cout << "\t\t\t" << "THANKS" << endl;
}

void quickSort(int *Array,int lowIndex,int highIndex)
{
    int p;
    if(lowIndex >= highIndex)
    {
        return;
    }

    p = Partition(Array, lowIndex, highIndex);

    quickSort(Array, lowIndex, p-1);
    quickSort(Array, p+1, highIndex);
}

int Partition(int *Array,int lowIndex,int highIndex)
{
    int i,j,temp,pivot;

    i = lowIndex - 1;
    pivot = Array[highIndex];

    for(j=lowIndex;  j<highIndex;  j++)
    {
        if(Array[j] < pivot)
        {
            i++;
            temp = Array[j];
            Array[j] = Array[i];
            Array[i] = temp;
        }

    }
    temp = Array[highIndex];
    Array[highIndex] = Array[i+1];
    Array[i+1] = temp;

    return i+1;
}

