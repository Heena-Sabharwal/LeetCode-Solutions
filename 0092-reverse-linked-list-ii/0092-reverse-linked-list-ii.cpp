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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right)
        return head;

    ListNode* before = NULL;
    ListNode* curr = head;

    int i = 1;

    while(i < left){
        before = curr;
        curr = curr->next;
        i++;
    }

    ListNode* start = curr;

    ListNode* prev = NULL;

    while(i <= right){
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        i++;
    }

    if(before != NULL)
        before->next = prev;
    else
        head = prev;

    start->next = curr;

    return head;

       

        

    }
};