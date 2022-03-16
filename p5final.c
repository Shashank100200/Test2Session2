#include<stdio.h>

int input_array_size()
{
  int n;
  printf("enter the number\n");
  scanf("%d\n",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      a[i]=i+1;//a[i]=0,we cannot divide any number with 0 it will be infinity therefore we added +1
    }
}
void erotosthenes_sieve(int n,int a[n])

{
  int i,j;
  for(i=1;i<n;i++)//it will check upto 50
    {
      if(a[i]==0)
      continue;
  for(j=a[i]+1;j<=n;j++)
    {
      if(j%a[i]==0)
      a[j-1]==0;
    }
  }
}
void out_put(int n,int a[n])

{
  int i;
  printf("The prime numbers are\n");
  for(i=1;i<=n;i++)
    {
      if(a[i] != 0)
      {
        printf("%d\n",a[i]);
      }
    }
}
int main()

{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
  return 0;
}




























//

