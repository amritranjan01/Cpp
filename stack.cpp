# include <iostream>
// # include <stack>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *s;
};
stack *st=new stack();
void insert(int element){
    //  stack *st;
    // stack *st;
    // st->s=new int();
    // st->s=(int*)malloc(st->size*sizeof(int));
    // stack *st;
    if(st->top==st->size-1){
        // st->top++;
        // st->s[st->top]=element;
        cout<<"overflow"<<endl;

    }
    else{
        // cout<<"overflow"<<endl;
        st->top++;
        st->s[st->top]=element;
    }

}
void print(){
    //  stack *st;
    for(int i=0;i<st->size;i++){
        cout<<st->s[st->top]<<endl;
        st->top--;

    }
}
void pop(){
    //  stack *st;
    if(st->top==-1){
        // cout<<(st->s[st->top])<<endl;
        // st->top--;
        cout<<"no element is present"<<endl;

    }
    else {
        // cout<<"no element is present"<<endl;
        int x=st->s[st->top];
        cout<<x<<"\n";
        st->top--;
    }
}
void isempty(){
    //  stack *st;
    if(st->top==-1){
        cout<<"stack is empty\n";
    }
    else {
        cout<<"not empty \n";
    }
}
void isfull(){
    //  stack *st;
    if(st->top==st->size-1){
        cout<<"stack is full \n";
    }
    else {
        cout<<"stack has element\n";
    }
}
int main(){
    // stack *st;
    st->top=-1;
    cout<<"enter the size of stack\n";
    cin>>st->size;
    st->s=new int();
    // scanf("%d",&st->size);
    // st->top=-1;
    for(int i=0;i<st->size;i++){
        cout<<"enter the key \n";
        int key;
        cin>>key;
        insert(key);
    }
    isfull();
    print();
    // for(int i=0;i<st->size;i++){
    //     pop();
    // }
    isempty();
}