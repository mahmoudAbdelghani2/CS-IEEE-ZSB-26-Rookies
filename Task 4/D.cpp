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
vector<int> arr;
void find_possibilites(int pos, int sum, string& s) {
    if (pos == s.length()) {
        arr.push_back(sum);
        return;
    }
    if (s[pos] == '+')find_possibilites(pos + 1, sum + 1, s);
    else if (s[pos] == '-') find_possibilites(pos + 1, sum - 1, s);
    else if (s[pos] == '?') {
        find_possibilites(pos + 1, sum + 1, s);
        find_possibilites(pos + 1, sum - 1, s);
    }
}
int main() {
    fastIO();
    string s1,s2; cin>>s1>>s2;
    find_possibilites(0,0,s2);
    int sum=0;
    for(int i=0;i<s1.size();i++) {
        if(s1[i]=='+') sum+=1;
        else sum-=1;
    }
    double count=0;
    for(int i=0;i<arr.size();i++) {
        if(arr[i]==sum) count++;
    }
    cout<< fixed << setprecision(12)<<count/arr.size()<<endl;
}

