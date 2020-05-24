#include<iostream>
using namespace std;

void menu();
void countingSort(int *Array, int araSize);

int main(void)
{
    menu();
    return 0;
}

void menu()
{
    int araSize, i, j;

    cout << "\t\t ::::::: " << "WELCOME TO COUNTING SORT" << " :::::::" << endl;
    cout << "\t\t ============================================" << endl;


    cout << "\t" << "Enter Array Size: " ;
    cin >> araSize;

    int *Array = new int[araSize];

    cout << "\t" << "Enter " << araSize << " Element (Using Space): ";

    for(int i=0;  i<araSize;  i++)
    {
        cin >> Array[i];
    }

    cout << "\n\t" << "Before Sorting : ";
    for(i=0;  i<araSize;  i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl << endl;

    //call counting sort function
    countingSort(Array,araSize);

    cout << "\t" << "After Sorting: ";
    for(i=0; i<araSize;  i++)
    {
        cout << Array[i] << " ";
    }

    cout << endl << endl;
    cout << "\t\t\t" << "THANKS" << endl;
}

void countingSort(int *Array,int arraSize)
{
    int i, j, k, largElement = Array[0];

    for(i=0;  i<arraSize;  i++)
    {
        if(Array[i] > largElement)
            largElement = Array[i];
    }

    largElement = largElement + 1;
    int *counterArray = new int[largElement];

    for(i=0;  i<largElement;  i++)
    {
       counterArray[i]=0;
    }


    for(i=0;  i<arraSize;  i++)
    {
        counterArray[Array[i]]++;
    }


    for(i=0,j=0;  i<largElement;  i++)
    {
        if(counterArray[i] != 0)
        {
            for(k=0;  k<counterArray[i];  k++)
            {
                Array[j++] = i;
            }
        }
    }
}

