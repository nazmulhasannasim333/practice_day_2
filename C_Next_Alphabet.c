#include<stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z'){
        if(ch == 'z'){
            printf("a\n");
        }else{
            printf("%c\n", ch + 1);
        }
    }
    
    return 0;
}