#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
	void home(void);
		void sell(void);
			void buy(void);
			void delete(void);
		 void purchase (void);
			char tim[10];
struct nep
{
	char name[10],mak[10],tak[20],let[10],lak[10],buffer[20];
	int go,to,ot,og[10];
double tem,tep;
}temp,gave,tell_item;
	FILE *IS,*JS,*dev,*rubb;
	int p,LS=0,rom=0;
 main() 
{
	system("cls");
	IS=fopen("IS.txt","a+");
     JS=fopen("JS.txt","a+");
    rubb=fopen("rubb.txt","r+");
	system("color 00");
	printf("\t\t\t\t******************WELCOME TO NEP-SHOPPING******************");
	printf("\n\n\n");
	printf("================#Create new account:-\t\t(1)");
	printf("\n\n");
	printf("================#log into account:-\t\t(2)");
	printf("\n\n");
	printf("================#Exit:-\t\t\t\t(3)");
    printf("\n\n");
	printf("================:=");
	scanf("%d",&p);
	system("cls");
	switch(p)
	{
		p=getch();
		case 1:
			system("color 00");
			printf("\t\t\t\t*****************CREATE NEW ACCOUNT SESSION*****************");
			printf("\n\n\n");
			printf("================#User-Name:-");
			fflush(stdin);
			gets(temp.name);
			printf("\n\n");
			printf("================#Password:-");
gets(temp.tak);
			printf("\n\n");
			printf("================#Re_enter Password:-");
			gets(temp.let);
			printf("\n\n");
			printf("================#Email:-");
			fflush(stdin);
			gets(temp.lak);
                    rewind(IS);
				fwrite(&temp,sizeof(temp),1,IS);

				if(strcmp(temp.tak,temp.let)==0)
				{
					printf("\n");
					MessageBox(0,"YOUR ACCOUNT IS SUCCESSFULLY CREATED","NOTICE",0);
					system("cls");
				home();
				}
			
		break;
		case 2:
		mars:
			system("cls");
			rewind(IS);
				system("color 00");
			printf("\t\t\t\t********************LOG IN SESSION******************");
			printf("\n\n\n");
			printf("==================#User-Name:-");
			fflush(stdin);
			gets(gave.lak);
printf("\n\n\n");
			printf("==================#Password:-");
			fflush(stdin);
			gets(gave.let);
              rewind(IS);
			while(fread(&temp,sizeof(temp),1,IS)==1)
			{
			if(strcmp(temp.name,gave.lak)==0)
			if(strcmp(temp.tak,gave.let)==0)
			{
				rom=1;
					printf("\n\n\n");
			printf("\t\t\t\t\t\tHY %s,You are welcomed....!",gave.lak); 
			sleep(1);    
		system("cls");
			home();
			}
			}
			if(rom==0)
		{
		MessageBox(0,"ID IS NOT FOUND....!","NOTICE",0);
		goto mars;
		}
			break;
			case 3:
		return ;
				break;
	}	
}
/*===================================================fun home============================================================*/
void home()
{
	int t;
	printf("\t\t\t\t********************HOME*********************");
	printf("\n\n\n");
	printf("================#SELL:-\t\t\t(1)");
	printf("\n\n");
	printf("================#BUY:-\t\t\t(2)");
	printf("\n\n");
	printf("================#Exit:-\t\t\t(3)");
	printf("\n\n");
	printf("================:-");
	fflush(stdin);
    scanf("%d",&t);
	switch(t)	
    {
    	t=getch();
    	case 1:
    		system("cls");
    		sell();
    	break;
    	case 2:
    		system("cls");
    	buy();
    		break; 
			case 3:
			exit(1);
			break;	
	}	
}
/*==================================================fun sell=============================================================*/
 void sell()
{		
	int q,i=1;
	char ch,rh,gh;
	printf("\t\t\t\t*********************SELL-SESSION*************************");
	printf("\n\n\n");
	printf("=================#Sell your products:-\t\t(1)");
	printf("\n\n");
	printf("=================#Go Back:-\t\t\t(2)");
    printf("\n\n");
	printf("==================:-");
	scanf("%d",&q);
	switch(q)
	{
		q=getch();
		case 1:
			system("cls");
			printf("\t\t\t\t***********************SELL YOUR PRODUCTS*********************");
			printf("\n\n\n");
			printf("===================#Do you want to cancel this process:-(y|n)");
			fflush(stdin);
			ch=getchar();
			if(ch=='y'||ch=='Y')
			{
			system("cls");
              sell();}
              else if(ch=='n'||ch=='N')
              {
              	coding:
              	  fflush(stdin);
              	printf("\n\n");
              	printf("------------------------------------------------------------------------------");
              	printf("\n\n");
              	printf("==================#Enter the name of product:-");
              	fflush(stdin);
              	gets(tell_item.lak);
              	printf("\n");
              	printf("------------------------------------------------------------------------------");
              	printf("\n\n");
 void sell()
 {		
	int q,i=1;
	char ch,rh,gh;
	printf("\t\t\t\t*********************SELL-SESSION*************************");
	printf("\n\n\n");
	printf("=================#Sell your products:-\t\t(1)");
	printf("\n\n");
	printf("=================#Go Back:-\t\t\t(2)");
    printf("\n\n");
	printf("==================:-");
	scanf("%d",&q);
	switch(q)
 }
	{
		q=getch();
		case 1:
			system("cls");
			printf("\t\t\t\t***********************SELL YOUR PRODUCTS*********************");
			printf("\n\n\n");
			printf("===================#Do you want to cancel this process:-(y|n)");
			fflush(stdin);
			ch=getchar();
			if(ch=='y'||ch=='Y')
			{
			system("cls");
              sell();}
              else if(ch=='n'||ch=='N')
              {
              	coding:
              	  fflush(stdin);
              	printf("\n\n");
              	printf("------------------------------------------------------------------------------");
              	printf("\n\n");
              	printf("==================#Enter the name of product:-");
              	fflush(stdin);
              	gets(tell_item.lak);
              	printf("\n");
              	printf("------------------------------------------------------------------------------");
              	printf("\n\n");
			  }
/*=====================================================fun buy==========================================================*/
void buy()
{
char jck[10],tim[10];

int x=0,v=0,z=0;
	printf("\t\t\t\t*************************BUY-SESSION************************");
	printf("\n\n\n");
	printf("====================#CHOOSE THE CATEGORY OF PRODUCTS:-");
	printf("\n");
	rewind(JS);
	while(fread(&tell_item,sizeof(tell_item),1,JS)==1)
	{	
		printf("\n\n");
	printf("-------------:$%s",tell_item.let);
}
printf("\n");
    printf("=====================#Enter the cateogry you want to search:-");
    fflush(stdin);
    gets(jck);
	rewind(JS);
	while(fread(&tell_item,sizeof(tell_item),1,JS)==1)
	{
	
	if(strcmp(tell_item.let,jck)==0)
	{
		x=1;
	printf("\n");
	printf(" Name of product\t\t\tPrice");
	printf("\n");
	printf("------------------------------------------------------------------------");
	printf("\n");
	fflush(stdin);
	printf(" :%s\t\t\tRs %lf",tell_item.lak,tell_item.tem);
		printf("\n");
		printf("------------------------------------------------------------------------");
			printf("\n\n");		
	}
}
if(x==0)
{
	MessageBox(0,"SUCH CATEGORY IS NOT AVAILABLE....!","NOTICE",0);
 	system("cls");
 	rewind(JS);
 buy();
}
tom:
printf("\n");
	printf("==============================#Enter the name of product(OR (ENTER BACK)TO GO BACK):-");
	fflush(stdin);	
     gets(tim);
rewind(rubb);
fwrite(&tim,sizeof(tim),1,rubb);
if(strcmp(tim,"back")==0)
{
	system("cls");
	rewind(JS);
	home();
}
{
	rewind(JS);
	while(fread(&tell_item,sizeof(tell_item),1,JS)==1)
	{
		if(strcmp(tell_item.lak,tim)==0)
		{
			z=1;
				printf("\n");
	printf("Name of product\t\t\tPrice\t\t\tDescription");
		printf("\n");
				printf("------------------------------------------------------------------------");
			printf("\n:%s\t\t\tRs %lf\t\t\t%s",tell_item.lak,tell_item.tem,tell_item.buffer);
				printf("\n------------------------------------------------------------------------\n");
		break;
		}
	}
}
if(z==0)
{
	goto tom;
}
	printf("\n");
		 purchase();
		
}
/*=================================================fun purchase==========================================================*/
void purchase ()
{
	struct pur
	{
	double mot;
	char loot[10],mat[10],chup[10];
}rup;
int f=0;
char gm;
printf("\n");
	printf("\t\t\t\t***************************E-SEWA***************************");
	printf("\n\n\n");
printf("");
	printf("==============#eSewa ID(Mobile/Email):-");
	fflush(stdin);
	gets(rup.loot);
	printf("\n\n");
	printf("==============#Password/MPIN:-");
	fflush(stdin);
	gets(rup.mat);
	rewind(IS);
while(fread(&temp,sizeof(temp),1,IS)==1)
{
if(strcmp(temp.tak,rup.mat)==0)
if(strcmp(temp.lak,rup.loot)==0)
{
	f=1;
printf("\n");
printf("\t\t\t\t%s,you successfully logged in.....!",temp.name);
	sleep(1);
}
}
if(f==0)
{
printf("\n\n");
	printf("\t\t\t\t %s,wrong password..!",temp.name);
	sleep(2);
	system("cls");
	purchase();
}
printf("\n\n");
printf("===============#Amount to be deposited:-%lf",tell_item.tem);
printf("\n\n");
printf("===============#Enter the account eSewa ID:");
gets(rup.chup);
sleep(4);
   if(MessageBox(0,"!....DEPOSITION IS SUCCESSFULL....!","NOTICE",0)==1)
   {

	dev=fopen("dev.txt","w+");
	rewind(JS);
	rewind(rubb);
	while(fread(&tim,sizeof(tim),1,rubb)==1){
	
	while(fread(&tell_item,sizeof(tell_item),1,JS)==1)
	{
		if(strcmp(tell_item.lak,tim)!=0)
		{
		LS=1;
		fwrite(&tell_item,sizeof(tell_item),1,dev);
	}
}}
fclose(JS);
fclose(dev);
remove("JS.txt");
rename("dev.txt","JS.txt");	
JS=fopen("Js.txt","r+");
}
printf("\n\n");
printf("\t\t\tDo you want to visit another product(Y||N)?:--");
gm=getchar();
if(gm=='y'||gm=='Y')
{
system("cls");
rewind(JS);
buy();}
else
{
exit(1);	
}
}

