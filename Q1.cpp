#include<stdio.h>
int main()
{
	int ayani,ayanj,ayank,ayanl,ayanchoice,ayanx,ayany;
	printf("enter the size of the first matrix Row and then coloumn\n");
	scanf("%d%d",&ayani,&ayanj);
	int ayanarr1[ayani][ayanj];
	printf("enter the value of matrix");
	for(ayanx=0;ayanx<ayani;ayanx++)
	{
		for(ayany=0;ayany<ayanj;ayany++)
		{
			scanf("%d",&ayanarr1[ayanx][ayany]);
		}
	}
	printf("enter the size of the second matrix Rows and then Coloumn\n");
	scanf("%d%d",&ayank,&ayanl);
	int ayanarr2[ayank][ayanl];
	printf("enter the value of matrix");
	for(ayanx=0;ayanx<ayani;ayanx++)
	{
		for(ayany=0;ayany<ayanj;ayany++)
		{
			scanf("%d",&ayanarr2[ayanx][ayany]);
		}
	}
	printf("enter the operation/n[1] for Addition\n[2] for Muliplication\n[3] for Substraction\n");
	scanf("%d",&ayanchoice);
	switch(ayanchoice)
	{
		case 1:
			if(ayani==ayank&&ayanj==ayanl)
			{
				int ayanarr3[ayani][ayanj];
				for(ayanx=0;ayanx<ayani;ayanx++)
				{
					for(ayany=0;ayany<ayanj;ayany++)
		          {
		          	ayanarr3[ayanx][ayany]=ayanarr1[ayanx][ayany]+ayanarr2[ayanx][ayany];
		          	printf("%d\t",ayanarr3[ayanx][ayany]);
				  }
					printf("\n");
				}
			}
			else{
			printf("Matrices don't meet the criteria to perform this task");}
			break;
		case 2:
			if(ayanj==ayank)
			{
				int ayanarr3[ayani][ayanl]={0};
				for(ayanx=0;ayanx<ayani;ayanx++)
				{
					for(ayany=0;ayany<ayanl;ayany++)
					{
						for(int ayana=0;ayana<ayanj;ayana++)
						{
							ayanarr3[ayanx][ayany]+=ayanarr1[ayanx][ayana]*ayanarr2[ayana][ayany];
						}
					printf("%d\t",ayanarr3[ayanx][ayany]);
					}
					printf("\n");
				}
			}
			break;
		case 3:
			if(ayani==ayank&&ayanj==ayanl)
			{
				int ayanarr3[ayani][ayanj];
				for(ayanx=0;ayanx<ayani;ayanx++)
				{
					for(ayany=0;ayany<ayanj;ayany++)
		          {
		          	ayanarr3[ayanx][ayany]=ayanarr1[ayanx][ayany]-ayanarr2[ayanx][ayany];
		          	printf("%d\t",ayanarr3[ayanx][ayany]);
				  }
					printf("\n");
				}
			}
			else{
			printf("Matrices don't meet the criteria to perform this task");}
			break;			
	}
	return 0;
}
