#include <iostream>
#include <algorithm>
using namespace std;
//对arr数组操作，使得arr[l-p] < arr[p], arr[p-r] >arr[p] 并返回p
int _partition(int arr[], int l, int r ){
    int v = arr[l];
    int j = l;
    for (int i = l+1; i <= r; ++i) {
        if( arr[i] < v ){
            j++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[l],arr[j]);
    return j;

}
int _quickSort(int arr[], int l, int r ){
    if( l >= r )
        return 0;
    int p = _partition(arr,l,r);
    _quickSort(arr,l,p-1);
    _quickSort(arr,p+1,r);
}

void  quickSort(int arr[], int n){
    _quickSort(arr,0, n-1);

}

int main() {
    int arr[] = {3,5,1,8,7,6,9,2};
    quickSort(arr,8);
    for (auto a: arr) {
        std::cout << a << std::endl;
    }

    return 0;
}
