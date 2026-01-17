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
    int n; cin>>n;
    string s; cin>>s;
    set<char> st;
    for(int i=0;i<n;i++) {
        st.insert(tolower(s[i]));
    }
    if(st.size() == 26) {
        cout<<"YES";
    }else {
        cout<<"NO";
    }
}

