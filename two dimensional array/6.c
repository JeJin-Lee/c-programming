다음과 같은 n*m 배열 구조를 출력해보자.

입력이 3 4인 경우 다음과 같이 출력한다.
12 7 6 1
11 8 5 2
10 9 4 3

입력이 4 5인 경우는 다음과 같이 출력한다.
17 16 9 8 1
18 15 10 7 2
19 14 11 6 3
20 13 12 5 4

입력이 n m인 경우의 2차원 배열을 출력해보자.

#include <stdio.h>
int main(){
    int n,m,i,j;
    int a[101][101];
    int cnt=0;
    int row=0;
    scanf("%d %d", &n,&m);
    for(i=m; i>=1; i--){
        row++;
        if(row%2){
            for(j=1; j<=n; j++){
                a[j][i]=++cnt;
            }
        }
        else{
            for(j=n; j>=1; j--){
                a[j][i]=++cnt;
            }
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
