#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char l1[10],l2[10],l3[10],l4[10],l5[10],l6[10],t1[10],t2[10],t3[10],t4[10],t5[10],t6[10];
	clrscr();

	printf("Employee 1 name: ");
	scanf("%s",&l1);
	printf("Enter %s current shift timing: ",l1);
	scanf("%s",&t1);
	printf("Employee 2 name: ");
	scanf("%s",&l2);
	printf("Enter %s current shift timing: ",l2);
	scanf("%s",&t2);
	printf("Employee 3 name: ");
	scanf("%s",&l3);
	printf("Enter %s current shift timing: ",l3);
	scanf("%s",&t3);
	printf("Employee 4 name: ");
	scanf("%s",&l4);
	printf("Enter %s current shift timing: ",l4);
	scanf("%s",&t4);
	printf("Employee 5 name: ");
	scanf("%s",&l5);
	printf("Enter %s current shift timing: ",l5);
	scanf("%s",&t5);
	printf("Employee 6 name: ");
	scanf("%s",&l6);
	printf("Enter %s current shift timing: ",l6);
	scanf("%s",&t6);

	for(i=0;i<=30;i++)
	{
		if(i!=3||i!=4||i!=10||i!=11||i!=17||i!=18||i!=24||i!=25)
		{
			if(i<=2)
			{
				printf("\n\nApril %d 2021",i);
				printf("\nMorning :%s,%s",l1,l5);
				printf("\nEvening :%s,%s",l2,l3);
				printf("\nNight   :%s,%s",l4,l6);
			}
			if(i>=5 && i<=9)
			{
				printf("\n\nApril %d 2021",i);
				printf("\nMorning :%s,%s",l4,l6);
				printf("\nEvening :%s,%s",l1,l5);
				printf("\nNight   :%s,%s",l2,l3);
			}if(i>=12 && i<=16)
			{
				printf("\n\nApril %d 2021",i);
				printf("\nMorning :%s,%s",l2,l3);
				printf("\nEvening :%s,%s",l4,l6);
				printf("\nNight   :%s,%s",l1,l5);
			}
			if(i>=19 && i<=23)
			{
				printf("\n\nApril %d 2021",i);
				printf("\nMorning :%s %s",l1,l5);
				printf("\Evening :%s %s",l2,l3);
				printf("\nNight  :%s %s",l4,l6);
			}

			if(i>=25 && i<=30)
			{
				printf("\n\nApril %d 2021",i);
				printf("\nMorning :%s,%s",l1,l5);
				printf("\nEvening :%s,%s",l2,l3);
				printf("\nNight   :%s,%s",l4,l6);
			}
		}
	}
	getch();
}