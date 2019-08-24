다음과 같은 n*m 배열 구조를 출력해보자.

입력이 3 4인 경우 다음과 같이 출력한다.
10 9 4 3
11 8 5 2
12 7 6 1

입력이 4 5인 경우는 다음과 같이 출력한다.
20 13 12 5 4
19 14 11 6 3
18 15 10 7 2
17 16 9 8 1

입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <stdio.h>
int main(){
    int n,m,i,j,cnt=0;
    int row=0;
    int arr[101][101];
    scanf("%d %d", &n, &m);
    for(i=m; i>=1; i--){
        row++;
        if(row%2){
            for(j=n; j>=1; j--){
                arr[j][i]=++cnt;
            }
        }
        else{
            for(j=1; j<=n; j++){
                arr[j][i]=++cnt;
            }
        }
}
for(i=1; i<=n; i++){
    for(j=1; j<=m; j++){
        printf("%d ", arr[i][j]);
    }
    printf("\n");
}
}
