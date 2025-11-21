#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int number=n;
        for(int j=1;j<i+1;j++){
            printf("%d ",number);
            number--;
        }
    }
    return 0;
}