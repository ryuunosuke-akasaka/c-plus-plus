 if(!head || !head->next){return head;}
        else{
            ListNode* curr = head;
            ListNode* prev = nullptr;
            while(curr && curr->next){
                if(curr->val == curr->next->val){
                    while(curr->next && curr->val == curr->next->val){
                        curr = curr->next;
                    }
                    if(prev != NULL){
                        prev->next = curr->next;
                        curr = curr->next;
                    }
                    else{
                        head = curr->next;
                        curr = curr->next;
                    }
                }
                else{
                    prev = curr;
                    curr = curr->next;
                }
            }
            return head;
        }