#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include  <sys/types.h>


int main(void)
{
	char num[8]="0211261";
	pid_t pid;
	int i, value;
	pid = fork();
	switch (pid)
	{
	case -1: 
		printf("Creat process failure!\n"); 
		break;
	case 0: 
		for (i = 1; i <=6; i++)
		{
			printf("Child's PID : %d      %c\n", getpid()+i-1,num[i]);
            
		}	
		break;

	default: 
        
				printf("Father's PID : %d      %c\n", getpid(),num[0]);

		    

	break;
	}
}
