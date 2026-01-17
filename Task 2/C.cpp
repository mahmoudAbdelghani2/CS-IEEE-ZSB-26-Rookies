#include <iostream>
#include<iomanip>
#include<bits/stdc++.h>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
#include <limits>
#include <sstream>
#define ll long long
#define endl "\n"
using namespace std;
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    fastIO();
    int t; cin>>t;
    while(t--) {
        string s; cin >> s;
        int n = s.length();
        if (n<=10) {
            cout << s << endl;
        }else {
            cout << s[0]<<n-2<<s[n-1] << endl;
        }
    }
}

