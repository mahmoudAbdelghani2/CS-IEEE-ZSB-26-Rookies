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
        int n; cin>>n;
        int a[n];
        map <int,int> mp;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i=0;i<n;i++) {
            if(mp[a[i]]==1) {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}

