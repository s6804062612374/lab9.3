#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char s[50];
    printf("Enter input:");
    fgets(s,sizeof(s),stdin);
    int i,sum=0;
    for (i=0;i<s[i];i++){
        if (isdigit(s[i])){
            sum = sum + (s[i]-'0');
        }
    }
    printf("Sum of digit char:%d",sum);
}
