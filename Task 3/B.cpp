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
    int n,k; cin>>n>>k;
    int m=(2*n)+1;
    int arr[m];
    for(int i=0;i<m;i++) {
        cin>>arr[i];
    }
    for(int i = 1; i < m - 1 && k > 0; i += 2) {
        if(arr[i] - 1 > arr[i-1] && arr[i] - 1 > arr[i+1]) {
            arr[i]--;
            k--;
        }
    }
    for(int i=0;i<m-1;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<arr[m-1];
    return 0;
}

