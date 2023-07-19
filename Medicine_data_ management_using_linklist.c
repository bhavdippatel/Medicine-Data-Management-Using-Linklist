#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node
{
char name[200];
char shop[200];
char num[10];
char place[200];
struct node*next;
struct node*prev;
};
struct node *head=NULL;
insert_detail()
{
    char nameinsert[200];
    char shopinsert[200];
    char numinsert[10];
    char placeinsert[200];

    struct node*ptr;
    ptr=(struct node *) malloc(sizeof(struct node));

    printf("\nEnter the mediciane Name     : ");
    while((getchar())!='\n');
    scanf("%[^\n]%*c",nameinsert);

    printf("\nEnter the shop Name          : ");
    scanf("%[^\n]%*c",shopinsert);

    printf("\nEnter the number of mediciane: ");
    scanf("%[^\n]%*c",numinsert);

    printf("\n -------------------- \n");
    printf("\n 1. Ahmedabad \n 2. Amreli \n 3. Anand \n 4. Aravalli \n 5. Banaskantha \n 6. Bharuch \n 7. Bhavnagar \n 8. Botad \n 9. Chhota Udepur \n 10. Dahod \n 11. Dangs \n 12. Devbhoomi Dwarka \n 13. Gandhinagar \n 14. Gir Somnath \n 15. Jamnagar \n 16. Junagadh \n 17. Kachchh \n 18. Kheda \n 19. Mahisagar \n 20. Mehsana \n 21. Morbi \n 22. Narmada \n 23. Navsari \n 24. Panchmahal \n 25. Patan \n 26. Porbandar \n 27. Rajkot \n 28. Sabarkantha \n 29. Surat \n 30. Surendranagar \n 31. Tapi \n 32. Vadodara \n 33. Valsad ");
    printf("\n -------------------- \n");
    printf("Enter the nearest place Name   : \n");
    scanf("%[^\n]%*c",placeinsert);

    strcpy(ptr->name,nameinsert);
    strcpy(ptr->shop,shopinsert);
    strcpy(ptr->num,numinsert);
    strcpy(ptr->place,placeinsert);

    if(head==NULL)
    {
        ptr->next=ptr;
        ptr->prev=ptr;
        head=ptr;
        return;
    }
    struct node*last=head->prev;
    ptr->prev=last;
    last->next=ptr;
    ptr->next=head;
    head->prev=ptr;

}
delete_detail()
{
 char nameinsert[200];
    if(head==NULL)
    {
        printf("There is no Mediciane" );
        return;
    }
    printf("Enter the name of mediciane to delete : \n");
    while((getchar())!='\n');
    scanf("%[^\n]%*c",nameinsert);
    struct node*ptr=head;
    do{
        if(ptr->next==ptr && strcmp(ptr->name,nameinsert)==0)
        {
            printf("There is One file and it is deleted! Now list is Empty\n");
            head=NULL;
            free(ptr);
            return;
        }
        else if(strcmp(ptr->name,nameinsert)==0)
        {
            struct node*prev=ptr->prev;
            struct node*next=ptr->next;
            prev->next=next;
            next->prev=prev;
            head=next;
            free(ptr);
            printf("Mediciane is successfully deleted!\n");
            return;
        }
        ptr=ptr->next;
    }while(ptr!=head);
    printf("No Mediciane  is there!\n");
}
display_seller()
{
 char shopinsert[200];
 printf("Enter the Shop name : \n");
 while((getchar())!='\n');
 scanf("%[^\n]%*c",shopinsert);
 struct node*ptr=head;
 do{
        if(strcmp(ptr->shop,shopinsert)==0){
        printf("\nThe Mediciane name      :");
        printf(" %s\n",ptr->name);
        printf("\nThe Number of mediciane :");
        printf(" %s\n",ptr->num);

    } ptr=ptr->next;
    }while(ptr!=head);

 }
display_buyer()
{
    if(head==NULL)
    {
        printf("There is no mediciane name!\n");
        return;
    }
        struct node*ptr=head;
        printf("\n");

        printf("\nDisplaying Mediciane Data :\n");
    do{
        printf("\n The Mediciane name      :");
        printf(" %s\n",ptr->name);
        printf("\n The Shop name           :");
        printf(" %s\n",ptr->shop);
        printf("\n The Number of mediciane :");
        printf(" %s\n",ptr->num);
        printf("\n The Place name          :");
        printf(" %s\n",ptr->place);

        ptr=ptr->next;
    }while(ptr!=head);
}
search_detail()
 {
     char nameinsert[200];
     printf("Enter Mediciane Name :\n");
     while((getchar())!='\n');
     scanf("%[^\n]%*c",nameinsert);
     struct node*ptr=head;
     do{
        if(strcmp(ptr->name,nameinsert)==0){
            printf("\n  The Mediciane name     : %s\n",ptr->name);
            printf("  The Shop name          : %s\n",ptr->shop);
            printf("  The Number of mediciane: %s\n",ptr->num);
            printf("  The Place name         : %s\n",ptr->place);
            return;
        }

        ptr=ptr->next;
    }while(ptr!=head);
     printf("\n The medicine that you want to find it is not there.\n");

 }
