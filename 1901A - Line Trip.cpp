// https://codeforces.com/problemset/problem/1901/A
// Educational Codeforces Round 158 (Rated for Div. 2), problem: (A) Line Trip, Accepted,
#include <iostream>
#include <vector>
using namespace std;

void func() {
    
//     The first line contains one integer t
//  (1≤t≤1000
// ) — the number of test cases.

// Each test case consists of two lines:

// the first line contains two integers n
//  and x
//  (1≤n≤50
// ; 2≤x≤100
// );
// the second line contains n
//  integers a1,a2,…,an
//  (0<a1<a2<⋯<an<x
// ).
// Output
// For each test case, print one integer — the minimum possible volume of the gas tank in your car that will allow you to travel from the point 0
//  to the point x
//  and back.

// Example
// inputCopy
// 3
// 3 7
// 1 2 5
// 3 6
// 1 2 5
// 1 10
// 7
// outputCopy
// 4
// 3
// 7


int n,x;
cin>>n>>x;
vector<int> arr(n);
for(int i=0;i<n;i++)
 {cin>>arr[i];
   
     
 }
 int maxi =arr[0];
 for(int i=1;i<n;i++)
 {
     int c=arr[i]-arr[i-1];
     if(maxi<c)
     maxi=c;
     
 }
 cout<<max(2*(x-arr[n-1]),maxi)<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        func();
        t--;
    }
    return 0;
}