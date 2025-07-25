#include<iostream>
using  namespace std;
int size=5;
int stack[5];
int top=-1;
int isfull()
{
    return(top==size-1);

}
int isempty()
{
    return(top==-1);      
}
void push(int val)
{
    if(isfull())
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        stack[++top]=val;
        cout<<val<<" is added to the satck"<<endl;
    }
}
void pop()
{
    if(isempty())
    {
        cout<<"satck is empty"<<endl;
    }
    else{
        int v=stack[top--];
        cout<<v<<" is remove from stack"<<endl;
    }
}
void peek()
{
    if(isempty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"the top value of stack is :"<<stack[top]<<endl;
    }
}
void display()
{
    cout<<"stack = ";
    for(int i=0;i<=top;i++)
    {
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    for(int i=0;i<5;i++)
    {
      push(i);
    }
    for(int i=0;i<2;i++)
    {
        pop();
    }
    peek();
    display();
    return 0;
}
