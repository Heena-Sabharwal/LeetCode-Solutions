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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st;
        for(int val:nums){
            st.insert(val);
        }

        ListNode* curr=head;
        ListNode* prev=NULL;

        while(curr){
            if(!st.count(curr->val)){
                if(prev==NULL)
                    head=curr;
                prev=curr;
                curr=curr->next;
            }
            else{
                if(prev==NULL){
                    curr=curr->next;
                    head=curr;
                }
                else{
                    prev->next=curr->next;
                    curr=curr->next;
                }
                
            }

        }

        return head;
    }
};