#include<stdio.h>

int main(){
	int i=3, j=5, sum=0, step5=5;
	//dont loop all the numbers until 1000
	//loop only the multiples
	//
	//1000/5 = 200 < 999/3 = 333
	//so we count in our loop with i multiples
	//
	//333 loops
	while(i<=999){
		//dont include the multiples of 5
		//because we will count this on 5
		if(i%5 != 0){
			sum += i;
		}
		
		//just add the multiple of 5
		sum += j;	
		
		//if the next multiple will be above 995
		//dont count multiple of 5 any more
		if(j>=995){
			j=0;
			step5=0;
		}

		//next multples for 5 and 3 too
		j+=step5;
		i+=3;
	}

	printf("Sum = %d\n",sum);
}