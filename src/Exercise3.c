/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	#include<stdio.h>

void primefactors(int num)
{
    int count;

    printf("\nPrime Factors of %d are ..\n", num);
    for(count = 2; num > 1; count++)
    {
        while(num % count == 0)
        {
            printf("%d ", count);
            num = num / count;
        }
    }
    printf("\n");
}

int main()
{
    int num;

    printf("Enter a positive integer\n");
    scanf("%d", &num);

    primefactors(num);

    return 0;
}
	