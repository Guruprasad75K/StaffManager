#include <stdio.h>
#include <string.h>
#include<stdbool.h>
struct Employee{
    char name[30];
    int id;
    char role[20];
};

int main(){
    struct Employee emp[20];
    int select,n,i,x,y,toDelete;
    char temp[20];
    printf("Enter the number of Employees: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        emp[i].id=i;
        printf("Enter Employee name: ");
        scanf("%s",temp);
        strcpy(emp[i].name,temp);
        printf("Enter Employee role: ");
        scanf("%s",temp);
        strcpy(emp[i].role,temp);    
    }
    printf("Employee Table Created");
    
    while (true){
    printf("1.Print Employee Table\t 2.Insert New Entries \n3.Delete The Entries \t 4.Search A Record\n5.Exit \n");
    printf("Select operation: \n");
    scanf("%d",&select);

    if(select == 1){
        printf("Employee Table\n");
        printf("Id Name\t\t Role\n");
        for(i=1;i<=n;i++){
            printf("%d  %s\t\t %s\n",emp[i].id,emp[i].name,emp[i].role);
        }
    }

    else if(select == 2){
        printf("Enter the number of New Entries: ");
        scanf("%d",&y);
        x=n+1;
        n+=y;
        for(i=x;i<=n;i++){
            emp[i].id=i;
            printf("Enter Employee name: ");
            scanf("%s",temp);
            strcpy(emp[i].name,temp);
            printf("Enter Employee role: ");
            scanf("%s",temp);
            strcpy(emp[i].role,temp);
        }
    }

    else if(select == 3){
        printf("Enter the ID of the employee to be deleted: ");
        scanf("%d",&toDelete);
        if(toDelete>0 && toDelete<=n){
            n-=1;
            for(i=toDelete;i<=n;i++){
                emp[i]=emp[i+1];
            }
        }
        else{
            printf("Invalid Input\n");
        }
        
    }

    else if(select == 4){
        printf("Enter the ID of the employee to be searched: ");
        scanf("%d",&x);
        printf("Employee name: ",emp[x].name);
        printf("Employee role: ",emp[x].role);
    }

    else if(select == 5){
        break;
    }

    else{
        printf("Invaid Input\n");
    }

    }
    return 0;
}