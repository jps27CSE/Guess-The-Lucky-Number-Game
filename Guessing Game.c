#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int main()
{

    time_t t;

    printf("\t\t\t\t\t\tGuess The Lucky Number");
    printf("\n\t\t\t\t\t\tDeveloped By Jack Pritom Soren");
    printf("\n\t\t\t\t\t\tVersion:- 2.0\n\n\n");

    srand((unsigned)time(&t));

    int user_input,chance=4;

    bool is_loss=true;

    int lucky_number = rand() % 10 + 1;

    printf("You have only 4 chances\n\n");
    

    while(chance > 0)
    {
        printf("Guess The Lucky Number between 1 to 10 : ");
        scanf("%d",&user_input);

        if(lucky_number==user_input)
        {
            printf("Congratulation !");

            is_loss=false;

            break;
        }

        chance --;


    }

    if(is_loss)
    {
        printf("You have Loss! Lucky number is %d\n",lucky_number);
    }
}