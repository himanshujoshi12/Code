// Find The majority Element in the array . A 'majority element' in an array is an element that appears more than  n/2 times if it is of size n

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int majorityElement(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto a:m){
        if(a.second>n/2){
            return a.first;
        }
    }return -1;
}
int main(){
    int arr[]={1,2,3,4,3,3,5,3,3,3};
    int n = 10;
    cout<<majorityElement(arr,n);
}