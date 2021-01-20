#include <stdio.h>

int main(){
	
	char str[100];
	char *p;
	
	printf("Enter a String : ");
	scanf("%99s",str);	
	p=str;
	
	int cnt=0;
	while(*p != '\0'){
		if(cnt%2 == 1){
			printf("%c",*p);		
		}
		cnt++;
		p++;
	}
	printf("\n");
	return 0;
}
