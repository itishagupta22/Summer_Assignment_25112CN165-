#include <iostream>
using namespace std;

int main() {
    int r,c,i,j;
 cout << "Enter the number of rows and columns: ";
 cin >> r >> c;
 int a[100][100],transpose[100][100];
 cout << "enter the elemets of matrix : ";
 for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        cin >> a[i][j];
    }
 }
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        transpose[j][i]= a[i][j];
    }
}

        cout << "the transpose matrix is: ";
        for(i=0;i<c;i++){
    for (j=0;j<r;j++){
       cout << transpose[i][j]<<" ";
    }
    cout << endl;
}
return 0;
}
