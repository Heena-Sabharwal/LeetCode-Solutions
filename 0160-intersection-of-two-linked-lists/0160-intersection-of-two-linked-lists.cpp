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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* dummy1=headA;
        ListNode* dummy2=headB;

        int l1=0,l2=0;

        while(dummy1){
            l1++;
            dummy1=dummy1->next;
        }
        while(dummy2){
            l2++;
            dummy2=dummy2->next;
        }
        ListNode* dum1=headA;
        ListNode* dum2=headB;

        if(l1<=l2){
            int n=l2-l1;
            while(n){
                dum2=dum2->next;
                n--;
            }
        }
        else{
            int n=l1-l2;
            while(n){
                dum1=dum1->next;
                n--;
            }
        }

        while(dum1){
            if(dum1==dum2)
                return dum1;
            dum1=dum1->next;
            dum2=dum2->next;
        }
        return NULL;
    }
};