// you are given an array of size n . you need to find all pairs in the array that sum to a number K.If no such pair exist return -1.The elements of array are distinct and are in sorted order 

#include<iostream>
using namespace std;
int countPairs(int arr[],int n,int sum){
    int count = 0;
    int i=0,j=n-1,k;
    while(i<j){
        k = arr[i]+arr[j];
        if(k==sum){
            count++;
            i++;
            j--;
        }
        if(k>sum){
            j--;
        }else{
            i++;
        }

    }if(count==0) return -1;
    return count;

}
int main(){
    int arr[6]={1,5,7,10,11,16};
    int ans = countPairs(arr,6,17);
    cout<<ans;


    return 0;
}

