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
        bool flag=true;
        int n; cin>>n;
        string one,two; cin>>one>>two;
        map<char,int> mp1,mp2;
        for(int i=0;i<n;i++) {
            mp1[one[i]]++; mp2[two[i]]++;
        }
        for(int i=0;i<n;i++) {
            if(mp1[one[i]] != mp2[one[i]]) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

