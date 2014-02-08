#include  <stdio.h>

int main(){
	char *s = "abc efd";
	int i;
	for (i = 0; s[i] != '\0'; i++){
		if (s[i] == ' '){
			putchar('\n');
		}else{
			putchar(s[i]);
		}
	}
	putchar('\n');
	
	return 0;
}
