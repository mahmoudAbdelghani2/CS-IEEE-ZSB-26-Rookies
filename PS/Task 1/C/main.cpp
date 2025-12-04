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
        ll rating; cin>>rating;
        if (rating <= 1399) cout<<"Division 4"<<endl;
        else if (rating >= 1400 && rating <= 1599) cout<<"Division 3"<<endl;
        else if (rating >= 1600 && rating <= 1899) cout<<"Division 2"<<endl;
        else if (rating >= 1900) cout<<"Division 1"<<endl;
    }
}

