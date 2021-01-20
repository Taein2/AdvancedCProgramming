#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LIST_SIZE 6
#define MAX_BUFF 256

// 복수전공 신청 서비스 
typedef struct {			//*****student*****
	union{
		int studentId;				//학번 	
		int residentNumber;	//주민번호 
 	}u;
 	char *studentName;	//이름 
 	char *gender;			//성별 (M/F)
 	char *major;			//전공
 	int tell;				//번호
 	char *address;			//주소 
	struct{
		int grade;				//학년 
		int semester;			//이수학기 
		float cgpa;				//학점
	}state; 
}student;



char *add(char *major, int semester){
	char *list[LIST_SIZE] = {"물리학과","경영학과","경제학과","컴퓨터공학과","기계공학과","전자공학과"};
	printf("현재 전공은 %s 이수 학기는 %d 학기 입니다.\n",major,semester);
	if(semester > 1 && semester <9){
		int i;
		printf("*****************************\n");
			printf("신청 가능한 전공리스트입니다.\n");
			for(i=0; i<LIST_SIZE; i++){
				printf("%d %s\n", i+1,list[i]);
			}
		printf("*****************************\n");
		int select;
		printf("전공 번호 선택 : ");
		scanf("%d",&select);
		if(select >0 && select <7){
			int len = strlen(major);
			char *str = (char *)malloc(sizeof(char) * len);
			strcpy(str,major);
			
			char *ptr = strtok(str, ",");
			int flag = 0, cnt=0;
			while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
   			{
   				++cnt;
   				if(strcmp(ptr,list[select-1]) == 0 || cnt > 2) {	//안되는 경우		복수전공 2개 이상, 같은 전공 신청한 경우  
   					flag = 1;
   					printf("\n복수전공이 2개 이상이거나 이미 선택한 전공을 고르셨습니다. \n"); 
   					break;
				}
     		   	ptr = strtok(NULL, ",");      // 다음 문자열을 잘라서 포인터를 반환
    		}
			if(flag == 0){
				printf("\n%s 전공을 선택하셨습니다\n\n",list[select-1]);
				major = (char *)realloc(major,len+strlen(list[select-1])+2);
				char ch[20] = ",";
				strcat(ch,list[select-1]); 
				strcat(major,ch);			
			}
			
			free(str);
		}

	}else{
		printf("\n신청 대상이 아닙니다.(2학기 ~ 8학기 신청)(최대 2개 신청 가능)\n\n");
	}

	return major;
}




char *del(char *major){
	int count,n,len=0;
	len = strlen(major);
	char *str = (char *)malloc(sizeof(char) * len);
	strcpy(str,major);
	char *ptr = strtok(str, ",");  
	while (ptr != NULL)           
	{	
		++count;  
		if(count > 1){
			printf("%d %s\n",count-1,ptr);			
		}
   		ptr = strtok(NULL, ",");
	}
		
	if(count == 1){
		printf("복수 전공 신청부터 하세요\n");
	}else{
		printf("취소할 전공을 고르세요(주전공 제외) : ");
		scanf("%d",&n);
		if(n >0 && n < count){		//취소할거 고름 
			count = 0;
			len = 0;
			strcpy(str,major);
			char *p = strtok(str, ",");  
			len = strlen(str);
			printf("%s",str);
			while (p != NULL)           
			{	
				++count;  
				if(count-1 == n){
				}else if(count == 1){
					major = (char *)realloc(major,len);
					strcpy(major,p);
				}else{
					len += strlen(p)+1;
					major = (char *)realloc(major,len);
					strcat(major,",");
					strcat(major,p);
				}
   				p = strtok(NULL, ",");
			}
			
				
		}
	} 
	free(str);
	return major;
}



void search(student *st,int cnt,int row){
	int i,j,count,flag=1;
	char *l[9] = {"학번or주민번호","이름","성별","전공","번호","주소","학년","이수학기","학점"};
	for(i=0; i<row; i++){
		count =0;
		int len = strlen(st[i].major);
		char *str = (char *)malloc(sizeof(char) * len);
		strcpy(str,st[i].major);
		char *ptr = strtok(str, ",");     
		while (ptr != NULL)           
		{	
   			ptr = strtok(NULL, ",");      
   			++count;
		}
		if(count == cnt){	
			if(flag == 1){
			
			for(j=0; j<9;j++){
				if(j==4 || j==7 || j== 8 || j==6){
					printf("%11s ",l[j]);
				}else if(j==1 || j==2){
					printf("%10s ",l[j]);				
				}else if(j==3|| j==5){
					printf("%40s ",l[j]);
				}else{
					printf("%20s ",l[j]);		
					}
				}
				flag = 0;
				printf("\n");
			}
			printf("\n%20d %10s %10s %40s %011d %40s %11d %11d %11.2f\n",st[i].u.residentNumber, st[i].studentName, st[i].gender, st[i].major, st[i].tell, st[i].address, st[i].state.grade, st[i].state.semester, st[i].state.cgpa);
		}
	}
	
}



