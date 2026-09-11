/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        unordered_set<ListNode*>s;
        while(slow){
            s.insert(slow);
            if(s.count(slow->next))
                return slow->next;
            slow=slow->next;
        }
        return NULL;
    }
};