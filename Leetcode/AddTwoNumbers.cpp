/*
https://leetcode.com/problems/add-two-numbers/
*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode first;//First list node
        ListNode* ans=&first;//The complete answer list
        int carry = 0;//Variable for the sum carry
        int value, digit1, digit2;
        while(l1 || l2 || carry){//While there's something to sum (element on the lists or carry)
            digit1=(l1 ? l1->val : 0);
            digit2=(l2 ? l2->val : 0);
            
            value = digit1+digit2+carry;
            carry = value/10;
            value=value%10;
            ans->next=new ListNode(value);
            
            ans=ans->next;
            l1=(l1 ? l1->next : 0);//If still exists an element on the list use it, else use 0
            l2=(l2 ? l2->next : 0);
        }
        
  
        return first.next;
    }
};
