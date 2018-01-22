#include <iostream>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <unordered_map>


using namespace std;
/*
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
 
 You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 */


struct ListNode {
    int val;
    ListNode *next;
    
    ListNode(int x) : val(x), next(NULL) { }
};
//answer
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//    ListNode *head = NULL, *prev = NULL;
//    int carry = 0;
//    while (l1 || l2) {
//        int v1 = l1? l1->val: 0;
//        int v2 = l2? l2->val: 0;
//        int tmp = v1 + v2 + carry;
//        carry = tmp / 10;
//        int val = tmp % 10;
//        ListNode* cur = new ListNode(val);
//        if (!head) head = cur;
//        if (prev) prev->next = cur;
//        prev = cur;
//        l1 = l1? l1->next: NULL;
//        l2 = l2? l2->next: NULL;
//    }
//    if (carry > 0) {
//        ListNode* l = new ListNode(carry);
//        prev->next = l;
//    }
//    return head;
//}

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *result = NULL;
        ListNode *tmp;
        ListNode *head;
        
        int temp = 0;
        int reminder = 0;
        while (l1 != NULL && l2 != NULL) {
            reminder = (l1->val + l2->val + temp) % 10;
            if ((l1->val + l2->val + temp) >= 10)
                temp = 1;
            else {
                temp = 0;
            }
            if (result == NULL) {
                result = new ListNode(reminder);
                head = result;
            }
            
            else {
                tmp = new ListNode(reminder);
                result->next = tmp;
                result = result->next;
                
            }
            l1 = l1->next;
            l2 = l2->next;
            
        }
        if (l1 == NULL) {
            while (l2 != NULL) {
                reminder = (l2->val + temp) % 10;
                if ((l2->val + temp) >= 10)
                    temp = 1;
                else
                    temp = 0;
                tmp = new ListNode(reminder);
                result->next = tmp;
                result = result->next;
                l2 = l2->next;
            }
        }
        else {
            while (l1 != NULL) {
                reminder = (l1->val + temp) % 10;
                if ((l1->val + temp) >= 10)
                    temp = 1;
                else
                    temp = 0;
                
                tmp = new ListNode(reminder);
                result->next = tmp;
                result = result->next;
                l1 = l1->next;
            }
            
        }
        if (temp == 1) {
            tmp = new ListNode(temp);
            result->next = tmp;
            result = result->next;
        }
        return head;
        
    }
};
