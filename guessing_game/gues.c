#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int replay();
int main(int argc, char argv)
{
    char replayChoice;

    do
    {
        if (replay() == 0)
        {
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &replayChoice);
        }
        else
        {
            break;
        }
    } while (replayChoice == 'y' || replayChoice == 'Y');

    printf("Goodbye!\n");

    return 0;
}

int replay(void)
{
	int msnum=0;
	int num=0, no = 5, n = 1;
	char p;
	const int MAX = 100, MIN = 1;
	srand(time(NULL));
	msnum = (rand() % (MAX - MIN + 1)) + MIN;
	do 
	{
		printf("\n\nEnter the number : ");
		scanf("%d",&num);
		if (no >= 0)
		{
			no--;
			if (no == 0)
			{
				printf("\nyou have done all your chanses\n\n");
				return 0;

			}
			
			if (num > msnum)
			{
				printf("\nlesser\n");
				printf("\nyou steel have %d chances", no);
				
			 

			}
			else if (num < msnum )
			{
				printf("\nGreater\n");
				printf("\nyou steel have %d chances", no);
			}			
			else if (num == msnum)
			{
				printf("\n\ngreat job you find the number ");
				break;
			}
		}
	}
	while (num != msnum);
}

