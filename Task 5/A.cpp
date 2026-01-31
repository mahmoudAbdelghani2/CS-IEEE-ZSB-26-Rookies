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
const int MAX_VAL = 1000005;
int divisors_count[MAX_VAL];
void prepare_divisors() {
    for (int i = 1; i < MAX_VAL; i++) {
        for (int j = i; j < MAX_VAL; j += i) {
            divisors_count[j]++;
        }
    }
}
int main() {
    fastIO();
    ll t; cin>>t;
    prepare_divisors();
    while(t--) {
        ll n; cin>>n;
        cout<<divisors_count[n]<<endl;
    }
}

