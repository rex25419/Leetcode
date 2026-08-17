class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::unordered_set<ListNode*> vis;
        ListNode *curr = head;

        while (curr != nullptr) {
            if (vis.count(curr)) {
                return true; 
            }
            vis.insert(curr);
            curr = curr->next;
        }

        return false;
    }
};