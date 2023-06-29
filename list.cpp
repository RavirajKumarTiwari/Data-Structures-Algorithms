#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr;
    for(itr = lst.begin(); itr != lst.end(); itr++)
        cout<<*itr<<" ";

    cout<<endl;
}

int main()
{
    list<int> list1;
    int elements,size;

    cout<<"Enter the size of list : ";
    cin>>size;

    cout<<"Enter the elements of list :\n";

    for (int i = 0; i < size; i++){
        cin>>elements;
        list1.push_back(elements);
    }
    // list1.remove(10);// remove the element 10
    list1.sort(); //for sorting the list
    display(list1);
}