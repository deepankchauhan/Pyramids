#include <stdio.h>

int main(void)
{
    int height, rows;
	// this prompts user to give an input
    do
    {
		printf("height: ");
        while(scanf("%d", &height) != 1)
        {
            printf("height: ");
            while(getchar() != '\n');
        }    
    }
    while (height < 1 || height > 23);

    // logic
    for (rows = 0; rows < height; rows++)
    {
        // this adds space before the '#'
        for (int space = (height - rows) - 1; space > 0; space--)
        {
            printf(" ");
        }

        // the loop for iterating the '#'
        for (int hash = 0; hash <= rows; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int hash = 0; hash <= rows; hash++)
        {
            printf("#");
        }
        printf("\n");

    }

}
