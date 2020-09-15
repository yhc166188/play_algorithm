/*
题目

给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。

请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。

示例 1:

输入: 1->2->3->4->5->NULL 输出: 1->3->5->2->4->NULL 示例 2:

输入: 2->1->3->5->6->4->7->NULL 输出: 2->3->6->7->1->5->4->NULL 说明:

应当保持奇数节点和偶数节点的相对顺序。链表的第一个节点视为奇数节点，第二个节点视为偶数节点，以此类推。

来源：力扣（LeetCode） 链接：https://leetcode-cn.com/problems/odd-even-linked-list 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

分析
想法

将奇节点放在一个链表里，偶链表放在另一个链表里。然后把偶链表接在奇链表的尾部。

算法

这个解法非常符合直觉思路也很简单。但是要写一个精确且没有 bug 的代码还是需要进行一番思索的。

一个 LinkedList 需要一个头指针和一个尾指针来支持双端操作。我们用变量 head 和 odd 保存奇链表的头和尾指针。 evenHead 和 even 保存偶链表的头和尾指针。算法会遍历原链表一次并把奇节点放到奇链表里去、偶节点放到偶链表里去。遍历整个链表我们至少需要一个指针作为迭代器。这里 odd 指针和 even 指针不仅仅是尾指针，也可以扮演原链表迭代器的角色。

解决链表问题最好的办法是在脑中或者纸上把链表画出来。比方说：

作者：LeetCode
链接：https://leetcode-cn.com/problems/odd-even-linked-list/solution/qi-ou-lian-biao-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

 时间复杂度： O(n)O(n) 。总共有 nn 个节点，我们每个遍历一次。

空间复杂度： O(1)O(1) 。我们只需要 4 个指针。
 */
#include <iostream>
//Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
class Solution{
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;
        while(even != NULL && even->next != NULL)
        {
            odd->next = even->next;//奇数节点列表
            odd = odd->next; //odd的next在赋值给odd，往下走一步
            even->next = odd->next; //此时odd->next是偶数节点，偶数节点列表
            even = even->next;//even的next在赋值给even，往下走一步

        }
        odd->next = evenHead;
        return head;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
