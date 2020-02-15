#include<stdio.h>

int main() {
    int x[1000], n=2;
    char s[10][1000];
    for (int i=0;i<n;i++){
        scanf("%s %d", s[i], &x[i]);
        printf("%s %d\n", s[i], x[i]);
    }
}