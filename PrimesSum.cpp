// Given a number N.Find if it can be expressed as sum of two prime numbers
#include<iostream>
using namespace std;
class Solution {
public:
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }return true;
}
string isSumOfTwo(int N){
    for(int i=2;i<N-1;i++){
        if(isPrime(i) && isPrime(N-i)){
            return "YES";
        }
    }return "NO";
}
};
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    Solution ob;
    cout<<ob.isSumOfTwo(n)<<endl;
    return 0;


}