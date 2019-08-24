다음과 같은 n*n 배열 구조를 출력해보자.

입력이 3인 경우 다음과 같이 출력한다.
3 4 9
2 5 8
1 6 7

입력이 5인 경우는 다음과 같이 출력한다.
5 6 15 16 25
4 7 14 17 24
3 8 13 18 23
2 9 12 19 22
1 10 11 20 21

입력이 n인 경우의 2차원 배열을 출력해보자.



#include <stdio.h>
int main(){
    int i,j,n;
    int cnt = 0;
    scanf("%d", &n);
    int arr[101][101];
    
    for(j=1; j<=n; j++){
        if(!(j%2)){                     // if문 안이 참이어야 하므로, j가 2로 나누어 떨어질 때이다
            for(i=1; i<=n; i++){
                arr[i][j]=++cnt;
            }
        }
        else{
            for(i=n; i>=1; i--){
                arr[i][j] = ++cnt;
            }
        }
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
