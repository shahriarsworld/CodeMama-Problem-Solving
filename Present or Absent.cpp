// Problem Statement
// You are given an non decreasing array of integers of size 
// N
// N and an integer 
// X
// X. You have to determine if 
// X
// X is present in the array or absent .

#include <bits/stdc++.h>
using namespace std;
     
int main() {
    int n, x;
    cin>> n >> x;
    vector<int>arr(n); //I used vector because it is a resizable array
    for (int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    if(binary_search(arr.begin(), arr.end(), x)){
        cout<<"P"<<endl;
    }else{
        cout<<"A"<<endl;
    }
    return 0;
}
