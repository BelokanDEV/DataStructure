#include <cstdio>

#define MAX_ELEMENT 200
class HeapNode{
    int key;
public :
    HeapNode(int k = 0)
    : key(k){}
    void setKey(int k){key = k;}
    int getKey(){ return key; }
    void display(){ printf("%4d", key); }
}

class MaxHeap{
    HeapNode node[MAX_ELEMENT];
}