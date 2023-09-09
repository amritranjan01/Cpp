// #include <iostream>
// using namespace std;

// int main()
// {

// }

// level 2 array
// finding the pairs
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n=3;

//     int arr[]={10,20,30};

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//         }
//     }

// }

// finding the unique element in array;
// taking xor
// taking xor with 0 leads to that element only
// same elements leads to give 0 and 0 with that element give only rest element

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 9;
//     int arr[] = {10, 2, 6, 11, 6, 2, 10, 7, 7};
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     cout << ans << endl;
// }

// q3
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             for (int k = 0; k < n; k++)
//             {
//                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
//             }
//         }
//     }
// }

// q4

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int zero = 0, one = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             zero++;
//         }
//         else
//         {
//             one++;
//         }
//     }
//     int index = 0;

//     while (zero--)
//     {
//         arr[index] = 0;
//         index++;
//     }
//     while (one--)
//     {
//         arr[index] = 1;
//         index++;
//     }
//     for (int i = 0; i < index; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }



// right shift
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int temp = arr[n - 1];

//     for (int i = n - 1; i >= 0; i--)
//     {
//         arr[i] = arr[i - 1];
//         if (i == 0)
//         {
//             arr[i] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }


// left shift

# include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}