#include<iostream>
using namespace std;
void bubbleSort(int arr[],int len)
{
    for(int i=0;i<len-1;i++){
        for(int j=i;j<len-1;j++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}
int main(){
    int arr[]={2,1,7,3,8};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}