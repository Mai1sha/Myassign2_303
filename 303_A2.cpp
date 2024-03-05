#include<iostream>
#include<vector>
using namespace std;
#include"303_2.h"



template<typename M>

Node<M>::Node(M data):next(nullptr),data(data){}//constructor for node 
      
template<typename T>
Sll<T>::Sll():head(nullptr),tail(nullptr),num_item(0){}//constructor for class
    
template<typename T>
void Sll<T>::push_front(Node<T>* curr_val){//to push at the front
        if(head==nullptr){
           head=curr_val;
           tail=curr_val;
           num_item++;
           return;
        }
        curr_val->next=head;
        head=curr_val;
        num_item++;
    }
    template<typename T>
    void Sll<T>::push_back(Node<T>* curr_val){//to push at the back
      
        if(tail==nullptr){
           tail=curr_val;
           head=curr_val;
           num_item++;
           return;
        }
        tail->next=curr_val;
        tail=curr_val;
        num_item++;
    }
    template<typename T>
    void Sll<T>::pop_front(){//to remove from front
        if(head==nullptr){  
           cout<<"Nothing to pop\n";
           return;
        }
        Node<T>*temp_val=head;
        head=head->next;
        delete temp_val;

    }
    template<typename T>
    void Sll<T>::pop_back(Node<T>* tail){//to remove from the back
        if(tail==nullptr){
            cout<<"Nothing to pop\n";
            return;
        }
        Node<T>* prev_val;
        Node<T>* curr_val;
        while(curr_val->next!=nullptr){
            Node<T>* prev_val=curr_val;
            Node<T>* curr_val=curr_val->next;
        }
        prev_val->next=nullptr;
        tail=prev_val;
        delete curr_val;  
        num_item--;

    }
    template<typename T>
    T Sll<T>::front(){//return the front element
        if(head==nullptr){
            return 0;
        }
        return head->data; 
    }
    template<typename T>
    T Sll<T>::back(){//return the last element
        if(tail==nullptr){
            return 0;
        }
        return tail->data;
    }

    template<typename T>
    bool Sll<T>:: empty(){
        return head==nullptr;   
  
    }

    template<typename T>
    void Sll<T>:: insert(T index_val, const T& item_val){//add new element at specific index
        if(num_item==0){
            Node<T> *temp_val = new Node<T>(item_val);
            head=temp_val;
            tail=temp_val;
            num_item++;
        }
        else if(index_val>=num_item){
            Node<T> *temp_val = new Node<T>(item_val);
            tail->next = temp_val;
            tail = temp_val;
            num_item++;

        }
        else{
            Node<T> *curr_val = head;
            int count = 1;
            Node<T> *temp_val = new Node<T>(item_val);
            if(index_val==0){
                push_front(temp_val);
                return;
            }
            while(curr_val!=nullptr){
                if(index_val == count){
                    temp_val->next = curr_val->next;
                    curr_val->next = temp_val;
                    num_item++;
                    return;
                }
                curr_val = curr_val->next;
                count++;
            }
        }
    }

    template<typename T>
    bool Sll<T>::remove(int index_val){//remove element at given index
        if(index_val>=num_item){
            return 0;
        }
        else if(index_val==0){
            Node<T>*temp_val=head;
            head=head->next;
            delete temp_val;
            num_item--;
            return 1;
        }
        else {
            int count=1;
            Node<T>* curr_val=head;
            while(curr_val!=nullptr){
               
                if(index_val==count){
                    Node<T>*temp_val=curr_val->next;
                    if(temp_val==tail){
                        tail=curr_val;
                    }
                    curr_val->next=temp_val->next;
                    delete temp_val;
                    num_item--;
                    return 1;                  
                }
                curr_val=curr_val->next;
                count++;
            }
        }
        return 1;
    }

    template<typename T>
    int Sll<T>::find_item(const T& item_val ){//find the index for the given item
        Node<T>* curr_val=head;
        int count=0;
        while(curr_val!=nullptr){
            if(curr_val->data==item_val){
                return count;
            }
            curr_val=curr_val->next;
            count++;
        }
        return num_item;
    }
    template<typename T>
    void Sll<T>::Print(){
       cout<<"My sll is ";
       Node<T> *curr_val= head;
        while(curr_val!=nullptr){
            cout<<curr_val->data<<" ";
            curr_val = curr_val->next;
        }
        cout<<endl;
    }


    template<typename V>
    bool Stack_vec<V>::empty(){//check if my stack is empty or not
           return my_stack.empty();
          
        }
    template<typename V>
    void Stack_vec<V>::push_back(V item_val){//add item at the end
            my_stack.push_back(item_val);
        }
    template<typename V>
    void Stack_vec<V>::pop_back(){//remove item from the back
            if(!my_stack.empty())
                my_stack.pop_back();

        }
    template<typename V>
    V& Stack_vec<V>::top_stack(){//return the top of the stack
            return my_stack.back();

        }
    
    






