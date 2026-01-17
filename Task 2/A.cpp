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
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        ll sum=0;
        set<char> s;
        string problems; cin>>problems;
        for(ll i=0;i<n;i++) {
            s.insert(problems[i]);
        }
        sum=(s.size() * 2) + (problems.size() - s.size());
        cout<<sum<<endl;
    }
}

