class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* prev = NULL, *slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        
        ListNode* l1 = sortList(head);
        ListNode* l2 = sortList(slow);
        return merge(l1, l2);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* l = new ListNode(0);
        ListNode* p = l;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                p->next = l1;
                l1 = l1->next;
            }
            else{
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
        }
        if(l2 == NULL)
            p->next = l1;
        if(l1 == NULL)
            p->next = l2;
        return l->next;
    }
};
