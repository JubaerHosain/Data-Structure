#include<iostream>
using namespace std;

void selectionSort(int ara[],int n)
{
    int i,j,minimum,temp;

    for(i=0; i<n-1; i++)
    {
        minimum=i;
        for(j=i+1; j<n; j++)
        {
            if(ara[j]<ara[minimum])
            {
                minimum=j;
            }
        }
        if(minimum!=i)
        {
           temp=ara[i];
           ara[i]=ara[minimum];
           ara[minimum]=temp;
        }
    }
}


int main(void)
{
    int ara[100];
    int n;
    cout << "Enter Array Size: ";
    cin>>n;

    cout << "Enter " << n << " element: ";
    for(int i=0; i<n; i++)
        cin>>ara[i];
    selectionSort(ara,n);
    cout<<"After sorting:"<<endl;

    for(int i=0; i<n; i++)
    cout<<ara[i]<<endl;
}
