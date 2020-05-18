#include<stdio.h>

static __attribute__((constructor)) void before_main(void) 
{
	printf("Hello,World\n");
}

int main()
{}
