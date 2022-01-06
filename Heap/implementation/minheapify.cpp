// here in this implementation we have given the index of element of an array and our aim is to check whether this array is folllowing minheap or not 
// if not we have to make it .
// lets, see how we gonna make it 
// firstly we will check whether one of left child and right child are smaller and exist we will update our smallest and will swap with root
// and will call for the recursive minheap for the smallest child among two of them

#include<bits/stdc++.h>
using namespace std;

// in this implementation we have implemented the heap  where we studied about min heap and all the function related  to it
// insert  and extract min


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

// here we gonna implement the extractmin from the array that is we gonna remove the minimum element
// from the minheap that is the root of the tree how we gonna do that is we will swap it with the last element and will call minhepify for the 
// root;

// let's implement it

int extractmin(){
    if(size==0){
        return INT_MAX;
    }
    if(size==1){
        size--;
        a[size];
    }
    swap(a[0],a[size-1]);
    size--;
    minheapify(0);
    return a[size];
}

};



int main(){
    Minheap h(11);
    h.insert(12);
    h.insert(23);
    cout<<"minimum among the heap is = "<<h.extractmin();
}