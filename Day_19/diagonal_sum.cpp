#include <iostream>
using namespace std;

int main() {
    int r,c,i,j,sum=0;
 cout << "Enter the number of rows and columns: ";
 cin >> r >> c;
 if(r != c){
    cout << "Diagonal sum can only be found for a square matrix.";
    return 0;
}
 int a[100][100];
 cout << "enter the elemets of matrix : ";
 for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        cin >> a[i][j];
    }
 }
for (i=0;i<r;i++){
       sum = sum + a[i][i];
}
        cout << "the sum of diagonals of the matrix is: " << sum;
    cout << endl;
return 0;
}
