#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  pid_t id = fork();
  if(id < 0)
  {
    printf("fork error\n");
    exit(1);
  }

  else if(id ==0)//child
  {
    printf("i am a child,pid:%d \n",getpid());
    sleep(10);
  }
  else
  {
    printf("i am parent,pid:%d \n",getpid());
    sleep(3);
    exit(0);
  } 
  return 0;
}