void all(student *st,int row){
	int i;
	char *l[9] = {"학번or주민번호","이름","성별","전공","번호","주소","학년","이수학기","학점"};
	for(i=0; i<9;i++){
		if(i==4 || i==7 || i== 8 || i==6){
			printf("%11s ",l[i]);
		}else if(i==1 || i==2){
			printf("%10s ",l[i]);				
		}else if(i==3|| i==5){
			printf("%40s ",l[i]);
		}else{
			printf("%20s ",l[i]);		
		}
	}
	printf("\n");
	for(i=0; i<row; i++){
		printf("\n%20d %10s %10s %40s %011d %40s %11d %11d %11.2f\n",st[i].u.studentId, st[i].studentName, st[i].gender, st[i].major, st[i].tell, st[i].address, st[i].state.grade, st[i].state.semester, st[i].state.cgpa);		
			
	}
		
}


void write_file(student *st,int row){
	FILE *file = fopen("input.txt","w");	
	int i;
	for(i = 0; i< row; i++){
		
		fprintf(file,"%20d\t%s\t%s\t%s\t%011d\t%s\t%d\t%d\t%0.2f",st[i].u.residentNumber, st[i].studentName, st[i].gender, st[i].major, st[i].tell, st[i].address, st[i].state.grade, st[i].state.semester, st[i].state.cgpa);		
		if(i != row-1){
			fprintf(file,"\n");
		}
	
	}
	
	fclose(file);
		
}
int cal_row(){
	int row=0;
	FILE *file = fopen("input.txt","r");
	if(file != NULL){	
		char buff[MAX_BUFF];
		while(fgets(buff,sizeof(buff),file) != NULL){
			++row;
		}
		fclose(file);
	}
	return row;
}

student *read_student(int row){
	int i,j,col;
		student *st = (student *)malloc(sizeof(student) * (row+1));
		FILE *file = fopen("input.txt","r");
		if(file != NULL){
			char buff[MAX_BUFF];
			i=0; 
			while(fgets(buff,sizeof(buff),file) != NULL){
				j=0; 
				char *p = strtok(buff,"\t");
				if(j==0){
					st[i].u.studentId = atoi(p);
				}
				while(p != NULL){
					if(j==1){
						col = strlen(p);
						st[i].studentName = (char *)malloc(sizeof(char) * (col+1));
						strcpy(st[i].studentName,p); 					
					}else if(j==2){
						col = strlen(p);
						st[i].gender = (char *)malloc(sizeof(char) * (col+1));
						strcpy(st[i].gender,p); 					
					}else if(j==3){
						col = strlen(p);
						st[i].major = (char *)malloc(sizeof(char) * (col+1));
						strcpy(st[i].major,p); 						
					}else if(j==4){
						st[i].tell = atoi(p);
					}else if(j==5){
						col = strlen(p);
						st[i].address = (char *)malloc(sizeof(char) * (col+1));
						strcpy(st[i].address,p);
					}else if(j==6){
						st[i].state.grade = atoi(p);
					}else if(j==7){
						st[i].state.semester = atoi(p);
					}
					else if(j==8){
						st[i].state.cgpa = atof(p);
					}
					p = strtok(NULL,"\t");
					++j;
				}
				++i;
			}
				fclose(file);
		}
		return st;
}
int main(){
	int i=0, row, n,cnt;
	int j,num;

	student *st = NULL;
	while(1){		
		row = cal_row();
		st = read_student(row);
		printf("*******************************************************************\n");
		printf("1. 복수 전공 신청 2. 복수 전공 취소 3. 검색하기 4. 전체 리스트 출력\n");
		printf("*******************************************************************\n");
		printf("번호 입력 : ");
		scanf("%d",&n);
		if(n == 1){
			printf("학번or주민번호 입력 : ");
			scanf("%d",&num);
			for(i=0; i<row; i++){
				if(num == st[i].u.residentNumber || num == st[i].u.studentId){
						st[i].major = add(st[i].major, st[i].state.semester);
						
						printf("현재 전공 : %s\n",st[i].major);
				}
			}
			write_file(st,row);

		}else if(n == 2){
			printf("학번or주민번호 입력 : ");
			scanf("%d",&num);
			for(i=0; i<row; i++){
				if(num == st[i].u.residentNumber || num == st[i].u.studentId){
						st[i].major = del(st[i].major);							
								
						printf("현재 전공 : %s\n",st[i].major);
				}
			}
			write_file(st,row);

		}else if(n == 3){
			printf("전공 개수로 검색(1,2,3) : ");
			scanf("%d",&cnt);
			if(cnt >0 && cnt <4){
				search(st,cnt,row);	
			}
		}else if(n == 4){
			all(st,row);
		}
	}
	
	free(st[i].studentName);
	free(st[i].gender);
	free(st[i].major);
	free(st[i].address);
	free(st);
	
	return 0;
}
