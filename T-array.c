#include<stdio.h>
int main(){
    int a[3][3]={{1,3},{2,1,5},{}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}