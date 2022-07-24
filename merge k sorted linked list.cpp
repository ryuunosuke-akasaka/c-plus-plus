 ListNode *sortedMerge(ListNode *a, ListNode *b) {
        if (a == nullptr) return b;
        if (b == nullptr) return a;
        ListNode *res = nullptr, *last = nullptr;
        while(a && b) {
            if (a->val > b->val) {
                if (last == nullptr) {
                    last = b;
                    res = b;
                } else {
                    last->next = b;
                    last = last->next;
                }
                b = b->next;
            } else {
                if (last == nullptr) {
                    last = a;
                    res = a;
                } else {
                    last->next = a;
                    last = last->next;
                }
                a = a->next;
            }
        }
        if (a) {
            last->next = a;
        }
        if (b) {
            last->next = b;
        }    
        return res;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int k = 0;
        if (lists.size() == 0) return nullptr;
        k = lists.size() - 1;
        while(k) {
            int i = 0, j = k;
            while(i < j) {
                lists[i] = sortedMerge(lists[i], lists[j]);
                ++i;
                --j;
                if (i >= j) k = j;
            }
        }
        return lists[0];
    }