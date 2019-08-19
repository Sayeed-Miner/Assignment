#ifndef STACKTYPE_H
#define STACKTYPE_H

class FullStack{};
class EmptyStack{};
template<class ItemType>
class StackType
{
    struct NodeType{
    ItemType info;
    NodeType* next;
    };
    public:
        StackType();
        ~StackType();
        void push(ItemType);
        void pop();
        bool isEmpty();
        bool isFull();
        ItemType top();
    private:
        NodeType* topPtr;
};

#endif // STACKTYPE_H

