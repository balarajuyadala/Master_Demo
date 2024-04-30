/* Author   : BALARAJU
Description : Node 
Created     : 25-04-2024
Return      :
*/


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void push(node** head_ref,int val){
    node* new_node = new node();
    new_node->data = val;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void reverse(node** head_ref){
   struct node *temp = NULL;
   struct node *perv = NULL;
  struct  node *current = (*head_ref);
    while(current != NULL){
        temp = current->next;
        current->next = perv;
        perv = current;
        current = temp;
    }
    (*head_ref) = perv;
}

void sortdata(node** head_ref){
    int temp;
    node* current = *head_ref;
    node* index = NULL;
    
    while(current != NULL){
        index = current->next;
        while(index != NULL){
            if(current->data > index->data){
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }index = index->next;
        }current= current->next;
    }
}

void deletion(node** head_ref){
    node* temp = *head_ref;
    *head_ref = temp->next;
    free(temp);
}

void disp(node *head){
    while(head != NULL){
        cout<<head->data<<" ";
		    head=head->next;
		    }
		    }
		    int
		    main(){
		    node*
		    head;
		    push(&head,50);
		    push(&head,120);
		    push(&head,30);
		    push(&head,100);
		    push(&head,10);
		    disp(head);
		    sortdata(&head);
		    cout<<"\nsorted
		    :";
    disp(head);
    
    reverse(&head);
    cout<<"
		    \nreverse
		    :";
    disp(head);
    
    deletion(&head);
    cout<<"
		    \ndelection
		    :";
    disp(head);
}	


//Vector Programe//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v3{11,12,13,14};
    cout<<v3.at(1)<<"\n";//Gives the position of the element
    
    cout<<v3.back()<<"\n";//prints the last element of the vector
    
    cout<<v3.front()<<"\n";//prints the front element of the vector
    
    vector<int>v1{1,2,3,4,5};
    vector<int>v2{9,8,7,6,8};
    v1.swap(v2);//exchanging the elements from two vector's
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];
    }
    cout<<"\n";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i];
    }
    
    cout<<"\n";
    
    vector<string>s;
    s.push_back("b");
    s.push_back("a");
    s.push_back("l");
    s.push_back("u");//add new element at the end of the vector
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    
     cout<<"\n";
    
    vector<string>s1{"b","a","l","u","y"};
    s1.pop_back();//removes last element from a vector
    for(int i=0;i<s1.size();i++)
    {
        int j=s1.size();//determines the number of elements in vector
        cout<<j<<"\n";
        
        cout<<s1[i];
    }
    
    cout<<"\n";
     
     vector<int> v;  
    if(v.empty())//determines vector is empty or not  
    cout<<"Vector v is empty";  
    else  
    cout<<"Vector v is not empty"; 
    
    cout<<"\n";
    
    vector<string>s2{"hi","hey"};
    s2.insert(s2.begin()+2,"hello");//insert new element at specific position
    for(int i=0;i<s2.size();i++)
    {
        cout<<" "<<s2[i];
    }
    cout<<"\n";
    
    vector<char>s3{'$','/','#'};
    s3.erase(s3.begin()+2);//it deletes the specific position of element
    for(int i=0;i<s3.size();i++)
    {
        cout<<s3[i];
    }
    cout<<"\n";
    
    vector<string>s4{"HI","HELLO","HEY"};
    s4.resize(4,"GOOD");//modifies the size of the vector at specific position
    for(int i=0;i<s4.size();i++)
    {
        cout<<" "<<s4[i];
    }
    cout<<"\n";
    
    vector<string>a{"heyyy"};
    for(int i=0;i<a.size();i++)
    {
         cout<<a[i];
    }
    a.clear();//removes the all elements from the vector
    for(int i=0;i<a.size();i++)
    {
         cout<<a[i]<<"\n";
    }
    
    return 0;
}


//deep copy

#include <iostream>
#include <string.h>
using namespace std;

class test
{
    private:
    int i;
    char* name;
    public:
    test(const char* str)
    {
        i = strlen(str);
        name = new char[i+1];
        strcpy(name,str);
    }
   //copy constructor
    test(const test& data)
    {
        //shallow copy
        name = data.name;
        
        /*
        //Deep copy
        i = strlen(data.name);
        name = new char[i+1];
        strcpy(name,data.name);*/
    }
    
    void setVal(const char* strr)
    {
        delete[] name;
        i = strlen(strr);
        name = new char[i+1];
        strcpy(name,strr);
    }
    void display()
    {
        cout<<name<<endl;
    }
    
};

int main()
{
    test t("bitra");
    test t1 = t;
    
    t.display();
    t1.display();
    
    t.setVal("Bala");
    
    t.display();
    t1.display();
    return 0;
}
