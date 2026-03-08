#include <stdio.h>
#define MAX 50

int countVowel(char [ ]);
int Ca=0,Ce=0,Ci=0,Co=0,Cu=0;
void main() {
    char text[MAX];
    int cVowel;
    printf("Enter text : ");
    scanf("%s", text);
    cVowel = countVowel(text);
    
    printf("Text : [%s] has %d vowels\n", text, cVowel);
    printf("Text : [%s] has A:%d E:%d I:%d O:%d U:%d ",text,Ca,Ce,Ci,Co,Cu);
}
int countVowel(char t[]) {
    int i=0, count=0;
    while (i<MAX && t[i]!='\0') {
    if (t[i]=='A' || t[i]=='a' || t[i]=='E' || t[i]=='e' || t[i]=='I' || t[i]=='i' ||
    t[i]=='O' || t[i]=='o' || t[i]=='U' || t[i]=='u')
    if (t[i]=='A' || t[i]=='a') {Ca++; count++;}
    else if (t[i]=='E' || t[i]=='e') {Ce++; count++;}
    else if (t[i]=='I' || t[i]=='i') {Ci++; count++;}
    else if (t[i]=='O' || t[i]=='o') {Co++; count++;}
    else if (t[i]=='U' || t[i]=='u') {Cu++; count++;}
    i++;
    }
    return(count);
}
