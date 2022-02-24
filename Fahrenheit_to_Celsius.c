#include<stdio.h>
int main()
{
  float celsius,farenheit;
  scanf("%f",&farenheit);
  celsius=(farenheit-32)*5/9;
  printf("%.2f",celsius);
}