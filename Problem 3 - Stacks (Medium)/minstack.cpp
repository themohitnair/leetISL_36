#include<bits/stdc++.h>
#include<vector>
using namespace std;

class MinStack {
    public:
        vector<int> s;
        int min;

    MinStack() {
        min = 0;       
    }

    void push (int val) {
        s.push_back(val);
    }

    void pop () {
        s.pop_back();
    }

    int top () {
        return s[s.size()-1];
    }

    int getMin() {
        min = s[0];
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] < min)
                min = s[i];
        }
        return min;
    }
};