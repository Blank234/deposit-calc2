#include <stdio.h>
#include <math.h>

int main()
{
int sum; 
int sr;

next:
printf("Vvedite summu vklada \n\n\n");
scanf("%d", &sum); 
printf("Vvedite srok \n\n\n");
scanf("%d", &sr); 
if(sum<10000)
{
printf("Summa vklada mala \n\n\n");
goto next; 
}
if(sum<100000)
{
		
}
return 0;
}
