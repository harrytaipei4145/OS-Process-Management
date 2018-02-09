#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX_COUNT 200

int main()
{
  pid_t pid;
  int i,value;
  pid=fork();


  switch(pid)
 {
  case -1:
  printf("Creat process fail.\n");
  break;
  case 0:
       for(i=1;i<= MAX_COUNT;i++)
			{
				printf("Child,value = %d\n",value+158);
				value++;
			}
  printf("*** Child is done ***\n");
  break;
  default:
  for(i=1;i<=MAX_COUNT;i++)
  {
  	printf("Father,value=%d\n",value);
  	value++;
  }
  printf(" ***Father process is done ***\n");	
  break;
 }
}






