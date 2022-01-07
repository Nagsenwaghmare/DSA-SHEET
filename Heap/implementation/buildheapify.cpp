

#include<bits/stdc++.h>
using namespace std;


// in this function we are gonna build the heapify using the function minheapify
// first we have to calculate the righmost leaf parent
// rightmost leaf index = size-1;
// parent of rightmost is (index-1)/2 = (size-2)/2;





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

void buildheapify(){
    for(int i=(size-2)/3;i>=0;i--){
        minheapify(i);
    }
}

};