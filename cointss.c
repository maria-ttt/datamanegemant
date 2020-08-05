#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i;
    char str[10];
    int num,c1=0,c2=0;

    printf("Who are you?");
    scanf("%s",str);
    printf("Hello,%s!\n",str);

    printf("Tossing a coin...\n");

    srand((unsigned int)time(NULL)); 
    for(i=1;i<4;i++){
        printf("Round %d : ",i);

        num=rand()%2+1;

        switch (num){
        case 1:
            printf("Heads\n");
            c1++;
            break;
        case 2:
            printf("Tails\n");
            c2++;
            break;    
        
        default:
           break;
        }
    }

        if(c1>c2){
            printf("%s won!\n",str);
        }
        else{
            printf("%s lose!\n",str);
        }
    return 0;
}