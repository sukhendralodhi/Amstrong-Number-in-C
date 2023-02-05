#include <stdio.h>

int main(void) {
  int num,reminder,orginal,sum=0;
  printf("Enter the number: ");
  scanf("%d",&num);
  orginal = num;

  while(num > 0) {
    reminder = num%10;
    sum = sum+(reminder*reminder*reminder);
    num = num/10;
  }
  printf("Sum = %d\n",sum);
  if(orginal == sum) {
    printf("Number is Amstrong.\n");
  } else {
    printf("Number is not Amstrong.\n");
  }
  return 0;
}