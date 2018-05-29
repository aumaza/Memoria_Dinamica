#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int* vector;
    //int vector[10];

    vector = malloc(sizeof(int)*10);

    //if(vector!=NULL)

    for (i=0; i<10; i++)
    {
        *(vector+i) = i+1;

    }

    for(i=0; i<10; i++)
    {
        printf("\n%d", *(vector+i));
    }

    return 0;
}
