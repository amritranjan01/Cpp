// #include <iostream>
// using namespace std;
// void printline()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "Sundar ko Sundari pasand hai" << endl;
//     }
// }
// int main()
// {
//     printline();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // function declartion
// int add_num(int a, int b);

// int main()
// {

//     int a, b;
//     cin >> a >> b;
//     cout << add_num(a, b) << endl;
//     return 0;
// }

// int add_num(int a, int b)
// {
//     return (a + b);
// }

// #include <iostream>
// using namespace std;

// int add_nums(int a, int b, int c);

// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << add_nums(a, b, c) << endl;
//     return 0;
// }

// int add_nums(int a, int b, int c)
// {
//     return (a + b + c);
// }

// void mein return use karenge
// #include <iostream>
// using namespace std;

// int find_max(int a,int b,int c){
//     // if(a>(b>c)){
//     //     return a;
//     // }
//     // if(a>(c>b)){
//     //     return a;
//     // }
//     // else if(b>(a>c)){
//     //     return b;
//     // }
//     // else if(b>(c>a)){
//     //     return b;
//     // }
//     // else if(c>(b>a)){
//     //     return c;
//     // }
//     // else if(c>(a>b)){
//     //     return c;
//     // }

//     return max(a,max(b,c));

//     // return 0;
// }


// int main()
// {

//     int a,b,c;
//     cin>>a>>b>>c;
//     cout<<find_max(a,b,c)<<endl;
//     // return 0;

//     return 0;
// }



// #include <iostream>
// using namespace std;


// void count(int n){
//     for(int i=0;i<n;i++){
//         cout<<i+1<<" ";
//         if((i+1)%5==0){
//             cout<<endl;
//         }
//     }
//     cout<<endl;

// }
// int main(){
//     int n;
//     cin>>n;
//     count(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;


// bool num_check(int n){
//     if(n%2==0){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=num_check(n);
//     // cout<<ans;
//     if(ans==1){
//         cout<<"Even no"<<endl;
//     }
//     else{
//         cout<<"odd no"<<endl;
//     }
// }



// # include <iostream>
// using namespace std;


// int find_sum(int n){
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans+=i+1;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<find_sum(n);
// }



// # include <iostream>
// using namespace std;


// int find_even(int n){
//     int ans=0;
//     for(int i=2;i<=n;i+=2){
//          ans+=i;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<find_even(n);
//     return 0;
// }


# include <iostream>
using namespace std;
# include <cmath>


bool find_prime(int n){
    if(n==1){
        return false;
    }
    if(n==2){
        return true;
    }
    else{
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int ans=find_prime(n);
    if(ans==1){
        cout<<"prime no"<<endl;
    }
    else{
        cout<<"not prime no"<<endl;
    }

}