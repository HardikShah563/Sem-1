 #include<stdio.h>
 #define N 10
 int main ()
 {
      int a[N],i,key,count=0;
      printf("enter %d integer numbers \n",N);
      for ( i=0;i<N;i++)
        scanf("%d",&a[i]);
      printf("enter the number that is to be searched \n");
        scanf("%d",&key);
        printf("\n");
    for (i=0;i<N;i++)
    {
        if (a[i]==key)
        {
            printf("%d has has appeared in the position %d in the array \n",key,i+1);
            count++;
        }
    }
      printf("\n final result: %d has appeared %d times in the array \n",key,count);
      printf("\n");
 }
