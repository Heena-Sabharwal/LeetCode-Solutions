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
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head->next == NULL)
        return head;

    // Reverse the list
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;

    // Remove nodes smaller than maximum seen so far
    int maxi = head->val;
    curr = head;

    while(curr && curr->next) {
        if(curr->next->val < maxi) {
            curr->next = curr->next->next;
        }
        else {
            curr = curr->next;
            maxi = max(maxi, curr->val);
        }
    }

    // Reverse again
    prev = NULL;
    curr = head;

    while(curr) {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;

    }
};