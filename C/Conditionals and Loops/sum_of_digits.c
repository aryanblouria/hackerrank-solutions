#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n;
    scanf("%d", &n);
    
    int sum = 0, digit = 0;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
