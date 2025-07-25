#include<iostream>
#include<stack>
using namespace std;
int s1[10];
int s2[10];
int top1=-1;
int top2=-1;
int size1=10;
int  size2=10;
void push1(int  val){
    if(top1==size1-1){
        cout<<"Underflow"<<endl;
        return;
    }
    else{
        s1[++top1]=val;
    }
}

void push2(int val){
    if(top2==size2-1){
        cout<<"Overflow"<<endl;
        return;
    }
    else{
        s2[++top2]=val;
    }
    
}

int pop1(){
    int v;
    if(top1==-1){
        cout<<"Underflow";
        return -1;
    }
    else{
        v=s1[top1];
        top1--;
        return v;
    }
}

int pop2(){
    int v;
    if(top2==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    else{
        v=s2[top2];
        top2--;
        return v;
    }
}

void enque(int val){
    push1(val);

}
void dequeue(){
    while(top1!=-1){
        push2(pop1());
    }
    int v=pop2();
    cout<<v<<"removed"<<endl;
    while(top2!=-1){
        push1(pop2());
    }
    
}
void display(){
    for(int i=0;i<=top1;i++){
        cout<<s1[i]<<" ";
    }
}
int main(){
    enque(10);
    enque(20);
    enque(30);
    dequeue();
    enque(40);
    display();
    return 0;
    
}
