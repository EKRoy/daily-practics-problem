#include<stdio.h>
int main()
{
  char ch; scanf("%c",&ch);
//   printf("%c",ch);
  if(ch=='z') printf("a ");
  else{
    printf("%c ",ch+1);
  } 
    return 0;
}