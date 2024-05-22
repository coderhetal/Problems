// 1900A - Cover in Water
//  Codeforces Round 911 (Div. 2), problem: (A) Cover in Water, Accepted, 

#include <iostream>
#include <vector>
using namespace std;

void func() {
    string s;
  int n;
  cin>>n;

        cin >> s;
    
    int maxi = 0;
    int c = 0;
    int k = 0;

    for(int i = 0; i < n; i++) {
         c++;
        if(s[i] == '#') {
            c = 0;
            k++;
        }
       
       
        
        if(c > maxi)
            maxi = c;
    }

    if(maxi >= 3)
        cout << "2" << endl;
    else
        cout << n - k << endl;
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
