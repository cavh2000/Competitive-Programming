//https://leetcode.com/problems/merge-two-sorted-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2)
            return nullptr;
        if(!list1)
            return list2;
        if(!list2)
            return list1;
        
        ListNode* dummy;
        ListNode* head;
        if(list1->val > list2->val){
            swap(list1,list2);
        }
        head=list1;
        
        while(list1 && list2){
            while(list1 && list1->val<=list2->val){
                dummy = list1;
                list1 = list1->next;
            }
            dummy->next=list2;
            swap(list1,list2);
        }
        
        return head;
    }
};
