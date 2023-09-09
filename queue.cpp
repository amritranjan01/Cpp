# include <iostream>
using namespace std;
struct queue{
    int size;
    int front;
    int rear;
    int *Q;
};
typedef struct queue que;
que *q=new que();
void insert(int key){
    if (q->rear==q->size-1){
        cout<<"queue is full\n";
    }
    else {
        q->rear++;
        q->Q[q->rear]=key;

    }


}
void delete1(){
    if(q->front==q->rear){
        cout<<"queue is empty";
    }
    while(q->front!=q->rear){
        q->front++;
        cout<<"the element is "<<q->Q[q->front]<<"\n";
    }
    // if(q->front==q->rear){
    //     cout<<"queue is empty";
    // }

}
int main(){
    // que *q;
    cout<<"enter the size of queue\n";
    cin>>q->size;
    q->Q=new int();
    q->rear=-1;
    q->front=-1;
    for(int i=0;i<q->size;i++){
        int key;
        cout<<"enter the key\n";
        cin>>key;
        insert(key);
    }
    delete1();

    // que *q=new int();

}