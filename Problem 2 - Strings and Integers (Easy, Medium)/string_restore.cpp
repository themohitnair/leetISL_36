#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res;
        for(int i = 0; i < s.length(); i++)                  
        {
            auto it = find(indices.begin(), indices.end(), i);
            int ind = distance(indices.begin(),it);
            res.push_back(s[ind]);        
        }
        return res;
    }
};