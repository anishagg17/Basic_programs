#include<stdio.h>
int main(){
	long long N;
	scanf("%lld",&N);
	printf("THE REVERSED NUMBER IS :");
	while(N>0){
		printf("%d",N%10);
		N/=10;
	}
	//The reversing of the number is very useful in finding if the number is a palindrome or not -->
}
