// # include <iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<11;i++){
//         cout<<"Amrit"<<endl;
//     }
// }

// # include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<19*i<<endl;
//     }
// }

// # include <iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             cout<<i<<endl;
//         }
//     }
// }



// # include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=0;i<row;i++){
//         if(i==0||i==row-1){
//             for(int j=0;j<col;j++){
//                 cout<<"*"<<" ";
//             }
//         }
//     }
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(i==0||i==row-1){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 if(j==0||j==col-1){
//                     cout<<"*"<<" ";
//                 }
//                 else{
//                     cout<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// # include <iostream>
// using namespace std;
// int main(){
//     int row=5;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }


# include <iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}


// # include <iostream>
// using namespace std;
// int main(){
//     for(int j=5;j>0;j--){
//             cout<<"*"<<" ";
//         }

// }


// # include <iostream>
// using namespace std;

// int main(){
//     int row;
//     cin>>row;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<i+1;j++){
//             cout<<j<<" ";

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
//         for(int col=0;col<row+1;col++){
//             cout<<col+1<<endl;
//         }
//     }
// }

// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<col+1<<" ";
//         }
//         cout<<endl;
//     }
// }
