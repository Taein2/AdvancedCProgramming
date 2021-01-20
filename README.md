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

![image](https://user-images.githubusercontent.com/66376774/105230864-59da2000-5ba9-11eb-8f78-b23cd7c8069f.png)

![image](https://user-images.githubusercontent.com/66376774/105230867-5ba3e380-5ba9-11eb-8ef3-d97b40889f91.png)

![image](https://user-images.githubusercontent.com/66376774/105230870-5cd51080-5ba9-11eb-8f22-2421639b1fc3.png)

![image](https://user-images.githubusercontent.com/66376774/105230876-5e9ed400-5ba9-11eb-9d6a-cff0fed6d43a.png)

![image](https://user-images.githubusercontent.com/66376774/105230878-61012e00-5ba9-11eb-95f7-cd3043dacdc6.png)

![image](https://user-images.githubusercontent.com/66376774/105230888-63638800-5ba9-11eb-8be3-61e2a27ecd4f.png)

![image](https://user-images.githubusercontent.com/66376774/105230895-652d4b80-5ba9-11eb-9214-c2031237c9d1.png)

![image](https://user-images.githubusercontent.com/66376774/105230903-66f70f00-5ba9-11eb-9526-94d09b241a2e.png)

![image](https://user-images.githubusercontent.com/66376774/105230910-68283c00-5ba9-11eb-8d94-b44fec8c9296.png)

![image](https://user-images.githubusercontent.com/66376774/105230913-69f1ff80-5ba9-11eb-93e9-25ebcd388c98.png)

![image](https://user-images.githubusercontent.com/66376774/105230921-6bbbc300-5ba9-11eb-8fd2-d6c89b99ccd2.png)

![image](https://user-images.githubusercontent.com/66376774/105230925-6d858680-5ba9-11eb-8999-c48081ee4eae.png)

![image](https://user-images.githubusercontent.com/66376774/105230930-6fe7e080-5ba9-11eb-9a21-a34fc0664868.png)

![image](https://user-images.githubusercontent.com/66376774/105230935-71190d80-5ba9-11eb-9f6b-d18402739a4e.png)

![image](https://user-images.githubusercontent.com/66376774/105230942-724a3a80-5ba9-11eb-8586-d2f0b4bfb8ec.png)

![image](https://user-images.githubusercontent.com/66376774/105230948-7413fe00-5ba9-11eb-9e72-fe7d8f7cd462.png)
