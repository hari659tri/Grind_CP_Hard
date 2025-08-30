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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Edge case: if list is empty or k == 1 → no change
        if (!head || k == 1) return head;

        // Dummy node → helps in handling head reversals cleanly
        ListNode* dummy = new ListNode(0, head);

        // Pointers for traversal
        ListNode* leftpre = dummy;   // Node before the current group
        ListNode* temp = head;       // Current node iterator

        while (true) {
            // Step 1: Check if k nodes exist from 'temp'
            ListNode* check = temp;
            for (int i = 0; i < k; i++) {
                if (!check) return dummy->next;  // Less than k nodes left → done
                check = check->next;
            }

            // Step 2: Reverse k nodes
            ListNode* subhead = temp; // Start node of the group (will become tail after reversal)
            ListNode* prev = NULL;
            ListNode* curr = temp;
            ListNode* Next = NULL;

            for (int i = 0; i < k; i++) {
                Next = curr->next;   // Save next node
                curr->next = prev;   // Reverse link
                prev = curr;         // Move prev forward
                curr = Next;         // Move curr forward
            }

            // Step 3: Reconnect reversed part with previous and next groups
            leftpre->next = prev;    // Connect previous part to new head of this group
            subhead->next = curr;    // Connect tail of reversed group to remaining list

            // Step 4: Move pointers for next iteration
            leftpre = subhead;       // New "previous" becomes the old head
            temp = curr;             // Continue from next group
        }

    }
};