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
    ll count=0;
    while(t--) {
        int x,y,z;
        int ones=0;
        cin>>x>>y>>z;
        if (x==1) ones++;
        if (y==1) ones++;
        if (z==1) ones++;
        if (ones>1) count++;
    }
    cout<<count;
}

