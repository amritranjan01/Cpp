# include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node *first=NULL;
// void create_link(int key){
// if(fi)
// }
void create_link(int a[],int n){
    int i;
    struct node *t,*last;
     first=new node();
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new node();
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }


}
void display(struct node *p){
while(p!=NULL){
    cout<<p->data<<"\n";
    p=p->next;

}
}
void sum_cal(struct node *p){
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    cout<<sum<<"\n"<<"the sum is ";
}
int sum_cal_r(struct node *p){
    int sum=0;
    if(p!=NULL){
        sum=sum_cal_r(p->next)+(p->data);
    }
    return sum;
    // cout<<sum<<"the sum is \n";
}
void r_display(struct node *p){
    if(p!=NULL){
        // cout<<p->data<<"\n"; // simple display of linked list
        r_display(p->next);
        cout<<p->data<<"\n"; // reverse display of linked list 

    }
}
void count(struct node *p){
    int count=0;
    while (p!=NULL){
        count++;
        p=p->next;
    }
    cout<<"\n"<<count<<"\n";
}
int count_r(struct node *p){
    int count=0;
    int x=0;
    if(p!=NULL){
         x=count_r(p->next)+1;

    }
    return x;
}
int find_max(struct node *p){
    int max=p->data;
    while(p!=NULL){
        if(p->data>=max ){
            max=p->data;
            p=p->next;
            
        }
        else{
            p=p->next;
        }
    }
    return max;
    

}
int find_min(struct node *p){
    int min =p->data;
    while(p!=0){
        if(p->data<=min){
            min=p->data;
            p=p->next;

        }
        else {
            p=p->next;
        }
    }
    return min;

}

int main(){
    struct node *p;
    int n;
    cout<<"enter the no of elements\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    create_link(arr,n);
    // display(first);
    // r_display(first);
    // sum_cal(first);
    // int x=sum_cal_r(first);
    // cout<<"the recursive sum is \n"<<x;
    // int y=count_r(first);
    // cout<<"the recu count is \n"<<y;
    // count(first);
    // int z=find_max(first);
    // cout<<z<<"\n";
    // int z1=find_min(first);
    // cout<<z1<<"\n";

}
