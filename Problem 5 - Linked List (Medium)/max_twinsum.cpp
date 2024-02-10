#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int length(ListNode* head)
    {
        ListNode* ptr = head;
        int len = 0;
        while(ptr)
        {
            len++;
            ptr = ptr->next;            
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {   
        if (head == nullptr)
            return nullptr;
        k = k%length(head);
        for(int i = 0; i < k; i++)
        {
            ListNode* ptr = head;
            while(ptr->next->next) 
            {
                ptr = ptr->next;
            }       
            ListNode* last = ptr->next;
            ptr->next = NULL;
            last->next = head;  
            head = last;     
        }
        return head;
    }
};