#include <stdio.h>

int main(void)
{
	int i,num;

	printf("num = "); scanf("%d",&num);

	for(i=1;i<=num;i++){
		
		if((i%3 == 0) && (i%5 == 0)){
	    	printf("FizzBuzz\n");
	        continue;
        }

        if(i%3 == 0){
	        printf("Fizz\n");
	        continue;
        } 
        
        if(i%5 == 0){
        	printf("Buzz\n");
        	continue;
        }
	    
        printf("%d\n",i); 
	    
	}

    return 0;
}


