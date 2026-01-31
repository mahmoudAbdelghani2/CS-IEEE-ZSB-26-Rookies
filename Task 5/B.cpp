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
ll find_num(ll n, ll x, ll y) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (i != x && i != y) {
                return i;
            }
        }
    }
    return -1;
}
int main() {
    fastIO();
    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        ll a,b,c;
        a=find_num(n,-1,-1);
        if (a == -1) {
            cout << "NO" << endl;
            continue;
        }
        b=find_num(n/a,a,-1);
        if (b == -1) {
            cout << "NO" << endl;
            continue;
        }
        c = n / (a * b);
        if (c > 1 && c != a && c != b) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

