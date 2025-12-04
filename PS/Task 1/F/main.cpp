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
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(a == b && b == c && c == d && a == d && a == c && d == b ) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

