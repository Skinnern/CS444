#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <sys/types.h>


int main(void){
    long total_sp = syscall(359); 

    printf("free pages: %lu\n",total_sp);

    return 0;
}
