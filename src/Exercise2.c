/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int n = atoi(argv[1]);
	int result;
	//Your codes here
	#include <stdio.h>
int pro; 
pro=1; 
    if (n%2==0) {
        for(int i=2; i<=n; i=i+2)
        pro=pro*i;
    }
else
{
    for int(i=1; i<=n; i=i+2)
    pro=pro*1; 
}
result=pro;
printf("%d",result);
return 0;
}

