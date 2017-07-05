#include <stdio.h>   // 보통 헤더파일 순서는 일반적인 헤더파일을 앞으로. 개인적인건 뒤로.
#include "sum.h"   // 사용할  sum함수가 정의되어있음을 헤더파일로 명시

int main(){
		int s= sum(100);
		printf("%d\n",s);
		return 0;
}
