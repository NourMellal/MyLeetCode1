/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){

    struct ListNode *crr = head;
    struct ListNode *nxt = NULL;
    struct ListNode *prv = NULL;

    while(crr) {
      nxt = crr->next;
      crr->next = prv;
      prv = crr;
      crr = nxt;
    }
    head = prv;
    return (head);
}