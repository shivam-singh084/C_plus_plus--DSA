#include<bits/stdc++.h>
using namespace std;
int main(){

    map<int, string> m;

    m[1] = " shivam";
    m[13] = "kumar";
    m[2] = " singh";

    m.insert({5, " hello"});

    cout << " before erase : " << endl;

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }


    cout << "finding -13 : " << m.count(-13) << endl;  // 0  means not present
    cout << "finding 13 : " << m.count(13) << endl;  // 1 means present


    m.erase(13);  // deleting key 13

    cout << "after erase : " << endl;

    for(auto i : m){
        cout<< i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl;
    }


}