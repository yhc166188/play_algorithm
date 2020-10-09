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
    int capacity;
public:
    MaxHeap(int capacity){
        data = new Item[capacity+1];
        capacity = capacity;
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
        while( k > 1 && data[k/2] < data[k] ){//边界&&循环与父节点比较
            swap( data[k/2], data[k] );
            k /= 2;
        }
    }

    // 像最大堆中插入一个新的元素 item
    void insert(Item item){
        assert( count + 1 <= capacity );
        data[count+1] = item;//注意下标是从1开始，所以新增元素插入位置为count+1，并非count
        count ++;//数量增加1
        shiftUp(count);
    }


    void shiftDown(int k){
        while( 2*k <= count ){
            int j = 2*k; // 在此轮循环中,data[k]和data[j]交换位置
            if( j+1 <= count && data[j+1] > data[j] )
                j ++;
            // data[j] 是 data[2*k]和data[2*k+1]中的最大值

            if( data[k] >= data[j] ) break;
            swap( data[k] , data[j] );
            k = j;
        }
    }

    // 从最大堆中取出堆顶元素, 即堆中所存储的最大数据
    Item extractMax(){
        assert( count > 0 );
        Item ret = data[1];

        swap( data[1] , data[count] );
        count --;
        shiftDown(1);

        return ret;
    }

};
// 测试最大堆
int main() {

    MaxHeap<int> maxheap = MaxHeap<int>(100);

    srand(time(NULL));
    int n = 20;    // 随机生成n个元素放入最大堆中
    for( int i = 0 ; i < n ; i ++ ){
        maxheap.insert( rand()%100 );
    }

    int* arr = new int[n];
    // 将maxheap中的数据逐渐使用extractMax取出来
    // 取出来的顺序应该是按照从大到小的顺序取出来的
    for( int i = 0 ; i < n ; i ++ ){
        arr[i] = maxheap.extractMax();
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // 确保arr数组是从大到小排列的
    for( int i = 1 ; i < n ; i ++ )
        assert( arr[i-1] >= arr[i] );

    delete[] arr;
    return 0;
}
