#include<stdio.h>
#include<stdlib.h>
struct movie
{
	char person_name[20];
	int  movie_seats[5];
	char movie_name[20];
	int n_viewer;
	int id;
	struct movie *next;
}*head=NULL;
int choice;
int select_movie();
void reservation();
void delete_ticket();
void bill_movie1();
void bill_movie2();
void bill_movie3();
void bill_movie4();
void display_all_ticket();
void main()
{	
	int ch,count=0;
	int iden=1;
	char movie_name[20];
	int i,x,i_d;
	do
	{
	printf("\n|-------------------------------------------------------------|");
	printf("\n|                            MAIN MENU                        |");
	printf("\n|-------------------------------------------------------------|");
	printf("\n| ENTER 1 TO SELECT A MOVIE                                   |");
	printf("\n| ENTER 2 TO DELETE TICKET                                    |");
	printf("\n| ENTER 3 TO DISPLAY TICKET                                   |");
    printf("\n| ENTER 4 TO EXIT FROM THE PROGRAM                            |");
	printf("\n|-------------------------------------------------------------|\n");
	printf("\nEnter Your Option:");
	scanf("%d",&ch);
	int i_d;
		switch(ch)
		{
			case 1:
				x=select_movie();
				reservation(x,&iden);
				break;
			case 2:
				delete_ticket();
				break;
			case 3:
				display_all_ticket();
				break;
			case 4:
				printf("\n...Thank you for booking the tickets...\n");
				exit(0);
				break;
			default:
				printf("\n...Invalid Option...\n");
				break;
		}
	}while(ch!=4);
}
int select_movie()
{

	   	printf("\n|------------------------------------------------------------|");
	    printf("\n|                        MOVIE NAMES                         |");
     	printf("\n|------------------------------------------------------------|");
		printf("\n| ENTER 1 FOR INTERSTERLLAR                                  |");
		printf("\n| ENTER 2 FOR SITA RAMAM                                     |");
		printf("\n| ENTER 3 FOR ORI DEVUDA                                     |");
		printf("\n| ENTER 4 FOR HARRY POTTER                                   |");
		printf("\n|------------------------------------------------------------|");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		return choice;
}
void reservation(int choice,int *id)
{
	int i,seats;
	struct movie *tp,*ttp;//ttp is used as temporay pointer used for searching
	tp=(struct movie *)malloc(sizeof(struct movie));
	ttp=head;
	int idd;
	if(tp==NULL)
	{
	printf("\n...Seats are FULL...\n");
	return;
	}
	int cnt=-1;
	if(head==NULL)
	{
		printf("\nEnter your name:");
		gets(tp->person_name);
			gets(tp->person_name);
		printf("\nEnter no of tickets:");
		scanf("%d",&tp->n_viewer);
		printf("\nEnter movie name :");
		gets(tp->movie_name);
		gets(tp->movie_name);
		tp->id=*id;
		*id=*id+1;
		printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                                                                  SELECT SEAT                                                                                                                            ");
		printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
		printf("\n\n\t\t\t\t----------------------------------------------------------------------SCREEN------------------------------------------------------\n\n");
		for(i=1;i<=100;i++)
		{
			if(cnt==-1)
			{
				printf("\t\t\t\t\t");
				cnt=0;
			}
			if(cnt==20)
			{
				printf("\n\n");
				cnt=0;
				printf("\t\t\t\t\t");
			}
		
				printf("%4d",i);
				cnt++;
			
		}
		printf("\nEnter your seat numbers:");

		for(i=0;i<tp->n_viewer;i++)
		{
			scanf("%d",&tp->movie_seats[i]);
		}
	
			tp->next=NULL;
			head=tp;
			
			
	}
	else
	{
		
		printf("\nEnter your Name:");
		gets(tp->person_name);
			gets(tp->person_name);
		printf("\nEnter no of tickets:");
		scanf("%d",&tp->n_viewer);
		printf("\nEnter movie name :");
		gets(tp->movie_name);
		gets(tp->movie_name);
		tp->id=*id;
		*id=*id+1;
		printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                                                                  SELECT SEAT                                                                                                                            ");
		printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
		printf("\n\n\t\t\t\t----------------------------------------------------------------------SCREEN------------------------------------------------------\n\n");
		for(i=1;i<=100;i++)
		{
			if(cnt==-1)
			{
				printf("\t\t\t\t\t");
				cnt=0;
			}
			if(cnt==20)
			{
				printf("\n\n");
				cnt=0;
				printf("\t\t\t\t\t");
			}
		
				printf("%4d",i);
				cnt++;
			
		}
	
		printf("\nEnter your seat numbers:");
		for(i=0;i<tp->n_viewer;i++)
		{
			scanf("%d",&tp->movie_seats[i]);
		}
		tp->next=head;
		head=tp;
	}
		
				
				if(choice==1)
				{
					bill_movie1();
				}
				else if(choice==2)
				{
					bill_movie2();
				}
				else if(choice==3)
				{
					bill_movie3();
				}
				else
				{
					bill_movie4();
				}			
}
void display_all_ticket()
{
	int count=1000,i,amount;
	struct movie *tp;
	tp=(struct movie *)malloc(sizeof(struct movie));
	tp=head;
	if(head==NULL)
	{
	printf("\n...Booking is not found...\n");
	return;
	}
	while(tp!=NULL)
	{   
	     printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : %s        \n",tp->id,tp->movie_name);
        printf("\t Customer  : %s\n",tp->person_name);
        printf("\t\t\t                              			Date      : 14-11-2022\n");
        printf("\t                                              Time      : 10:30am\n");
        printf("\t                                              Hall      : 01\n");
        for(i=0;i<tp->n_viewer&&tp!=NULL;i++)
        {
        printf("\t                                              seats No. : %d  \n",tp->movie_seats[i]);
        }
        amount=(tp->n_viewer*150)+10;
        printf("\t                                              price . : %d  \n\n",amount);
        printf("\t============================================================\n");
		tp=tp->next;
	}
}
void bill_movie1()
{	
	int count=1000,i,amount;
	struct movie *tp;
	tp=(struct movie *)malloc(sizeof(struct movie));
	tp=head;
	if(head==NULL)
	{
	printf("\n...NO BOOKING FOUND...\n");
	return;
	}
	    printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : INSTERSTELLAR        \n",tp->id);
        printf("\t Customer  : %s\n",tp->person_name);
        printf("\t\t\t                              			Date      : 14-11-2022\n");
        printf("\t                                              Time      : 10:30am\n");
        printf("\t                                              Hall      : 01\n");
        for(i=0;i<tp->n_viewer&&tp!=NULL;i++)
        {
        printf("\t                                              seats No. : %d  \n",tp->movie_seats[i]);
        }
        amount=(tp->n_viewer*150)+10;
        printf("\t                                              price . : %d  \n\n",amount);
        printf("\t============================================================\n");
		
}
void bill_movie2()
{
	int count=1000,i,amount;
	struct movie *tp;
	tp=(struct movie *)malloc(sizeof(struct movie));
	tp=head;
	if(head==NULL)
	{
	printf("\n...NO BOOKING FOUND...\n");
	return;
	}
	    printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name :SITA RAAMAM        \n",tp->id);
        printf("\t Customer  : %s\n",tp->person_name);
        printf("\t                        	          	     	Date      : 14-11-2022\n");
        printf("\t                                              Time      : 1:30am\n");
        printf("\t                                              Hall      : 02\n");
        for(i=0;i<tp->n_viewer&&tp!=NULL;i++)
        {
        printf("\t                                              seats No. : %d  \n",tp->movie_seats[i]);
        }
        amount=(tp->n_viewer*150)+10;
        printf("\t                                              price . : %d  \n\n",amount);
        printf("\t============================================================\n");
		
}
void bill_movie3()
{
		int count=1000,i,amount;
	struct movie *tp;
	tp=(struct movie *)malloc(sizeof(struct movie));
	tp=head;
	if(head==NULL)
	{
	printf("\n...NO BOOKING FOUND...\n");
	return;
	}
	    printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : ORI DEVUDA        \n",tp->id);
        printf("\t Customer  : %s\n",tp->person_name);
        printf("\t                                		     	Date      : 14-11-2022\n");
        printf("\t                                              Time      : 7:30am\n");
        printf("\t                                              Hall      : 03\n");
        for(i=0;i<tp->n_viewer&&tp!=NULL;i++)
        {
        printf("\t                                              seats No. : %d  \n",tp->movie_seats[i]);
        }
        amount=(tp->n_viewer*150)+10;
        printf("\t                                              price . : %d  \n\n",amount);
        printf("\t============================================================\n");
}
void bill_movie4()
{	int count=1000,i,amount;
	struct movie *tp;
	tp=(struct movie *)malloc(sizeof(struct movie));
	tp=head;
	if(head==NULL)
	{
	printf("\n...NO BOOKING FOUND...\n");
	return;
	}
	    printf("\n\n");
        printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name : HARRY POTTER       \n",tp->id);
        printf("\t Customer  : %s\n",tp->person_name);
        printf("\t\t\t                              			Date      : 14-11-2022\n");
        printf("\t                                              Time      : 10:30pm\n");
        printf("\t                                              Hall      : 04\n");
        for(i=0;i<tp->n_viewer&&tp!=NULL;i++)
        {
        printf("\t                                              seats No. : %d  \n",tp->movie_seats[i]);
        }
        amount=(tp->n_viewer*150)+10;
        printf("\t                                              price . : %d  \n\n",amount);
        printf("\t============================================================\n");
}
void delete_ticket()
{
	if(head==NULL)
	{
		printf("\n...You did not book your ticket...\n");
		return;
	}
	int counting=0,count;
	int i_d;
	printf("\nEnter your ticket id:");
	scanf("%d",&i_d);
	struct movie *tp,*pp,*cp;
	tp=head;
	pp=head;
	cp=head;
	while(tp->id!=i_d)
	{
		tp=tp->next;
	}
			if(head==tp)
			{
				if(tp->next==NULL)
				{
					head=NULL;
					free(tp);
				}
				else
				{
					head=tp->next;
					free(tp);
				}
			}
			else
			{
				if(tp->next==NULL)
				{
					while(pp->next!=tp)
					{
						pp=pp->next;
					}
					pp->next=NULL;
					free(tp);
				}
				else
				{
					while(pp->next!=tp)
					{
						pp=pp->next;
					}
					pp->next=tp->next;
					free(tp);
				}
			}
			printf("\n...Your Ticket is deleted...\n");
		
}
