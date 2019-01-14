#include <stdio.h>

int main(void)
{
    int height, rows;
    // this prompts the user to give an input
    do
    {

        do
        {
            printf("height: ");
            while(getchar() != '\n');
        }
        while(scanf("%d",&height) != 1);
    }
    while (height < 1 || height > 23);

    // logic
    for (rows = 0; rows < height; rows++)
    {
        // this adds space before the '#'
        for (int space = (height - rows) - 1; space > 0; space-- )
        {
            printf(" ");
        }
        // this adds the '#'
        for (int hash = 0; hash <= rows + 1; hash++)
        {
            printf("#");
        }
        // moves it to the next line
        printf("\n");
    }

    return 0;
}
