#include<stdio.h>

int main(){
    long long int N, M, K;
    scanf("%lld %lld %lld", &N, &M, &K);
    if(N % K == 0 && M % K == 0){
        printf("Both\n");
    }else if(N % K ==0){
        printf("Memo\n");
    }else if(M % K == 0){
        printf("Momo\n");
    }else{
        printf("No One\n");
    }
    return 0;
}