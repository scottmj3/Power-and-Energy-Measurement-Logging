#include <stdio.h>
int main() {
	int i = 1001;
	printf("Start");
	
	time_t t;
	time_t time1=0;

  	time ( &t );
  	printf ( "Current local time and date: %d\n", ctime(&t));
  	time1=t;
	
	while (i < 1000) {
		// printf("%d", i);
		i--;
	}
	printf("End");
	
	time ( &t );
	// timeinfo = localtime ( &rawtime );
  	printf ( "Current local time and date: %d\n", ctime(&time1);
  	printf ( "Current local time and date: %d\n", ctime(&t));
}
