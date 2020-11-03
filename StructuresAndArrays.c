#include <stdio.h>
struct employe
{
    char name[20];
    int employeId;
    int exprience;
    int salary;
};
 int main()
 {
     struct employe e[4];
     int i;
     for(i=0;i<=4;i++)
     {
         printf("enter employes %d name \n",i+1);
         scanf("%s",e[i].name);
         printf("enter employes %d id \n",i+1);
         scanf("%d",&e[i].employeId);
         printf("enter employes %d exprience \n",i+1);
         scanf("%d",&e[i].exprience);
         printf("enter employes %d salary \n",i+1);
         scanf("%d",&e[i].salary);


     }
     printf("\n");

    printf("Name \t employeid \t exprience \t salary \n");

     for(i=0;i<=4;i++)
     {
        printf("%s \t %d \t \t %d \t \t %d \n ",e[i].name,e[i].employeId,e[i].exprience,e[i].salary);
     }
 }

