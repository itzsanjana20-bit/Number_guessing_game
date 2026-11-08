//Project:Number guessing game
//Name:Sanjana Kumari
//college id:B226055
//Year:1st 



#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    printf("Yo! excited players , lets dive in into game of guessing number from 1 to 100\n")
    int random,guess,no_of_attempts;
    random = rand()*100 +1;
    char k;
    no_of_attempts=0;

    printf("whats your level!? enter d for difficult and e for easy \n");
    scanf(" %c",&k);

    do{
        printf("enter your guess\n");
        scanf("%d",&guess);
        no_of_attempts++;

        if(k=='d'){
            if(guess==random){
                printf("yeah champion you are! you guessed it correct\n");
            }

            else if(no_of_attempts==5){
                printf("sorry, you lost this game. better luck next time\n")
                return 0;
            }
        }

        else if(k=='e'){
            if(guess==random){
                printf("congo! gueesed right\n");
                printf("your score is %d \n",no_of_attempts);
            }

            else if(guess<random){
                printf("guess a larger number\n");
            }
            if(guess>random){
                printf("guess a smaller number\n");
            }
        }
        else{
            printf("Invalid input level");
        }

    }
    while(guess!=random);
    

    return 0;
}

