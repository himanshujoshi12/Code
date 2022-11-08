// Given an array you have to remove that element from that array 
#include<iostream>
using namespace std;
int RemoveElement(int arr[],int n,int elm){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=elm){
            arr[i]=arr[j];
            i++;
        }
    }return i;
}
int main(){
    int arr[]={1,5,4,78,9,5,2,42,4,7,2,5,4,2,4,2,7};
    int size=RemoveElement(arr,17,2);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}