#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int key){
    int s=0 , e=n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int lastocc(int arr[], int n, int key){
    int s=0 , e=n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){

    int even[10]={1,2,3,3,3,3,3,8,9,10};

    cout << "first occurence of 3 is at index : " << firstocc(even, 10, 3) << endl;
    cout << "last occurence of 3 is at index : " << lastocc(even, 10, 3) << endl;


    return 0;
}