#include<iostream>
using namespace std;
#include"303_A2.cpp"



int main(){
    //main for my sll
    Sll<int> *my_sll = new Sll<int>();//created an object for sll class
    Node<int> *val1 = new Node<int>(15);
    Node<int> *val2 = new Node<int>(25);
    Node<int> *val3 = new Node<int>(35);
    Node<int> *val4 = new Node<int>(45);
    my_sll->push_front(val1);
    my_sll->push_front(val2);
    my_sll->push_front(val3);
    my_sll->pop_front();
    my_sll->push_back(val4);
   
    cout<<"Front: "<<my_sll->front()<<endl;//to print front value
    cout<<"Back: "<<my_sll->back()<<endl;//to print back value

    my_sll->insert(1,55);
    my_sll->Print();
    my_sll->insert(0,85);
    my_sll->Print();
    cout<<"Front: "<<my_sll->front()<<endl;
    my_sll->remove(2);
    cout<<my_sll->empty()<<endl;
    cout<<my_sll->find_item(25)<<endl;
    my_sll->Print();
    cout<<endl;


    //main for my stack
    Stack_vec<int>stack;//created an object for stack class
    stack.push_back(5);
    stack.push_back(15);
    stack.push_back(4);
    stack.push_back(12);
    double total=0;
    int count=0;
    while(!stack.empty())//to calculate my count,total and get my average for stack elements
    {
        total+= stack.top_stack();
        stack.pop_back();
        count++;
    }
    cout<<"Total:"<<total<<" "<<"Count:"<<count<<endl;
    cout<<"Average is "<<total/count<<endl;

   return 0;

};