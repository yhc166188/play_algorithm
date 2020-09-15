/*最大堆的特征：
 * 在二叉树上任何一个子节点都不大于其父节点。
  必须是一棵完全的二叉树，即除了最后一层外，以上层数的节点都必须存在并且狐妖集中在左侧
 *对于每一个父节点而言：
它的左孩子序列号都是本身序列号的 2倍
它的右孩子序列号都是本身序列号的 2倍+1
 *从堆顶依次取出元素，即是从大到小的顺序取出来的。
 */

#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cmath>
#include <cassert>

using namespace std;

template<typename Item>
class MaxHeap {
private:
    Item *data;
    int count;
public:
    MaxHeap(int capacity){
        data = new Item[capacity+1];
        count = 0;
    }
    ~MaxHeap(){
        delete [] data;
    }
    //返回堆中的个数
    int size(){
        return count;
    }
    bool isEmpty(){
        return size() == 0;
    }
    //将下标k的新增元素放入到二叉堆中合适位置
    void shiftUp(int k){
        while( k > 1 && data[k>>1] < data[k] ){
            swap( data[k>>1],data[k]);
            k = k>>1;
        }
    }
    //向最大堆中插入一个新的元素
    void insert(Item item) {
        assert( count + 1 <= count );

    }

};
int main() {
    MaxHeap<int> maxheap = MaxHeap<int>(100);
    cout<< maxheap.size() << endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
