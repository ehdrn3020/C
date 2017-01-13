#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	char com =0;
	char usr = 0;
	int win=0,lose=0,same=0;
	int num=0;

	while(1){
		srand(time(0));
		com = rand()%3+49;
		fflush(stdin);
		printf("Input the number. (Sicssors:1 Rock:2 paper:3 exit:d)\n");
		scanf("%c",&usr);

		if((usr=='1')||(usr=='2')||(usr=='3')){
			if(com==usr){
				num++;
				same++;
				printf("Same. Number of games %d. %dWin %dSame %dLose\n"
					,num,win,same,lose);
			}
			else if(((com=='1')&&(usr=='3'))||((com=='2')&&(usr=='1'))||((com=='3')&&(usr=='2'))){
				num++;
				lose++;
				printf("Lose. Number of games %d. %dWin %dSame %dLose\n"
					,num,win,same,lose);
			}
			else{
				num++;
				win++;
				printf("Win. Number of games %d. %dWin %dSame %dLose\n"
					,num,win,same,lose);
			}
		}
		else{
			if(usr=='d'){
				printf("Bye \n");
				break;
			}
			else{
				printf("Input wrong number\n");
				continue;
			}
		}
	}
}
