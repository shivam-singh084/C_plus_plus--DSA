#include<iostream>
#include<vector>
using  namespace std;

int main(){

    vector<int>vac;
    vac.push_back(0);
    vac.push_back(1);
    vac.push_back(2);

    cout << vac.size()<< endl;
    cout << vac.capacity()<< endl;


    return 0;
}