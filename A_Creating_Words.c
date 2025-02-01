#include <stdio.h>
#include <string.h>
void swapFirstCharacters(char a[], char b[]) {
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}
int main (){
    int t;
    scanf ("%d",&t);
    for(int i =0 ; i<t ; i++){
        char a[4], b[4];
        scanf("%s %s", a, b);

        swapFirstCharacters(a, b);

        printf("%s %s\n", a, b);

    }
}