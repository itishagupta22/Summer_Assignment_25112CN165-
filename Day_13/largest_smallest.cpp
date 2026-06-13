#include <iostream>
using namespace std;

int main() {
 int n,i;
 cout << "Enter the number of elements : ";
 cin >> n;
  
  int arr[n];
   cout << "Enter the elements of the array : ";
   for (i=0;i<n;i++){
       cin >> arr[i];
   }
   int largest=arr[0];
   int smallest=arr[0];
   
   for (i=0;i<n;i++){
       if (arr[i] > largest)
       largest = arr[i];
       
       if (arr[i] < smallest)
       smallest = arr[i];
   }
   cout << "The largest element is = " << largest << " and the smallest element is = " << smallest << endl;
    return 0;
}
