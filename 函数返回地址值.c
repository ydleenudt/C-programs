//pointer return by calling a function
#include<stdio.h>

int *fun(int *, int *);

main()
{
  int *p, i, j;
  printf("Enter two number: ");
  scanf("%d %d", &i, &j);
  p=fun(&i, &j);
  printf("i=%d, j=%d, *p=%d\n", i, j, *p);
}

int *fun(int *a, int *b)
{
  if(*a > *b）  return a;
  else  return b;
}
