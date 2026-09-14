/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int size=0;
        ListNode* dummy=head;

        while(dummy){
            dummy=dummy->next;
            size++;
        }
        ListNode* dummy2= head;
        stack<int>st;
        for(int i=0;i<size/2;i++){
            st.push(dummy2->val);
            dummy2=dummy2->next;
        }
        if(size%2!=0)
            dummy2=dummy2->next;

        for(int i=0;i<size/2;i++){
            if(st.top()!=(dummy2->val))
                return false;
            st.pop();
            dummy2=dummy2->next;
        }

        return true;
        
    }
};