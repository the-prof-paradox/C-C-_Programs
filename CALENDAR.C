#include<stdio.h>
#include<conio.h>

int alpha(int i)
{
	int l,k;
	switch(i)
	{
	case 4:
	case 6:
	case 9:
	case 11: l=30; break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: l=31; break;
	case 2: l=29;
	}
	for (k=0;k<=5;k++)
	{ if (l<7*k)
	break;
	}
	return (l-(7*(k-1)));
}


int isleap (int x)
{
	if (x%100==0)
	x=x/100;

	if (x%4==0)
	return 1;
	else
	return 0;
}

void main ()
{
	int D,M,Y,n=0,i;
	clrscr();
	printf("\n enter date \n");
	scanf("%d %d %d",&D,&M,&Y);
	printf("\n DATE:- %d/%d/%d",D,M,Y);
	for (i=1;i<M;i++)
	n=n+alpha(i);

	for (i=0;i<=5;i++)
	{ if (D<(7*i))
	  break;
	}
	n=n+(D-(7*(i-1)));

	while(n>=7)
	n=n-7;

	for (i=2001;i<=Y;i++)
	{
	if ((M<2)||(M==2 && D<=28))
	 { if (isleap(i-1)==1)
	   n=n+2;
	   else
	   n=n+1;
	 }
	 else
	 { if (isleap(i)==1)
	   n=n+2;
	   else
	   n=n+1;
	 }
	}

	while (n>=7)
	n=n-7;

	printf("\n DAY:- ");
	switch(n)
	{
	case 0 : printf(" FRIDAY");break;
	case 1 : printf(" SATURDAY");break;
	case 2 : printf(" SUNDAY");break;
	case 3 : printf(" MONDAY");break;
	case 4 : printf(" TUESDAY");break;
	case 5 : printf(" WEDNESDAY");break;
	case 6 : printf(" THURSDAY");break;
	}
	getch();
}