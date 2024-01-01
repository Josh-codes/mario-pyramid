#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0 || height > 8);

    for (int i = 0; i < height; i++)
    {
        // Print spaces before the left pyramid
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes for the left pyramid
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        // Print the gap between pyramids
        printf("  ");

        // Print hashes for the right pyramid
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        // Move to the next line after completing one level of the pyramid
        printf("\n");
    }
}
