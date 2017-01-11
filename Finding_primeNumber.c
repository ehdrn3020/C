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
	int i,j;                         //2부터 n까지 n - 1개를 저장할 수 있는 배열 할당한다.
	for (i = 2; i < NUM; i++)        //배열 참조 번호와 소수와 일치하도록 배열의 크기는 n + 1(NUM=151) 길이만큼 할당한다.
	{                                //(정수 0과 1은 소수가 아니기 때문이다.)*/
		P[i] = i;              
	}						   
	                       
	for (i = 2; (i*i) < NUM; i++)                 //[Step 2 : Set i to 2]  [Step 3 : Display 'i' as the next prime number]
	{                                             //정수 2 부터 소수이므로 초기화 이후, 에다토스테네스의 체에 따라 소수를 구한다.
		if (P[i])                                 //'i'를 1씩 증가시키며 불필요한 루핑을 위해 "(i*i)<NUM"이라는 제한조건을 설정한다.
		{	                                               
			for (j = i*i; j < NUM; j += i) P[j] = 0;   //[Step 4 : For all positive integer values of 'j' such that i*j<=NUM set P[i] to 1]	   
		}                                              //[Step 5:Find the next valuse of 'i' such that P[i] = 0 and return to Step 3]
	}                                                  //'i'와 이후의 배수는 'i'를 약수로 가지는 것이므로 소수가 아니다.
	                                                   //'j'는 'i'의 배수로써 증가하며, 배수일시 P[j]에 정수 0을 두어 소수가 아님을 표시한다.
    for (i = 0; i < NUM; i++)
	{
		printf("%d  ", P[i]);
	}                               //for문을 통해 배열을 출력한다.
	printf("\n\n");
	
	for (i = 0; i < NUM; i++)
	{
		if (P[i]!=1)
		printf("%d  ", P[i]);       //소수가 아닌 수 는 0으로 초기화 되었으므로 if문을 통해 소수만 출력한다.
	}
	printf("\n");
	return 0;
}