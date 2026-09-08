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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        struct Compare {
            bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; // min heap
        }
        };

        priority_queue<ListNode*,vector<ListNode*>,Compare>pq;

        int k=lists.size();
        for(int i=0;i<k;i++){
            ListNode* head=lists[i];
            if(head){
            pq.push(lists[i]);
            lists[i]=lists[i]->next;
            }
        }
        ListNode* merged=new ListNode(-1);
        ListNode* head=merged;
        while(pq.size()){
        ListNode* node = pq.top();
        pq.pop();

        head->next = node;
        head = head->next;

        if(node->next){
            pq.push(node->next);
        }
        }
        return merged->next;
    }
};