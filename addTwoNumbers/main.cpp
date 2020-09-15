/*
 * 链表求和
题目

给定两个用链表表示的整数，每个节点包含一个数位。

这些数位是反向存放的，也就是个位排在链表首部。

编写函数对这两个整数求和，并用链表形式返回结果。

示例：

输入：(7 -> 1 -> 6) + (5 -> 9 -> 2)，即617 + 295 输出：2 -> 1 -> 9，即912

作者：drzoomboss
        链接：https://leetcode-cn.com/problems/sum-lists-lcci/solution/mian-shi-ti-0202-lian-biao-qiu-he-ding-yi-xu-ni-li/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

可以把链表的数据看做数据的倒写，相当于是个位数开始加，个位数即就是第一个节点，把商加在下一次计算和中；这样每次循环去获取，申请节点；

注意：最后的商如果不为0的话，要多加一个节点；比如：9+1 = 10
 * */
#include <iostream>
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* res = head;
        int sum = 0, add = 0;
        while(!(l1 == nullptr && l2 == nullptr)) {
            if(l1 != nullptr && l2 != nullptr) {
                sum = l1->val + l2->val + add;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 == nullptr && l2 != nullptr) {
                sum = l2->val + add;
                l2 = l2->next;
            }
            else {
                sum = l1->val + add;
                l1 = l1->next;
            }
            if(sum > 9) {
                sum -= 10;
                add = 1;
            }
            else {
                add = 0;
            }
            ListNode* tmp = new ListNode(sum);
            res->next = tmp;
            res = tmp;
        }
        if(add == 1) {
            ListNode* tmp = new ListNode(1);
            res->next = tmp;
            res = tmp;
            res->next = nullptr;
        }
        else {
            res->next = nullptr;
        }
        return head->next;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
