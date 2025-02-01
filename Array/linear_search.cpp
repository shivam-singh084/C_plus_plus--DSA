#include<iostream>
using namespace std;

bool search(int arr[], int size , int key){

    for(int i=0 ; i < size ; i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}

int main(){
     int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};

    cout<< "Enter the number of elements you want to search: " << endl;

    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if(found){
        cout << "Element is present in array" << endl;
    }
    else{
        cout << "Element is not present in array" << endl;
    }
    return 0;
}

