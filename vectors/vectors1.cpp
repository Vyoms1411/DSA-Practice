#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(22);
    vec.push_back(32);
    vec.push_back(24);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

}