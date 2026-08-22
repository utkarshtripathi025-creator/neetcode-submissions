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
    void reorderList(ListNode* head) {

        if (head == NULL || head->next == NULL) {
            return;
        }

        // 1. Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = NULL;
        ListNode* curr = slow->next;

        slow->next = NULL;  // first half ko separate karo

        while (curr != NULL) {
            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        // prev = head of reversed second half

        // 3. Merge alternately
        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {

            ListNode* firstNext = first->next;
            ListNode* secondNext = second->next;

            first->next = second;
            second->next = firstNext;

            first = firstNext;
            second = secondNext;
        }
    }
};
