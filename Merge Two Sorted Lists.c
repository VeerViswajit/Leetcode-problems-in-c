struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    // create a dummy node to use as the head of the merged list
    struct ListNode *dummy = (struct ListNode*) malloc(sizeof(struct ListNode));
    struct ListNode *tail = dummy;
    
    // while both lists are not empty
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            // add the current node of list1 to the merged list
            tail->next = list1;
            list1 = list1->next;
        } else {
            // add the current node of list2 to the merged list
            tail->next = list2;
            list2 = list2->next;
        }
        // move the tail of the merged list to the current node
        tail = tail->next;
    }
    
    // add any remaining nodes from list1 or list2 to the merged list
    if (list1 != NULL) {
        tail->next = list1;
    } else {
        tail->next = list2;
    }
    
    // return the head of the merged list
    return dummy->next;
}
