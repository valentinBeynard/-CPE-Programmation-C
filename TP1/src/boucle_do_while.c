#include<stdio.h>

int main(){
        int count = 15;

        printf("*\n");
        printf("**\n");

        int i=2;
        int j=0;
        do
        {
                printf("*");
                do
                {
                        if(i == count-1)
                        {
                                printf("*");
                        }else{
                                printf("#");
                        }
                        j++;
                }while(j < i-1);
                j=0;
                printf("*\n");
                i++;
        }while(i < count);

        return 0;
}

