#include <stdio.h>
#include<malloc.h>
int bubble(int *array,int num);
int main()
{
    int *array;
    array=(int*)malloc(sizeof(int));
    int i,num;
 
    printf("Enter the value of num \n");
    scanf("%d", &num);
    printf("Enter the elements one by one \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    bubble(array,num);
	return 0;
}
int bubble(int *array,int num)
{
    int i,j,temp,flag;
    for (i = 0; i < num; i++)
    {   
        flag =0; 
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                flag=1;
            }
        }
        if(flag == 0)
           break;
    }
    printf("Sorted array is\n");
    for (i = 0; i < num; i++)
        printf("%d\n", array[i]);
}
