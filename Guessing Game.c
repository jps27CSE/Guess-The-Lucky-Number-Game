#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int main()
{

    time_t t;

    srand((unsigned)time(&t));

    int user_input;

    int lucky_number = rand() % 10 + 1;
    

    while(true)
    {
        printf("Guess The Lucky Number between 1 to 10 : ");
        scanf("%d",&user_input);

        if(lucky_number==user_input)
        {
            printf("Congratulation !");

            break;
        }


    }
}