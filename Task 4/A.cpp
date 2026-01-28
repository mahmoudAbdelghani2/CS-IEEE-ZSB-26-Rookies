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
int funRes(int n){
    if(n==0){
        return 1;
    }
    return n*funRes(n-1);

}
int main() {
    fastIO();
    int n; cin>>n;
    cout<<funRes(n)<<endl;
}

