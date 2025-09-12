#include <iostream>
using namespace std;
int linearSearch(int arr[],int len,int target){
    for (int i=0;i<len;i++){
        if(arr[i]==target){
            return i;
        }
        
    }
    return -1;
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    int target =8;
    cout<<linearSearch(arr,len,target)<<endl;
    return 0;
}