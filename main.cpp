//
//  main.cpp
//  week7lesson1
//
//  Created by Dmitriy Taldonov on 08/11/23.
//
//Challange 1

// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// void swap (int*a, int*b){
//     *a = *a + *b;
//     *b = *a - *b;
//     *b = *a - *b;
    
   
// }

// void minimal(int *arr, int size, int *min, int *max) {
//     *min = arr[0];
//     *max = arr[0];

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < *min) {
//             *min = arr[i];
//         } else if (arr[i] > *max) {
//             *max = arr[i];
//         }
//     }
// }



// int main(){
    
  
//     int arr[] = {10, 5, 20, 15, 3};
//         int size = 5;
//         int min, max;
//     minimal(arr, size, &min, &max);

//     cout << min << " \n "<< max << endl;
// //    int numberOne = 2;
// //    int numberTwo = 3; minimal(arr, size, &min, &max);

// //    swap (numberOne, numberTwo);
// //    cout << numberOne<< " " << numberTwo << endl;
     
//     return 0;







   

#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int size1 = sizeof(arr)/sizeof(arr[0]);
    
    int arr2[]={2,4,6,8,10};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    int result[]={};
    for (int i = 0; i<(size1+size2)+1; i++) {
        result[i]=arr[i];
        result[i]=arr2[i];
    }
//    for (int i = 0; i<size1+size2; i++) {
//        for (int j = 0; i<size1+size2; i++) {
//            if (result[i]>result[j]) {
//                swap(result[i], result[j]);
//            }
//        }
//    }
    int n = size1+size2;
    sort(result, result+n);
    for (int i = 0; i<n; i++) {
        cout<<result[i]<<",";
    }


return 0;
}

}
