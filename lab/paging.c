#include<stdio.h>

#include<stdlib.h>

#define MAX 50

void main()

{

int page[MAX],i,n,f,ps,off,pno;

int choice=0;

printf("\nEnter the no of pages in memory: ");

scanf("%d",&n);

printf("\nEnter page size: ");

scanf("%d",&ps);

printf("\nEnter no of frames: ");

scanf("%d",&f);

for(i=0;i<n;i++)

page[i]=-1;

printf("\nEnter the page table\n");

printf("(Enter frame no as -1 if that page is not present in any frame)\n\n"); printf("\npageno\tframeno\n-------\t-------"); for(i=0;i<n;i++)

{

printf("\n\n%d\t\t",i);

scanf("%d",&page[i]);

}

do

{

printf("\n\nEnter the logical address(i.e,page no & offset):");

scanf("%d%d",&pno,&off);

if(page[pno]==-1)


printf("\n\nThe required page is not available in any of frames"); else

printf("\n\nPhysical address(i.e,frame no & offset):%d,%d",page[pno],off); printf("\nDo you want to continue(1/0)?:"); scanf("%d",&choice);

}while(choice==1);

}





OUTPUT

Enter the no of pages in memory: 5

Enter page size: 10

Enter no of frames: 5

Enter the page table

(Enter frame no as -1 if that page is not present in any frame)

pageno frameno

------- -------

0 8

1 -1

2 -1

3 3

4 5

Enter the logical address(i.e,page no & offset):2 70

The required page is not available in any of frames

Do you want to continue(1/0)?:1

Enter the logical address(i.e,page no & offset):4 30

Physical address(i.e,frame no & offset):5,30

Do you want to continue(1/0)?:0
