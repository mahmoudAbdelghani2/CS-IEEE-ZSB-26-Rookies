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
void funOutput(ll n) {
    if (n==1) {
        //do nothing
    }
    else if(n%2==0) {
        n/=2;
        cout<<n<<" ";
        funOutput(n);
    }
    else {
        n= (n*3)+1;
        cout<<n<<" ";
        funOutput(n);
    }
}
int main() {
    fastIO();
    ll n; cin>>n;
    cout<<n<<" ";
    funOutput(n);
}