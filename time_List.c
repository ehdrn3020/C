//Use the list to get the time difference

#include <stdio.h>

typedef struct{
	int time;
	int second;
	int minute;
}TIME;
TIME elapsed_time(TIME time1,TIME time2)
{
	TIME result;
	result.second=time2.second-time1.second;
	if(result.second<0)
	{
		result.second=60+result.second;
	    time2.minute-=1;
	}
	//printf("%d\n",result.second);

	result.minute=time2.minute-time1.minute;
	if(result.minute<0)
	{
		result.minute=60+result.minute;
		time2.time-=1;
	}
	//printf("%d\n",result.minute);

	result.time=time2.time-time1.time;
	if(result.time<0)
		result.time=12-result.time;
	    
	return result;
}

int _tmain()
{
	TIME time1,time2,result;
	scanf("%d %d %d",&time1.time,&time1.minute,&time1.second);
	scanf("%d %d %d",&time2.time,&time2.minute,&time2.second);
	result=elapsed_time(time1,time2);
	printf("%d : %d : %d\n",result.time,result.minute,result.second);
	return 0;
}
