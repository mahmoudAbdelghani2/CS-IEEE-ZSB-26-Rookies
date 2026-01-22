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
    int x; cin>>x;
    double y; cin>>y;
    cout << fixed << setprecision(2);
    if (x % 5 == 0 && y >= (x + 0.50)) {
        cout <<y-x- 0.50 << endl;
    } else {
        cout << y << endl;
    }
}

