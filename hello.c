#include <stdio.h>
int main(int argc, char *argv[])
{
    
    if (argc > 1)
	if (!strcmp(argv[1], "-v"))
		printf("Version 1.0\n");
	else
		printf("Greetings %s.\n", argv[1]);
    else
	printf("Please tell me your name.\n");
    return 0;
}
