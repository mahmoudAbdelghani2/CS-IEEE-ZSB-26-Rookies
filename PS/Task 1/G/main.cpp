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
    ll k,r; cin>>k>>r;
    ll i=1;
    while (1) {
        if ((k*i)%10 ==0) {
            cout<<i;
            return 0;
        }
        if (((k * i)-r)% 10 == 0) {
            cout<<i;
            return 0;
        }
        i++;
    }
}

