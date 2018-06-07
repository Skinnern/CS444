#define _GNU_SOURCE
#include <stdio.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <linux/unistd.h>

int main() {
	printf("Free: %d (bytes)\n", syscall(361));
	printf("Claimed: %d (bytes)\n", syscall(360));

	return 0;
}