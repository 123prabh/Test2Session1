#include <stdio.h>
int input_number()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
    {
      if(n%i!=0)
      {
        return 0;
      }
    }
     return 1;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
  {
    printf("the number is prime");
  }
  else
  {
    printf("the number is not prime");
  }
}
  int main()
  {
    int n,isprime;
    n=input_number();
    isprime=is_prime(n);
    output(n,isprime);
    return 0;
  }
  