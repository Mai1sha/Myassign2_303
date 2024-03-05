#include<iostream>
using namespace std;


//structure to creatde node
template<typename M>
struct Node{
    Node<M>* next;
    M data;
    Node(M data);
      
   
};
//a template class for sll
template<typename T>
class Sll{
    public: 
        Node<T>* curr_val;
        Node<T>* head;
        Node<T>* tail;
        int num_item;
        Sll();

        void push_front(Node<T>* curr_val);
        void push_back(Node<T>* curr_val);
        void pop_front();
        void pop_back(Node<T>* tail);
        T front();
        T back();
        bool empty();
        void insert(T index_val, const T& item_val);
        bool remove(int index_val);
        int find_item(const T& item_val);
        void Print();


};
//a template class for vector based stack
template<typename V>
class Stack_vec{
        private:
        vector<V> my_stack;
        public:
        void push_back(V item);
        void pop_back();   
        bool empty();
        V& top_stack();

    };
