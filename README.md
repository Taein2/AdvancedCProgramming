# Advanced_C
## 1. 프로젝트 개요
### 1-1. 프로젝트 목적
학생들이 복수전공을 신청하고 취소하기 위한 서비스를 기획한다.  

### 1-2. 프로젝트 기능
학생들에 정보에서 해당하는 학생의 복수 전공 신청과 취소를 할 수 있는 기능이 있다. 신청과 취소한 내용을 확인 할 수 있으며, 전공 개수를 가진 학생들의 목록을 볼 수 있다. 전체 학생들의 리스트 또한 볼 수 있다.

## 2. 프로젝트 설명 (소스 코드 캡처 포함 아주 상세히 설명)
### 2-1. 입/출력 파일 형식 설명

입출력 파일은 input.txt로 Dev c++에서 인코딩문제로 비ANSI 타입을 지원하지 않는다고 하여서 system ("chcp 65001");를 메인에 선언후 utf-8 타입으로 하려했으나, 이렇게 하면 텍스트 파일의 한글은 읽히지만 c에 작성한 한글들이 제대로 읽히지 않아 ANSI 형태로 텍스트 파일을 생성하였습니다. 

![image](https://user-images.githubusercontent.com/66376774/105230823-4b8c0400-5ba9-11eb-81d3-ab773eebd58e.png)

while 루프를 돌려서 다시 되돌아올때마다 cal_row , read_student 함수에서 파일을 읽어 구조체 동적 배열에 저장하고 각 구조체 변수마다 값을 할당해주는 형식으로 만들었습니다.

![image](https://user-images.githubusercontent.com/66376774/105230859-58105c80-5ba9-11eb-8fe2-d95bce0680f4.png)

char 는 동적할당을 하였습니다. int와 double은 char 로 파일을 읽은 것을 atoi atof를 이용해 형식에 맞게 변환 지정해주었습니다. 

![image](https://user-images.githubusercontent.com/66376774/105230864-59da2000-5ba9-11eb-8f78-b23cd7c8069f.png)
![image](https://user-images.githubusercontent.com/66376774/105230867-5ba3e380-5ba9-11eb-8ef3-d97b40889f91.png)

메뉴에서 복수 전공 신청과 복수 전공 취소를 하면 수정내용을 파일에 쓰도록 write_file 함수를 만들었습니다. 

![image](https://user-images.githubusercontent.com/66376774/105230870-5cd51080-5ba9-11eb-8f22-2421639b1fc3.png)

복수 전공 신청시에 처리되는 add는 해당 구조체에서 major(전공),semester(학기)를 가지고 함수로 들어가게 됩니다. semester는 학기 제한 조건에 사용되며 major는 ,를 기준으로 구분되어있기에 strtok 함수를 이용하며 문자열 분리를 진행하였습니다. 또한, strcmp == 0 즉 신청 전공과 이미 가지고있는 전공이 같은 경우에 수행되는 제한 조한과 전공의 개수를 cnt로 세서 복수전공의 개수가 2개 이상인경우에 수행 되는 제한 조건을 구현하였습니다.

![image](https://user-images.githubusercontent.com/66376774/105230876-5e9ed400-5ba9-11eb-9d6a-cff0fed6d43a.png)

복수 전공 취소는 신청과 마찬가지로 major을 인자로 받지만 semester의 제약 조건은 없기때문에 인자를 1개 가지는 함수로 작성하였습니다. realloc을 통해 major의 현재 string 갯수를 체크하고 재할당 하는 방식으로 작성하였습니다.

![image](https://user-images.githubusercontent.com/66376774/105230878-61012e00-5ba9-11eb-95f7-cd3043dacdc6.png)

검색은 st 구조체를 인자로 갖고, cnt 는 입력받은 전공 갯수이며 이에 해당하는 count 변수를 strtok로 major를 나누어 count와 cnt가 같을시에 출력하는 방식으로 하였습니다. 

![image](https://user-images.githubusercontent.com/66376774/105230888-63638800-5ba9-11eb-8be3-61e2a27ecd4f.png)

전체출력은 all로 st를 인자로 갖고 row를 가지며 row만큼 출력하도록 하였습니다. 하여, txt의 전체를 출력하게 됩니다.

![image](https://user-images.githubusercontent.com/66376774/105230895-652d4b80-5ba9-11eb-9214-c2031237c9d1.png)

구조체 구성이며 union으로 studentId와 residentNumber를 갖습니다. 둘다 유일하게 학생들을 구분할 수 있는 데이터형태입니다. 기본적인 사항들을 student안에 선언하였으며, 구조체 안에 구조체 형태로 학교에서 상세한 정보들을 가지는 state 구조체로 구성하였습니다.


## 3. 실행 결과 예시
### 3-1. 실행 결과 예시 (실행 결과 캡처 화면)

전체 출력

![image](https://user-images.githubusercontent.com/66376774/105230903-66f70f00-5ba9-11eb-9526-94d09b241a2e.png)

3-1) 이수학기 2 이상 8 이하 

![image](https://user-images.githubusercontent.com/66376774/105230910-68283c00-5ba9-11eb-8d94-b44fec8c9296.png)

3-2) 주전공 제외 복수전공 2개까지, 이미 전공으로 갖지 않은 전공에 대해서 선택

![image](https://user-images.githubusercontent.com/66376774/105230913-69f1ff80-5ba9-11eb-93e9-25ebcd388c98.png)

조건에 부합될 시 (복수 전공 신청 완료)

![image](https://user-images.githubusercontent.com/66376774/105230921-6bbbc300-5ba9-11eb-8fd2-d6c89b99ccd2.png)

3-2. 복수 전공 취소

![image](https://user-images.githubusercontent.com/66376774/105230925-6d858680-5ba9-11eb-8999-c48081ee4eae.png)

현재 전공을 제외한 복수전공의 목록이 나옴
번호로 선택

![image](https://user-images.githubusercontent.com/66376774/105230930-6fe7e080-5ba9-11eb-9a21-a34fc0664868.png)

해당 번호의 복수 전공이 취소됨
주전공을 취소할수 없는 기준외에 복수전공 취소의 조건은 없음

![image](https://user-images.githubusercontent.com/66376774/105230935-71190d80-5ba9-11eb-9f6b-d18402739a4e.png)

3-3. 검색하기
전공 개수로 검색 기능

![image](https://user-images.githubusercontent.com/66376774/105230942-724a3a80-5ba9-11eb-8586-d2f0b4bfb8ec.png)

3-4. 전체 출력

![image](https://user-images.githubusercontent.com/66376774/105230948-7413fe00-5ba9-11eb-9e72-fe7d8f7cd462.png)
