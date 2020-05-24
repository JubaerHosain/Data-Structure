
#include<iostream>
using namespace std;

void insertionSort(int ara[],int n)
{
    int i,j,item;


    for(i=1; i<n; i++)
    {
        item=ara[i];
        j=i-1;
        while(ara[j]>item && j>=0)
        {
            ara[j+1]=ara[j];
            j--;
        }
        ara[j+1]=item;
    }
}

int main(void)
{
    int ara[20];
    int n;
    cout<<"Enter array size:";
    cin>>n;

    cout << "Enter " << n << " Element: ";
    for(int i=0; i<n; i++)
        cin>>ara[i];
    insertionSort(ara,n);

    for(int i=0; i<n; i++)
        cout<<ara[i]<<endl;
}
