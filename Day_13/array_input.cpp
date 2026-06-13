#include <iostream>
using namespace std;

int main (){ 
    int n, i;
    cout << "Enter number of array elements : ";
    cin >> n;
    int arr[n];
    cout << "enter the elements of the array : ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "the elemts of the array are :";
    for(i=0;i<n;i++){
    cout << arr[i] << " " ;
}
    return 0;
}
