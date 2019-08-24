다음과 같은 n*m 배열 구조를 출력해보자.

입력이 3 4인 경우 다음과 같이 출력한다.
9 10 11 12
8 7 6 5
1 2 3 4

입력이 4 5인 경우는 다음과 같이 출력한다.
20 19 18 17 16
11 12 13 14 15
10 9 8 7 6
1 2 3 4 5

입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <stdio.h>
int main(){
    int n, m,i,j,cnt=0;
    scanf("%d %d", &n, &m);
    int arr[101][101];
    
    if(n%2==0){
    for(i=n-1; i>=0; i--){
        if(i%2==0){
            for(j=m-1; j>=0; j--){
                arr[i][j] = ++cnt;
            }
        }
        else{
            for(j=0; j<m; j++){
                arr[i][j] = ++cnt;
            }
        }
    }
}
else{
    for(i=n-1; i>=0; i--){
        if(i%2!=0){
            for(j=m-1; j>=0; j--){
                arr[i][j] = ++cnt;
            }
        }
        else{
            for(j=0; j<m; j++){
                arr[i][j] = ++cnt;
            }
        }
    }
}
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}
