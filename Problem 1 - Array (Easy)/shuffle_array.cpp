#include<bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> a;
    vector<int> shuffle(vector<int>& a, int n) {
        vector<int> f(a.begin(), a.begin()+(a.size()/2));
        vector<int> l(a.begin()+(a.size()/2), a.end());
        int j = 1;
        for (int i = 0; i < l.size(); i++)
        {
            f.insert(f.begin()+j, l[i]);
            j = j+2;
        }
        return f;
    }
};
