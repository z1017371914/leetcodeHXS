class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* phead1 = head;
        ListNode* phead2 = head;
        ListNode* pPre = NULL;
        if (head->next==NULL&&n==1) {
            return NULL;
        }
        for (int i=0; i<n-1; i++) {
            phead1=phead1->next;
        }
        while (phead1->next) {
            pPre = phead2;
            phead1=phead1->next;
            phead2=phead2->next;
        }
        if (pPre ==NULL) {
            head= phead2->next;
            delete phead2;
        }else{
            pPre->next = phead2->next;
            delete phead2;
        }
        
        
        return head;
    }
    
};
