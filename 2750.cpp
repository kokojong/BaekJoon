#include <stdio.h>
// 선택정렬로 풀어보기
 


int array[1001];

int main(){
	int number, i, j, min, index,tmp;
	scanf("%d",&number);
	for(i=0;i<number;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<number;i++){
		min = 1001; // 최대값인 1000보다 큰값
		for(j=i; j<number;j++){
			if(min>array[j]){
				min=array[j];
				index=j;
			}
		}
		tmp = array[i];
		array[i]=array[index];
		array[index] = tmp; 
	}
	
	for(i=0;i<number;i++){
		printf("%d\n",array[i]);
	}
	return 0;
}
