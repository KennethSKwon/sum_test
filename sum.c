#include "sum.h"   //같은 디렉토리는  <> 대신에 따옴표
int sum(int n){
	//여기에 함수를 더해서 리턴하는 코드를 짬	
	int res=0;   // 리턴으로 돌려줄 값을 저장할 변수
	for(int i=1; i<=n; i++){ res+=i; }   // i=0으로 선언하는 습관은 유의해야함. 처음은 i=1이어야 정상적인 덧셈이됨.
	return res;
}
