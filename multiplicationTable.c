#include <stdio.h>


int main(int argc, char const *argv[])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j <= 10; j++){
            printf("%d X %d = %d\n", i, j, i*j);
            if (j == 10){
                printf("\n");
            }
            
        }
    }
    
    return 0;
}
