#include <stdio.h>

int numbers[10] = {1,2,3,4,5,6,7,8,9,10};

int main()
{
    int sum = 0;
    for (int i = 0; i < 10; i ++) {
        sum = sum + numbers[i];
    }
    
    printf("The total is %d", sum);
    
    return 0;
}