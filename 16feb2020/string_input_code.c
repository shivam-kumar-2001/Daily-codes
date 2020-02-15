#include<stdio.h>

void code(){
	int x[1000], n=2;
    char s[100][10000];
    for (int i=0;i<n;i++){
        scanf("%s %d", s[i], &x[i]);
        printf("%s %d\n", s[i], x[i]);
    }
}

void define_input(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main() {
	define_input();
    code();
}