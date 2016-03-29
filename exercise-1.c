//Create an int array with 100 elements. Fill the members by calling rand().
#include<stdio.h>
int main(void)
{
int arr[100];
int i=0;
int *ptr=NULL;
ptr=&arr;

for(i=0;i<=100;i++)
{
    arr[i]=rand()%100;
}
for(i=0;i<=100;i++)
{
printf("array index is %3d array content for this index using index is %08d using pointer is %08d \n",i,arr[i],*(ptr+i));
}
for(i=0;i<=100;i++)
{
    *(ptr+i) += 5;
    printf("array index is %3d new array content for this index using index is %08d using pointer is %08d \n",i,arr[i],*(ptr+i));
    
}

return 0;
}

