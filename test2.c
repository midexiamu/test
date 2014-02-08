#include <stdio.h>

int main ()
{
	char str[32];
	
	while(fgets(str, sizeof(str), stdin)!=NULL){
		fputs(str,stdout);
	}
	return 0;
}

