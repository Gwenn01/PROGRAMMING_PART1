#include <stdio.h>
#include <conio.h>

int main()
{
   int n1 = 0;
   int n2 = 1;
   int n3, count, num;
   
   printf("Enter the number of term: ");
   scanf("%d", &num);
   
   printf("\n%d \n %d \n", n1, n2);
   
   for(count = 3; count <= num; count++){
   n3 = n1 + n2;
   printf("%d\n", n3);
   n1 = n2;
   n2 = n3;
   }
   return 0;
}