// Given a string str find all the subesequenc of string str 

#include<iostream>
using namespace std;
void printSubsequence(string str,int index,string ans){
    if(index==str.length()){
        cout<<ans<<endl;
        return;
    }
    printSubsequence(str,index+1,ans+str[index]);
    printSubsequence(str,index+1,ans);
}
int main(){
    string str = "abcd";
    string ans;
    printSubsequence(str,0,ans);


}