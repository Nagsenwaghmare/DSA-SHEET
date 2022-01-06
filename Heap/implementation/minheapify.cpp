// here in this implementation we have given the index of element of an array and our aim is to check whether this array is folllowing minheap or not 
// if not we have to make it .
// lets, see how we gonna make it 
// firstly we will check whether one of left child and right child are smaller and exist we will update our smallest and will swap with root
// and will call for the recursive minheap for the smallest child among two of them

#include<bits/stdc++.h>
using namespace std;



class Minheap{
    int *a;
    int size;
    int capacity;
    public:

    Minheap(int c){
        size = 0;
        capacity = c;
        a = new int[c];
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    // here we have implemented the minheap class as well as the heapify function

    void minheapify(int i){
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if(i<size && a[i]<a[lt]){
        smallest = lt;
    }if(i<size && a[smallest]>a[rt]){
        smallest = rt;
    }
    if(smallest!=i){
        swap(a[smallest],a[i]);
        minheapify(smallest);
    }
}


// now we will implement the insert fuction   where we gonna insert the key  in the minheap 
// lets do it

void insert(int x){
    if(capacity==size)return;
    size++;
    a[size-1] = x;
    for(int i=size-1;i!=0;a[parent(i)]>a[i]){
        swap(a[parent(i)],a[i]);
        i=parent(i);
    }
}
};



int main(){
    Minheap h(11);

}