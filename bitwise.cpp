# include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;
    cout<<(a&b)<<endl;

    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    // here first take 2's complement of 5 then after the answer comes then also take 2's complement of answer


    cout<<(5^(-5))<<endl;

    // left shift 
    // right shift
    int x=7;
    cout<<(x<<2)<<endl;

    // right shift
    int n=100;
    cout<<(n>>2)<<endl;

    // yeh right shift of signed number hain toh compiler handle kar lega
    int y=-100;
    cout<<(y>>2)<<endl;

    // below is unsigned number so in this case compiler gives large value

    unsigned p=-50;
    cout<<(p>>1)<<endl;


    // here below is negative int and we are right shift with negative num so it gives warning and print garbage value

    int q=100;
    cout<<(q>>-1)<<endl;

}