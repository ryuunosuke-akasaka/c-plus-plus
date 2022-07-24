 int r,carry = 0, sum, num1, num2;
        ListNode *head,*newptr;
        ListNode *s = new ListNode();
        
        head = s;
            
        while(l1 || l2 || carry){
            if(l1){
                num1 = l1->val;
                l1 = l1->next;
            }
            else{num1 = 0;}
            
            if(l2){
                num2 = l2->val;
                l2 = l2->next;
            }
            else{num2 = 0;}
            
            sum = num1 + num2 + carry;
            r = sum % 10;
            newptr = new ListNode(r);
            s->next = newptr;
            s = newptr;
            carry = sum/10;
            
        }
        return head->next;