// Codeforces Round 912 (Div. 2), problem: (A) Halloumi Boxes, Accepted
// https://codeforces.com/problemset/problem/1903/A

#include <iostream>
#include <vector>
using namespace std;

void func() {
    int n;
    cin >> n;
    vector<int> arr(n);  
    int k;
    int flag = 0;
    cin >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] < arr[i])
            flag = 1;
    }
    
    if (k >= 2) {
        cout << "YES" << endl;
    } else if (flag == 1 && k < 2) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
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
