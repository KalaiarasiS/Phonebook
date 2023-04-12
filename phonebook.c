#include <stdio.h>
#include <stdlib.h> #include <string.h>
typedef struct list add;//defining datatype
struct list
{
//declaring variables in array
char name[40]; add* next; };
int i=1,size=0; //Inserting data
into phonebook void
addrecord(add** head)
{
//creating node add*
temp=(add*)malloc(sizeof(add));
//Entering data printf("\nContact
name : "); gets(temp->name);
system("cls"); printf("\nContact Name
: "); gets(temp->name);
printf("\nEnter the address : ");
gets(temp->address); printf("\nEnter

Phonebook Application P a g e | 15

father name : ");
gets(temp>father_name);
printf("\nEnter mother name : ");
gets(temp->mother_name);
printf("\nEnter phone no : ");
gets(temp->num); printf("\nEnter
sex : "); gets(temp->sex);
printf("\nEnter
email : "); gets(temp->mail); printf("\nEnter
citizen no : ");
gets(temp->citizen_no); temp->next
= NULL;
size++;
//Assigning size to phonebook
if(size == 5)
{

printf("\n\n\n\t\t\tPhone Memory is full!!!"); printf("\n\t\tIf you want to add
more contact,You have to delete some contact
from your list...\n\n\n"); return;

}
else
{
//condition for adding first data into phonebook
if(*head == NULL)
{

Phonebook Application P a g e | 16

*head = temp;
printf("\nRecord saved\n\n");
return;
} else
{
//Adding sequence of data
add* p = *head;
while(p->next != NULL)
{
p = p->next;
}
p->next = temp;
printf("\n\tDone!!!\n\n");

}
return;
} }
//Alt
er the
save
d data void
modifyrecord(add*head)
{
add* temp=(add*)malloc(sizeof(add));
char input_string[30]; //getting input from

Phonebook Application P a g e | 17

user printf("\n\tcitizen num : ");
gets(input_string); system("cls");
printf("\n\tcitizen number : ");
gets(input_string); system("cls");
if(head == NULL)
{ system("cls"); printf("\n\n\t\tNo Contact exists in this Phone
Book List!\n\n"); return; } else { add*p = head; while(p
!= NULL)
{
/*The strcmp() function is used to compare two strings
---comparing the entered citizen number with the saved record to modify the particular
data*/ if(strcmp((p->citizen_no),input_string) == 0)
{ printf("\nEnter name : "); gets(temp->name);
printf("\nEnter address :"); gets(temp-
>address); printf("\nEnter father name :
"); gets(temp->father_name);
printf("\nEnter mother name : ");
gets(temp->mother_name);
printf("\nEnter phone no: "); gets(temp-
>num);
printf("\nEnter sex: "); gets(temp>sex);
printf("\nEnter e-mail : "); gets(temp-
>mail); printf("\nEnter Citizen number
: "); gets(temp>citizen_no); p = p-
>next; p->next

Phonebook Application P a g e | 18

= temp;
printf("\n\t\t\t\t\tDone!!!\n\n");
}
return;
} printf("\n\n\n\t\tEnter the valid citizen
number\n\n\t");

} }

void searchrecord(add*head)
/*Searching record-This process lets the user to give in the citizen number to get the details of
the searched contact*/

{
// to get input from user char
input_string[30];
printf("\n\tcitizen no : ");
gets(input_string);
system("cls"); printf("\n\tCitizen
no : "); gets(input_string);
system("cls");
if(head == NULL)
{ printf("\n\n\n\t\tNo Contact exists in this Phone Book List!!!\n\n");
return;
} else

Phonebook Application P a g e | 19

{
add*
p =
head;
while
(p !=
NUL
L)
{
/*comparing the entered citizen number with the saved record to display the searched
data*/

if(strcmp((p->citizen_no),input_string) == 0)
{
//Display the searched details printf("\n\t\t\tRecord of
citizen number %s",p->citizen_no); printf("\n\t\tName :
%s",p->name); printf("\n\t\tAddress : %s",p->address);
printf("\n\t\tFather name: %s",p->father_name);
printf("\n\t\tMother name : %s\n\n",p->mother_name);
printf("\n\t\tPhone number : %s",p->num); printf("\n\t\tSex:
%s",p->sex); printf("\n\t\tMail-id : %s\n\n",p->mail);
printf("\n\t\tCitizen number : %s\n\n",p->citizen_no);
return; } p = p->next;
}
printf("\n\n\n\t\tEnter valid citizen number!!!\n\n\t");

Phonebook Application P a g e | 20

}
}

void deleterecord(add** head)//Delets the added contact details of a person
{ char input_string[30];
printf("\n\tCitizen number : ");
gets(input_string);
system("cls"); printf("\n\tCitizen
number: "); gets(input_string);
system("cls");
if(*head == NULL)
{ printf("\n\t\t\t\t\tNo Contact exists in this Phone Book
List!\n\n"); return; } else
{
/*comparing the entered citizen number with the saved record to delete the particular
data*/ if(strcmp(((*head)->citizen_no),input_string) == 0)
{
add*p=*head; *head = (*head)->next;
free(p); printf("\n\t\t\t\t\tRecord deleted
successfully!!!\n\n\n\n"); return; } else { add*p
= *head; while(p-
>next != NULL)
{ if(strcmp((p->next->citizen_no),input_string) ==
0)
{

Phonebook Application P a g e | 21

p->next = p->next->next; size--
;
return; } p
= p->next;
} printf("\n\t\t\t\t\tEnter valid citizen
number!!!\n\n");

}
}
}

void listrecord(add* head)//To show up the saved contacts list
{
if(head == NULL)
{ printf("\n\n\n\t\tNo Contact exists in this Phone Book List!"); return;

}
else
{
add*p = head;
while(p != NULL)
{ printf("\n\t\t\tInformation about citizen number of %s",p-
>citizen_no); printf("\n\t\tName:%s",p->name); printf("\n\t\tAddress :
%s",p->address); printf("\n\t\tFather name: %s",p->father_name);
printf("\n\t\tMother name : %s",p->mother_name);
printf("\n\t\tPhnone number : %s",p->num); printf("\n\t\tSex:

Phonebook Application P a g e | 22

%s",p>sex); printf("\n\t\tMail-id : %s",p->mail); printf("\n\t\tCitizen
number : %s",p->citizen_no); p = p->next;
i++;
} i=1;
return;
}
}

void main()
{

system("color 5F");
/*To give background color as purple---
system("color XX")--1st X is background and
2nd X is Foreground text... 5--color code of
purple--- F-color code of bright white*/ add*
head=NULL;

printf("\n\t\t*********************WELCOME TO PHONEBOOK*******************");
while(1) { printf("\n\n\t\t\t\t\t\tMenu");
printf("\n\t\t\t1.Add New\t\t2.List\t\t3.Exit");
printf("\n\t\t\t4.Search\t\t5.Delete\t6.Modify")
; int choice; printf("\n\n\t\t\tEnter any key");
scanf("%d",&choice); if(choice

Phonebook Application P a g e | 23

== 3) {
break;
} else
{ switch(choice) {
//switch cases case
1 :
addrecord(&head)
; break; case 2 :
listrecord(head);
break; case 4 :
searchrecord(head
); break; case 5 :
deleterecord(&hea
d); break; case 6 :
modifyrecord(hea
d); break; default:
printf("\n\t\tInvalid Choice!Try again!!!");
}
}
}
}
