#include<stdio.h>

struct employee{
 int id;
 char name[50];
 float basicsalary;
 float hra;
 float da;
 float grosssalary;
};

struct employee emp[100];
int count=0;

void addemployee(){
 printf("\nenter employee ID:");
scanf("%d",&emp[count].id);

printf("enter name:");
scanf("%s",emp[count].name);

printf("enetr basic salary:");
scanf("%f",&emp[count].basicsalary);

emp[count].hra=0.20*
emp[count].basicsalary;
emp[count].da=0.10*
emp[count].basicsalary;

emp[count].grosssalary=emp[count].basicsalary+emp[count].hra+emp[count].da;

count++;
printf("employee added successfully!\n");
}

void displayemployee(){
if(count==0){
    printf("\nNo records found!\n");
    return;
}

printf("\nemployee records:\n");
for(int i=0;i<count;i++){
    printf("\nID:%d",emp[i].id);
    printf("\nName:%s",emp[i].name);
    printf("\nbasic salary:%.2f",emp[i].hra);
    printf("\nHRA:%.2f",emp[i].hra);
    printf("\nDA:%.2f",emp[i].da);
    printf("\ngross salary:%.2f\n",emp[i].grosssalary);
}
}

int main(){
 int choice;

 do{
        printf("\n---employee management system---");
 printf("\n1.add employee");
 printf("\n2.display employees");
 printf("\n3.exit");
 printf("\nenetr your choice:");
 scanf("%d",&choice);

 switch(choice){
 case 1:
     addemployee();
     break;
 case 2:
    displayemployee();
    break;
 case 3:
    printf("exiting program...");
    break;
 default:
    printf("invalid choice!");
    }
 }while(choice!=3);

 return 0;
}
