#include "StackType.h"
#include<iostream>
using namespace std;
template<class ItemType>
StackType<ItemType>::StackType()
{
    topPtr=NULL;
}
template<class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while(topPtr!=NULL){
        tempPtr=topPtr;
        topPtr=topPtr->next;
        delete tempPtr;
    }
}
template<class ItemType>
void StackType<ItemType>::push(ItemType newItem){
    if(isFull())
        throw FullStack();
    else{
        NodeType* location=new NodeType;
        location->info=newItem;
        location->next=topPtr;
        topPtr=location;
    }
}
template<class ItemType>
void StackType<ItemType>::pop(){
    if(isEmpty()){
        throw EmptyStack();
    }
    else{
        NodeType* tempPtr;
        tempPtr=topPtr;
        topPtr=topPtr->next;
        delete tempPtr;
    }

}
template<class ItemType>
bool StackType<ItemType>::isFull(){
    NodeType* location;
    try{
        location=new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}
template<class ItemType>
bool StackType<ItemType>::isEmpty(){
    return (topPtr==NULL);
}
template<class ItemType>
ItemType StackType<ItemType>::top(){

    if(isEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}
