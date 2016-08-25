#include<pthread.h>
#include<stdio.h>
static int count=0;
pthread_mutex_t lock;
void* phello(void *arg)
{
	int n = *((int *) arg);
	int i;
	for(i=0;i<5;i++){
		pthread_mutex_lock(&lock);
		printf("%2d: Hello world (thread %d).\n",++count,n);
		pthread_mutex_unlock(&lock);
		sleep(1);
	}
	return NULL;
}

int main()
{
	pthread_t id[5];
	int th_no[] = {0,1,3,4,5};
	void *exits;
	
	int i;
	pthread_mutex_init(&lock,NULL);

	i = 0;
	while(i<5){
		pthread_create(id+i,NULL,phello,th_no+i);
		i++;
	}

	i = 0;
	while(i<5){
		pthread_join(*(id+i),&exits);
		i++;
	}
	pthread_mutex_destroy(&lock);
}
