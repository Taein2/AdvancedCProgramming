#include <stdio.h>
#include <stdlib.h>

int main(){
	
	FILE *ifp,*ofp;
	char name[20];
	int age;
	double height,avgHeight=0,avgAge=0;
	int res,cnt = 0;
	
	ifp = fopen("StudentIn.txt","r");
	if(ifp == NULL){
		printf("input file open error!\n");
		return 1;
	}
	ofp = fopen("StudentOut.txt","w");
	if(ofp == NULL){
		printf("input file open error!\n");
		return 1;
	}
	while(1){
		res = fscanf(ifp, "%s%d%lf",name,&age,&height);
		if(res == EOF) break;
		avgHeight += height;
		avgAge += age;
		cnt ++;
		fprintf(ofp, "%.1lf %d %s\n",height,age,name);
	}
	avgHeight = avgHeight/cnt;
	avgAge = avgAge / cnt;
	fprintf(ofp,"Average Height : %.1f  Average Age : %.1f",avgHeight,avgAge);
	
	fclose(ifp);
	fclose(ofp);
	return 0;
}
