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
    ListNode* sortList(ListNode* head) {
        if (head==NULL || head->next==NULL)
            return head;

        ListNode* mid=middle(head);
        ListNode* righthead=mid->next;
        mid->next=NULL;

        ListNode* left=sortList(head);
        ListNode* right=sortList(righthead);

        return merge(left,right);

        
    }
    ListNode* middle(ListNode* head){
        if( head==NULL || head->next==NULL )
            return head;
        ListNode* slow=head;
        ListNode* fast=head;


        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }

    ListNode* merge(ListNode* left, ListNode* right){
        if(left==NULL)
            return right;
        else if(right==NULL)
            return left;
        
        ListNode* head_merge=new ListNode(0);
        ListNode* temph=head_merge;
        while(left && right){
            if(left->val<right->val){
                temph->next=left;
                left=left->next;
            }
            else{
                temph->next=right;
                right=right->next;
            }
            temph=temph->next;
        }
        if(left)
            temph->next=left;
        else
            temph->next=right;
        
        head_merge=head_merge->next;

        return head_merge;
    }

};