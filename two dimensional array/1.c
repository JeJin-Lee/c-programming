// input : n (1<=n<=100)
// output (ex. n=3): 1 6 7
                     2 5 8
                     3 4 9
                     

#include <stdio.h>
int main(){
    int n,i,j,temp;
    int cnt=0;
    scanf("%d", &n);
    int arr[101][101];
    
    for(i=0; i<n; i++){
        if(i%2==0){
            for(j=0; j<n; j++){
                arr[i][j] = ++cnt;
            }
        }
        else{
            for(j=n-1; j>=0; j--){
                arr[i][j] = ++cnt;
            }
        }
    }
    for(i=0; i<n; i++){                   // USE SYMMETRIC MATRIX
        for(j=0; j<i; j++){
            if(i!=j){
                temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
