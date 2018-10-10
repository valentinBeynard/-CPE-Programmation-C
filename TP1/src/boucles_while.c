#include<stdio.h>

int main(){
        int count = 15;

        printf("*\n");
        printf("**\n");

        int i=2;
        int j=0;
        while(i < count)
        {
                printf("*");
                while(j < i-1)
                {
                        if(i == count-1)
                        {
                                printf("*");
                        }else{
                                printf("#");
                        }
			j++;
                }
		j=0;
                printf("*\n");
		i++;
        }

        return 0;
}

