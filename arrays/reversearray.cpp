#include <iostream>
using namespace std;
void reverseArray(int arr[] ,int len){
    int start =0;
   int end = len -1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int len = 7;
    /*int barr[7];
    for (int i = 0; i < len; i++)
    {
        barr[i]=arr[len-1-i];
        cout<<barr[i]<<" ";
    }
    */
   
   reverseArray(arr,len);
   for (int i = 0; i < len; i++)
   {
      cout<<arr[i];
   }
   


   

    
    
    return 0;
}