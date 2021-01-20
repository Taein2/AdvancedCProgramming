#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *spOut;
	char str[100];
	
	if( !(spOut= fopen("KeyB.txt","w"))){
		printf("could not open output file!\n");
		exit(100);	
	}
	while(fgets(str, sizeof(str), stdin))
		fputs(str,spOut);
	
	fclose(spOut);
	return 0;
}
