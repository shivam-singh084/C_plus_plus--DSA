#include<iostream>
using namespace std;

bool CheckPalindrome(char name[], int n){
    int s = 0, e = n-1;
    while(s <= e){
        if(name[s] != name[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cout << "Enter your name: ";
    cin >> name; 

    cout << "Your name is: " << name << endl;

    int len = getLength(name);
    cout << "Length of your name is: " << len << endl;
    reverse(name, len);
    cout << "Reverse of your name is: " <<  name << endl;

    CheckPalindrome(name, len);
    cout << "is your name palindrome? " << CheckPalindrome(name, len) << endl;

  
}