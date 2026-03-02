#include <stdio.h>
int fac(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n * fac(n-1);
	}
}
int fib(int n){
	if(n <= 2){
		return 1;
	}
	else{
		return fib(n-1) + fib(n-2);
	}
}

int main() {
	printf("%d\n", fac(5));
	printf("%d\n", fib(7));
}

