#include<bits/stdc++.h>
#include<deque>
using namespace std;

class FrontMiddleBackQueue {
public:
    deque<int> q;
    

    FrontMiddleBackQueue() {}

    void pushFront(int val) {
        q.push_front(val);
    }
    
    void pushMiddle(int val) {
        int mid = q.size()/2;
        auto middle = q.begin() + mid;
        q.insert(middle, val);
    }
    
    void pushBack(int val) {
        q.push_back(val);
    }
    
    int popFront() {
        if(q.empty())
            return -1;
        int popped = q.front();
        q.pop_front();
        return popped;
    }
    
    int popMiddle() {
        if(q.empty())
            return -1;
        int mid = (q.size()-1)/2;
        auto middle = q.begin() + mid;
        int popped = *middle;
        q.erase(middle);
        return popped;
    }

    int popBack() {
        if(q.empty())
            return -1;
        int popped = q.back();
        q.pop_back();
        return popped;
    }
};