#include <stdio.h>

static char *myfunc(char *ptr)
{
    return ptr;
}

int main(int argc, char *argv[])
{
    char *p = NULL;

    printf("P: %s\n", p);

    if (myfunc(p), "T")
	printf("It works!\n");

    exit(0);
}

