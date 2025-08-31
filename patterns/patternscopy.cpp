#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char c='A';
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j > 0 ; j--) {   // floyyd triangle pattern
            cout << c;
            c+=1;
        }
        cout << endl;
    }
    return 0;
}
