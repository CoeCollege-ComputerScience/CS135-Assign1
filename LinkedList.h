#ifndef _LinkedList_h
#define _LinkedList_h

template <typename T>
struct node {
    T value;
    node *next;
};

template <typename T>
class LinkedList{
    public:
        LinkedList();
        void addItem(T item);
        int insert(T item, int index);
        T getItem(int index);
        T pop();
        T pop(int index);
        void remove(T item);
        bool contains(T item);
        int getCount();
        void printList();
        
    private:
        int count;
        node<T> *start;
        node<T> *end;
};


#include "LinkedList.cpp"
#endif