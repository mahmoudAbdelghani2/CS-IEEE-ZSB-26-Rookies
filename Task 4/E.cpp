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
set<string> strs;
void generateStrings(string &s, int l) {
    if (l == s.size()) {
        strs.insert(s);
        return;
    }
    for (int i = l; i < s.size(); i++) {
        swap(s[l], s[i]);
        generateStrings(s, l + 1);
        swap(s[l], s[i]);
    }
}
int main() {
    fastIO();
    string s; cin >> s;
    generateStrings(s,0);
    cout << strs.size() << endl;
    for (const auto & str : strs) {
         cout << str << endl;
    }
}

