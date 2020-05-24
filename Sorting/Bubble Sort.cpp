#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n = 10;
    int A[10] = {40,6,83,0,1,45,5,3,61,3};

    for(int i = 1; i < n; i++){                      //Bubbles occurs (n-1) times
        for(int j = 0; j < n-i; j++){
            if(A[j] > A[j+1]){
                int large = A[j];
                A[j] = A[j+1];
                A[j+1] = large;
            }
        }
    }

    for(int i=0; i<10; i++){
        cout << A[i] << endl;
    }
}
