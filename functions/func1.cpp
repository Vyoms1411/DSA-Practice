#include <iostream>
using namespace std;
int getFact(int n){
    int fact=1;
    for (int i =1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}




int main(){
    cout<<getFact(5)<<endl;
}