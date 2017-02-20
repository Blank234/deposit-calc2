#include <stdio.h>
#include <math.h>

int main()
{
int sum; 
int sr;
int den;

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
if(sr<31 && 0<=sr)
{  
den=sum-sum/100*10;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
} 
if(sr<121 && 31<=sr)
{  
den=sum+sum/100*2;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr<241 && 121<=sr)
{  
den=sum+sum/100*6;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr<366 && 241<=sr)
{  
den=sum+sum/100*12;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr>365)
{  
printf("Srok bolshe dogovora %d\n\n\n", den);                       
}    		
}
if(sum>100000)
{
if(sr<31 && 0<=sr)
{  
den=sum-sum/100*10;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr<121 && 31<=sr)
{  
den=sum+sum/100*3;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr<241 && 121<=sr)
{  
den=sum+sum/100*8;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}
if(sr<366 && 241<=sr)
{  
den=sum+sum/100*15;
printf("Vasha summa sostavlyaet %d\n\n\n", den);                       
}     	
}
return 0;
}
