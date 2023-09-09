// ++a pehle inc karo bhi use karo
// a++ pehle use kar lo phir inc kar lena
// a-- pehle a ko use kar lo phir dec kar lo
// --a pehle dec kar lo phir use karo
# include <iostream>
using namespace std;
int main(){
int a=21;
//pehle inc kar liya phir use kar liya
cout<<++a<<endl;
// pehle use karo phir inc kar lena
cout<<a++<<endl;
cout<<endl;
// baad mein updated a print ho gaya
cout<<a<<endl;
cout<<endl;

int x=10;
cout<<(++x)*10<<endl;
cout<<(x++)*10<<endl;
cout<<x<<endl;

cout<<endl;

int p=10;
cout<<(++p)*(p++)<<endl; //121 answer mera yahi hain
int r=10;
cout<<(r++)*(++r)<<endl;// 120 mera aa gaya
 






}