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
    int rows=5, cols=5;
    ll arr[rows][cols];
    pair<int, int> one;
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin>>arr[i][j];
            if(arr[i][j]==1) {
                one.first=i+1;
                one.second=j+1;
            }
        }
    }
    int ans=0;
    if(one.first>=3) {
        ans += one.first-3;
    }
    if(one.second>=3) {
        ans += one.second-3;
    }
    if (one.first<3) {
        ans += 3 - one.first;
    }
    if (one.second<3) {
        ans += 3 - one.second;
    }
    cout<<ans;
}

