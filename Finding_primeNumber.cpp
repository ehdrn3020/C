#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
//#pragma warning(disable : 4996)

#define NUM 151                       
int main(void)
{
	int P[NUM] = { 0, };             //[Step 1: Define an array of integers P. Set all element P[i] to 0,2<=i<=NUM]
	int i,j;                         //2���� n���� n - 1���� ������ �� �ִ� �迭 �Ҵ��Ѵ�.
	for (i = 2; i < NUM; i++)        //�迭 ���� ��ȣ�� �Ҽ��� ��ġ�ϵ��� �迭�� ũ��� n + 1(NUM=151) ���̸�ŭ �Ҵ��Ѵ�.
	{                                //(���� 0�� 1�� �Ҽ��� �ƴϱ� �����̴�.)*/
		P[i] = i;              
	}						   
	                       
	for (i = 2; (i*i) < NUM; i++)                 //[Step 2 : Set i to 2]  [Step 3 : Display 'i' as the next prime number]
	{                                             //���� 2 ���� �Ҽ��̹Ƿ� �ʱ�ȭ ����, �����佺�׳׽��� ü�� ���� �Ҽ��� ���Ѵ�.
		if (P[i])                                 //'i'�� 1�� ������Ű�� ���ʿ��� ������ ���� "(i*i)<NUM"�̶�� ���������� �����Ѵ�.
		{	                                               
			for (j = i*i; j < NUM; j += i) P[j] = 0;   //[Step 4 : For all positive integer values of 'j' such that i*j<=NUM set P[i] to 1]	   
		}                                              //[Step 5:Find the next valuse of 'i' such that P[i] = 0 and return to Step 3]
	}                                                  //'i'�� ������ ����� 'i'�� ����� ������ ���̹Ƿ� �Ҽ��� �ƴϴ�.
	                                                   //'j'�� 'i'�� ����ν� �����ϸ�, ����Ͻ� P[j]�� ���� 0�� �ξ� �Ҽ��� �ƴ��� ǥ���Ѵ�.
    for (i = 0; i < NUM; i++)
	{
		printf("%d  ", P[i]);
	}                               //for���� ���� �迭�� ����Ѵ�.
	printf("\n\n");
	
	for (i = 0; i < NUM; i++)
	{
		if (P[i]!=1)
		printf("%d  ", P[i]);       //�Ҽ��� �ƴ� �� �� 0���� �ʱ�ȭ �Ǿ����Ƿ� if���� ���� �Ҽ��� ����Ѵ�.
	}
	printf("\n");
	return 0;
}