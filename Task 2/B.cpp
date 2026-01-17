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
    string s; cin >> s;
    ll countUpper = 0, countLower = 0;
    int n = s.length();
    if (n==1) {
        if (isupper(s[0])) {
            s[0]=tolower(s[0]);
            cout << s << endl;
        }else {
            s[0]= toupper(s[0]);
            cout << s << endl;
        }
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (isupper(s[i])) {
            countUpper++;
        }
        if (islower(s[i])) {
            countLower++;
        }
    }
    if ((islower(s[0]) && countUpper == n-1) ) {
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                s[i]= toupper(s[i]);
            }else {
                s[i]= tolower(s[i]);
            }
        }
        cout << s << endl;
        return 0;
    }
    if (countUpper == n ) {
        for (int i = 0; i < n; i++) {
            s[i]=tolower(s[i]);
        }
        cout << s << endl;
        return 0;
    }
    cout << s << endl;
    return 0;
}

