#include<stdio.h>
#include<math.h>
int input_number()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  return n;    
}
int is_prime(int n)
{
  for(int i=2; i<sqrt(n); i++)
    if(n%i==0)
      return 0;
}
void output(int n, int is_prime)
{
  if(is_prime==0)
    printf("%d is not a prime number",n);
  else
    printf("%d is a prime number",n);
}
int main()
{
  int a,b;
  a=input_number();
  b=is_prime(a);
  output(a,b);
  return 0;
}
