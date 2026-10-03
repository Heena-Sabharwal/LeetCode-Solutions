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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }

        if(n==2){
            return head->val+head->next->val;
        }

        int half=n/2;
        ListNode* middle=head;
        while(half-1){
            middle=middle->next;
            half--;
        }
        ListNode* end=middle;
        middle=middle->next;

        ListNode* prev=NULL;
        ListNode* next=middle->next;

        while(next!=NULL){
            middle->next=prev;
            prev=middle;
            middle=next;
            next=next->next;
        }
        middle->next=prev;
        end->next=middle;

        int h=n/2;
        middle=head;
        while(h){
            middle=middle->next;
            h--;
        }

        int max_sum=INT_MIN;

        while(middle){
            max_sum=max(max_sum,head->val+middle->val);
            middle=middle->next;
            head=head->next;
        }
        return max_sum;

    }
};