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
    //codeforces
    int t; cin>>t;
    while(t--) {
        char c; cin>>c;
        if (c=='c' || c== 'o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

