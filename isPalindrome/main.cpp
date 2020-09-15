/*
回文链表
题目

请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false
示例 2:

输入: 1->2->2->1
输出: true
解析

方式一：采用中间链表翻转的方式，进行比较
*/
#include <iostream>
//翻转链表方式
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* pre  = NULL;

        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            ListNode* next = slow->next;
            slow->next = pre;
            pre = slow;
            slow = next;
        }
        //判断奇数
        if(fast)
        {
            slow = slow->next;
        }
        while(slow && pre)
        {
            if(slow->val != pre->val)
            {
                return false;
            }
            slow = slow->next;
            pre = pre->next;
        }
        return true;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
