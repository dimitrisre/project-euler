#include<stdio.h>

int main(){
	int curEven=2, prevEven=0, nextEven=0, sum=0;

	//dont go throw every fibonacci number
	//find only the evens
	while(curEven <= 4000000){
		//compute the sum
		sum += curEven;
		
		//find the next even
		nextEven = curEven*4 + prevEven;
		prevEven = curEven;
		curEven = nextEven;

	}

	printf("Sum = %d\n", sum );
	return 0;
}