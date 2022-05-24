#ifndef kontener_H
#define kontener_H
#include <stdexcept>
#include <iostream>

using namespace std;

template<typename T>
struct kontener
{

private:

    struct Node
    {
        T value;
        Node* next;
        Node(T v, Node* n = nullptr)
        {
            value = v;
            next = n;
        }
    };

    Node* head = nullptr;
    int counter = 0;


public:



    kontener() = default;

    ~kontener();

    void insert(T);


    T pop();


    void clear();

    int size() const;


    void print() const;




};


template<typename T>
kontener<T>::~kontener()
{
    clear();
}
template<typename T>
void kontener<T>::insert(T value)
{
    Node* pred = nullptr;
    Node* succ = head;
    while(succ != nullptr && succ->value < value)
    {
        pred = succ;
        succ = succ->next;

    }
    Node* creator = new Node(value, succ);
    if(pred != nullptr)
        pred->next = creator;
    else
        head = creator;
    counter++;
}

template<typename T>
T kontener<T>::pop()
{
    if(counter == 0)
        throw logic_error ("Pusta lista");
    Node* killer = head;
    T value = killer->value;
    head = killer->next;
    delete killer;
    counter--;
    return value;
}



template<typename T>
void kontener<T>::clear()
{
    while(head != nullptr)
    {
        Node* killer = head;
        head = killer->next;
        delete killer;
    }
    counter=0;
}


template<typename T>
int kontener<T>::size() const
{
    return counter;
}

template<typename T>
void kontener<T>::print() const
{
    if(counter == 0)
        cout<<"Pusta lista";
    Node* walker = head;
    while(walker != nullptr)
    {
        cout << walker->value;
        walker = walker->next;
    }
    cout<<endl;
}



#endif

