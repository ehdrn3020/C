/* 행렬변환
   1 2 3       1 4 7   
   4 5 6   ->  2 5 8
   7 8 9       3 6 9 */

#include <stdio.h>
#include <stdlib.h>
int ** transpose_matrix(int M[][5])
{
	int ** N=(int **)malloc(sizeof(int*)*5);
	int i,j;

	for(i=0;i<5;i++)
		N[i]=(int *)malloc(sizeof(int)*4);

	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			N[j][i]=M[i][j];
		}
	}
	return N;
}
void main()
{
	int M[4][5];
	int** N;
	int R[4][4];
	int i,j,k,num=1;

	printf("------char M------\n"); 
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			M[i][j]=num++;
			printf("%3d ",M[i][j]);
		}
	printf("\n");
	}
	
	N=transpose_matrix(M);
	printf("\n\n------char N------\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%3d ",N[i][j]);
		}
	printf("\n");
	}
	
	printf("\n\n------char R------\n");
    for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			num=0;
			for(k=0;k<5;k++)
			{
			     num+=(M[i][k]*N[k][j]);
				 R[i][j]=num;
			}
			printf("%4d ",R[i][j]);
		 }
     }
    printf("\n");
}
