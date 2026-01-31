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
        if(n%2!=0) cout<<"0"<<endl;
        else {
            int count=0;
            for(int i = 0; i * 4 <= n; i++) {
                int remaining_legs = n - (i * 4);
                if(remaining_legs % 2 == 0) {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}

