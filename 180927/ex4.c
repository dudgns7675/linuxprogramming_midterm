#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>

static void sig_usr(int signo){
	if(signo == SIGUSR1)
		printf("\nreceived SIGUSR1\n");
}

int main(void){
	//자식
	if(!fork()){
		ppid = getppid();
		kill(ppid, SIGUSR1);
	}
	//부모
	else


	for( ; ; );	

}
