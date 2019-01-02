#include <stdio.h>

int main()
{
	char *shell = (char *)getenv("MYSHELL");

	if(shell)
	{
		printf("    Address of \"/bin/sh\":    %x\n", (unsigned int)shell);
	}

	return 1;
}