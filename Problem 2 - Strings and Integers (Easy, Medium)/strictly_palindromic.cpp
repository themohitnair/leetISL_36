#include<bits/stdc++.h>
#include<string>
#include<deque>
using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        deque<int> basen;
        for (int base = 2; base <= n -2; base++)  
        {
            int t = n;
            int d;
            while(t>0)            
            {
                d = t%base;
                basen.push_back(d);
                t = t/base;
            }
            deque<int> temp = basen;
            reverse(basen.begin(), basen.end());
            if (temp != basen)
            return false;
        }
        return true;
    }
};
