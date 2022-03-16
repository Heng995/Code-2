#include<stdio.h>
int main () {

int k = -7;

char s[1000];

scanf("%s",s);

for(int i = 0; s[i] != '\0'; i++) {

printf("%c",s[i]+k);

}

return 0;

}