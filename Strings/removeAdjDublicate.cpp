#include<iostream>
using namespace std;

char remDuplicate(string s, string part){
    char temp = 0;
    for(char i = 0; i < s.length(); i++ ){
        if(s.find(part) = ){
            s.erase(s.find(part), part.length())
        }
        return temp;
    }
}

int main(){
    string s;
    cout << "enter string : " << endl;
    cin>> s;
    cout << remDuplicate(s, s.length()) << endl;
    

    return 0;
}