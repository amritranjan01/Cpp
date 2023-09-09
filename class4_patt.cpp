// # include <iostream>
// using namespace std;
// # include <cmath>
// // humlog sabse pehle space print karenge phir star print kar denge 
// // 2 inner loop ka upyog kar sakte hain
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<(n-(row+1));col++){
//             cout<<" ";

//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


// # include <iostream>
// using namespace std;
// # include <cmath>
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//   }  
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     n=n/2;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<(n-(row+1));col++){
//             cout<<" ";

//         }
//         for(int col=0;col<row+1;col++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//     for(int col=0;col<row;col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//   } 
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<(n-(row+1));col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             if(col==0 || col==row){
//             cout<<"*"<<" ";
//             }
//             else {
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++){
//             if(col==0 || col==(n-row)-1){
//                 cout<<"*"<<" ";
//             }
//             else {
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<(n-(row+1));col++){
//             cout<<" ";
//         }
//         for(int col=0;col<row+1;col++){
//             if(col==0 || col==row){
//             cout<<"*"<<" ";
//             }
//             else {
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row;col++){
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++){
//             if(col==0 || col==(n-row)-1){
//                 cout<<"*"<<" ";
//             }
//             else {
//                 cout<<" "<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }



// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     n=n/2;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"*";

//         }
//         for(int col=0;col<(2*row+1);col++){
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++){
//         cout<<"*";
//     }
//         cout<<endl;
//     }

//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }

//         for(int col=0;col<2*(n-row)-1;col++){
//             cout<<" ";
//         }


//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }






// for(int row=0;row<n;row++){
//     for(int col=0;col<(2*row+1);col++){
//         cout<<" ";
//     }
//     cout<<endl;
// }

// for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
// }
// }




// # include <iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*row+1;col++){
//             if(col%2==0){
//                 cout<<row+1<<" ";
//             }
//             else{
//                 cout<<"*"<<" ";
//             }
            
//         }
//         cout<<endl;

//     }
// }




// alternative method


// # include <iostream>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             if(col==row){
//                 cout<<row+1;
//             }
//             else{
//                 cout<<row+1<<" "<<"*"<<" ";
//             }
           
            
//         }
//         cout<<endl;
        

//     }
// }



// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             if(row==0|| row==n-1){
//                 cout<<"*";
//             }
//             else{
//                 if(col==0|| col==(n-1)-row){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }


/// h.w


// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<2*row+1;col++){
//             if(row==0 || row==n-1){
//                 cout<<col+1;
//             }
//             else{
                
//             }
//         }

//     }
// }




# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
             ch=col+'A';
            cout<<ch;
        }
        char new_c=ch;
        while(new_c>'A'){
            new_c-=1;
            cout<<new_c;
        }
        cout<<endl;
    }

}