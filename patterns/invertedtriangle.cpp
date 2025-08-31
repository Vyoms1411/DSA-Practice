#include <iostream>
using namespace std;
int main() {
    int n = 4; 
   /* for (int i=0;i<n;i++ ){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        for (int j=0;j<n-i;j++){
            cout<<i+1;
        }*/
    char ch='A';
     for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            cout << " ";
        }
        // print same letter (n-i) times
        for (int j = n; j > i; j--) {
            cout << ch;
        }
        cout << endl;
        ch++; // next alphabet
    }
    
    return 0;
}