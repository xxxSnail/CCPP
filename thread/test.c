#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_fun(){
    printf("This is a child thread.\n");
}

int main(){
    pthread_t tid;
    pthread_create(&tid, NULL, thread_fun, NULL);

    printf("This is a main thread.\n");
    sleep(1);
    return 0;
}