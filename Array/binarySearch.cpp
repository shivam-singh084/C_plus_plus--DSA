#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    // int mid = (start + end)/2;

    int mid = start + (end-start)/2;

    while(start<=end){

        if(arr[mid]==key) {
            return mid;
        } 

        if(arr[mid]<key){
            start = mid +1;
        } 
        else{
            end = mid -1;
        }

        mid = start + (end-start)/2;


    }
    return -1;

}    

int main(){

    int even[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};

    int evenind = binarysearch(even, 6, 4);
    cout<< "index of 4 is :" << evenind <<endl;

     int oddind = binarysearch(odd, 5, 1);
    cout<< "index of 1 is :" << oddind <<endl;

    return 0;
}