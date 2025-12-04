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
        int a,b,c; cin>>a>>b>>c;
        int maxNum = max(a, max(b, c));
        int sum= a+b+c-maxNum;
        if(sum==maxNum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

