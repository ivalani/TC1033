#include<stdio.h>
#include
//Cuántos números naturales primos hay entre 1 y 1000000//
main()
{
	int num,x,cont=0;
	for(num=2;num<=1000000;num++)
	{
		for(x=2;x<=num;x++)
			if(num%x==0)
				cont++;
		if (cont==1)
			printf("%d-",num);
		cont=0;
	}
	getch();
}