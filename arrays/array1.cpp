#include <iostream>
using namespace std;
int main(){
    int arr[5]={15,25,35,55,45};
    int size = 5;
    int min=INT8_MAX;
    for (int i =0;i<size;i++){
        if (arr[i]<min){
            min=arr[i];
        }
        
    }
    cout<<min;
    cout<<arr[min];
    return 0;
}