#include<sys/shm.h>
#include<sys/types.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int shmid;
    char buff[100];
    void *s_memory;
    shmid=shmget(12355,1024,0777);
    if(shmid!=-1)
    {
        s_memory=shmat(shmid,NULL,0);
        strcpy(buff,s_memory);
        write(1,buff,strlen(buff));
    }
}
