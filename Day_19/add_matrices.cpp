#include <iostream>
using namespace std;

int main() {
    int r,c,i,j;
 cout << "Enter the number of rows and columns: ";
 cin >> r >> c;
 int a[100][100],b[100][100],sum[100][100];
 cout << "enter the elemets of matrix 1 : ";
 for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        cin >> a[i][j];
    }
 }
 cout << "enter elements of matrix 2: ";
 for(i=0;i<r;i++){
    for (j=0;j<c;j++){
        cin >> b[i][j];
    }
}
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        sum[i][j]= a[i][j] + b [i][j];
    }
}

        cout << "the sum matrix is: ";
        for(i=0;i<r;i++){
    for (j=0;j<c;j++){
       cout << sum [i][j]<<" ";
    }
    cout << endl;
}
return 0;
}
