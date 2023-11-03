#include<stdio.h>
int main(){
  int n, i;
  printf ("Enter the number n \n");
  scanf("%d",&n);

  for ( i = 1; i <= 10; i++)
  {
    printf("%d\n",n*i);
  }
  return 0;
  
}