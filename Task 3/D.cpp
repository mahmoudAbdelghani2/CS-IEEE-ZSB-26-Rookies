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
int find_digits(ll n,int k) {
    int count = 0;
    while(n!=0) {
        count++;
        n/=k;
    }
    return count;
}
int main() {
    fastIO();
    ll n; cin>>n;
    int k; cin>>k;
    int digits = find_digits(n,k);
    cout<<digits;
}

