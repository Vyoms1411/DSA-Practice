#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i=0;i<n;i++){
        for (int j=1;j<=(n-i);j++){
            cout<<j;
        }
        if(i!=0){
            for (int j=0;j<2*i;j++){
                cout<<"*";
            }
        }
        for(int j =(n-i);j>0;j--){
            cout<<j;
        }
                cout<<endl;
    
    }
    return 0;
}