shop_detail()
 {
 char shopinsert[200];
 printf("Enter the Shop name : \n");
 while((getchar())!='\n');
 scanf("%[^\n]%*c",shopinsert);
 struct node*ptr=head;
 do{
        if(strcmp(ptr->shop,shopinsert)==0){
        printf("\n The Mediciane name       : ");
        printf(" %s\n",ptr->name);
        printf("\n The Number of mediciane : ");
        printf(" %s\n",ptr->num);
        } ptr=ptr->next;
     }while(ptr!=head);

}
nearest_detail()
{
  char placeinsert[200];
  printf("\n -------------------- \n");
  printf("\n 1. Ahmedabad \n 2. Amreli \n 3. Anand \n 4. Aravalli \n 5. Banaskantha \n 6. Bharuch \n 7. Bhavnagar \n 8. Botad \n 9. Chhota Udepur \n 10. Dahod \n 11. Dangs \n 12. Devbhoomi Dwarka \n 13. Gandhinagar \n 14. Gir Somnath \n 15. Jamnagar \n 16. Junagadh \n 17. Kachchh \n 18. Kheda \n 19. Mahisagar \n 20. Mehsana \n 21. Morbi \n 22. Narmada \n 23. Navsari \n 24. Panchmahal \n 25. Patan \n 26. Porbandar \n 27. Rajkot \n 28. Sabarkantha \n 29. Surat \n 30. Surendranagar \n 31. Tapi \n 32. Vadodara \n 33. Valsad ");
  printf("\n -------------------- \n");
  printf("Enter the City name : \n");
  while((getchar())!='\n');
  scanf("%[^\n]%*c",placeinsert);
  struct node*ptr=head;
  do{
        if(strcmp(ptr->place,placeinsert)==0){
        printf("\n The Mediciane name     : ");
        printf(" %s\n",ptr->name);
        printf("\n The Shop name          : ");
        printf(" %s\n",ptr->shop);
        printf("\n The Number of mediciane: ");
        printf(" %s\n",ptr->num);
        printf("\n The Place name         : ");
        printf(" %s\n",ptr->place);
     } ptr=ptr->next;
     }while(ptr!=head);
    }
int main()
{
int select,part1,part2;
menu:
printf("-------------------------------------------\n");
printf("\t WELCOME TO MEDICIANE FINDER ");
printf("\n-------------------------------------------");
dnd:
pnp:
printf("\n-------------------------------------------\n");
printf("\n Are you Retailer or Customers ? \n");
printf("\n 1. Retailer \n 2. Customers \n 3. Exit \n");
printf("\nEnter your choice :\n");
scanf("\n%d",&select);

if(select==1)
{
while(1)
{
printf("\n Select one option from following: \n");
printf("\n 1. Insert medicine detail. \n 2. Delete medicine detail. \n 3. Show medicine detail. \n 4. Back \n");
printf("\n");
printf("\nEnter your choice :\n");
scanf("%d", &part1);
switch(part1)
    {
    case 1 : // insert
             insert_detail();
             printf("Input take successfully! \n \n");
    break;
    case 2 : // delete
             delete_detail();
    break;
    case 3: //display
             display_seller();
    break;
    case 4://exit
    // exit(0);
             goto dnd;
    break;
    default:
            printf("Please enter valid choice..");
            }
      }
}
else if(select==2)
{
while(1)
{
printf("\n Select one option from following: \n");
printf("\n 1. Display All medicine detail. \n 2. Search medicine detail. \n 3. Search By shop Name. \n 4. Find Nearest store for you. \n 5. Back \n");
printf("\n");
printf("\nEnter your choice :\n");
scanf("%d", &part2);
switch(part2)
    {
    case 1 : // display
            display_buyer();
    break;
    case 2 : // search
            search_detail();
    break;
    case 3: //by Stock
            shop_detail();
    break;
    case 4: //nearest place
            nearest_detail();
    break;
    case 5: //exit
    //exit(0);
    goto pnp;
    break;
    default:
    printf("Please enter valid choice..");
            }
      }
}
else if(select==3)
{
exit(0);
}
else
{
printf("Enter the correct number! \n");
}
goto menu;
return 0;
}
