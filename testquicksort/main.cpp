#include <iostream>
int _partition( int arr[], int l, int r){
    int v = arr[l];
    int j = l;
    for (int i = l+1; i <= r; ++i) {
        if ( arr[i] <= v ){
            j++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[l],arr[j]);
    return  j;
}

int _quikSort( int arr[], int l, int r ){
    if( l >= r){
        return 0;
    }
    int p = _partition( arr, l, r);
    _quikSort(arr, l, p-1 );
    _quikSort( arr, p+1, r );
}

void quickSort(int arr[], int len){
    _quikSort(arr, 0, len-1);
}
int main() {
    int arr[] = {3,2,4,6,4,8,4,6,7,9,8,3,2};
    int length = sizeof(arr)/sizeof(int);
    std::cout << "length:"<< length << std::endl;
    quickSort(arr,length);
    for (int i = 0; i < length; ++i) {
        std::cout << arr[i] << std::endl;
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
