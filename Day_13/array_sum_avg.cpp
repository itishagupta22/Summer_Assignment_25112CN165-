#include <iostream>
using namespace std;

int main (){ 
    int n, i, sum=0;
    float avg;
    cout << "Enter number of array elements : ";
    cin >> n;
    int arr[n];
    cout << " enter the elements of the array : ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i =0; i<n;i++){
        sum+= arr[i];
    }
    cout << "sum of all elements : " << sum << endl;
    avg= (float) sum/n;
    cout << "the average of all elemets are : " << avg << endl;
    
    
    return 0;
}
