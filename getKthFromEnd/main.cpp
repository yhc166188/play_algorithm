/*
题目

输入一个链表，输出该链表中倒数第k个节点。为了符合大多数人的习惯，本题从1开始计数，即链表的尾节点是倒数第1个节点。例如，一个链表有6个节点，从头节点开始，它们的值依次是1、2、3、4、5、6。这个链表的倒数第3个节点是值为4的节点。

示例：

给定一个链表: 1->2->3->4->5, 和 k = 2.

返回链表 4->5.

来源：力扣（LeetCode） 链接：https://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

解析

这里采用双指针的方式，首先让快指针走k步，然后两个指针一起走，当快指针走到尾部时，就是倒数第K个点了
 *
 * */

#include <iostream>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        if(head == NULL)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(--k)
        {
            fast = fast->next;
            //--k;
        }
        while(fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
