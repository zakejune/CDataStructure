#include<stdio.h>
int main()
{
    int a[10]={2,5,1,7,3,23,15,31,21,11};
    for(int i = 1;i <= 9;i++){
        for(int j = 0;j<10-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
for(int i=0;i<10;i++){
    printf("%d ",a[i]);
}
return 0;
}