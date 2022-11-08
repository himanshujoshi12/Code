// Given a non empty array of integers,every element appears twice except for one .Find that single element 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int SingleElement(vector<int>&nums){
    unordered_map<int,int>m;
    for(auto a:nums){
        m[a]++;
    }
    for(auto a:m){
        if(a.second!=2){
            return a.first;
        }
    }
    return -1;
}
int main(){
    vector<int>nums {1,2,3,7,2,1,4,3,7,8,9,9,8};
    cout<<SingleElement(nums);    

    return 0;
}