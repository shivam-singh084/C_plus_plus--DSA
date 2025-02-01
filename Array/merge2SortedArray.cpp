#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    
    int i = 0, j = 0, k = 0;

    while(i < n && j < m){

        if(arr1[i] < arr2[j]){

            arr3[k] = arr1[i];
            k++;
            i++;

        }else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    } 
    
    // if elements of arr1 are left
    //  copy kardo second array k remaning  element ko

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }

    // if elements of arr2 are left
    //  copy kardo first array k element ko

    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }
}

int printarray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr1[4] = {1,3,5,7};
    int arr2[3] = {2,4,6};

    int arr3[7] = {0};

    merge(arr1, 4, arr2, 3, arr3);  

    printarray(arr3, 7);

    return 0;
}