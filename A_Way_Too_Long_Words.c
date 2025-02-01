#include <stdio.h>
#include <string.h>
int main (){
    int n;
    scanf ("%d", &n);
    for (int i=0; i<n;i++){

        char s1 [1000];
       scanf ("%s",&s1);
      
      int len = strlen (s1);
      if (len>10){
    printf ("%c%d%c\n",s1[0],len-2,s1[len-1]);
      }
      else 
     printf ("%s\n",s1);


      }
}