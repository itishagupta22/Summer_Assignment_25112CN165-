#include <iostream>
using namespace std;

int main() {
 int n,i,even=0,odd=0;
 cout << "Enter the number of elements : ";
 cin >> n;
  
  int arr[n];
   cout << "Enter the elements of the array : ";
   for (i=0;i<n;i++){
       cin >> arr[i];
   }
  for (i=0;i<n;i++){
      if (arr[i]%2 == 0 ) {
          even++;
      }
      else{
          odd ++;
       }
      }
   cout << "The number of odd elements are = " << odd << " and the number of even elements are = " << even << endl;
    return 0;
}
