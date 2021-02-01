#include<stdio.h>
main()
{
	int a1,a2,choice,i=1,a;
	char name;
	float rad,area;
	printf("\n 1.Square");
	printf("\n 2.Rectangle");
	printf("\n 3.Circle");
	printf("\n 4.Triangle");
	printf("\n 5. first 20 natural no.:");
	printf("\n 6. Even-Odd");
	printf("\n Enter choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\n enter sides:");
		scanf("%d",&a1);
		printf("\n area of square:%d",a1*a1);
		break;
		
		 case 2:
			printf("\n enter first side");
			scanf("%d",&a1);
			printf("\n enter second side");
			scanf("%d",&a2);
		    printf("\n Area of rectangle:%d",a1*a2);
			break;
			
			 case 3:
				printf("\n enter radius:");
				scanf("%f",&rad);
			    area=3.14*rad*rad;
				printf("\n Area of circle:%f",area);
				break;
				    case 4:
				    	printf("\n enter height:");
				    	scanf("%d",&a1);
				    	printf("\n enter base:");
				    	scanf("%d",&a2);
				    	printf("\n Area of Triangle:%d",a1*a2/2);
				    	break;
				    	case 5:
				    		printf("\n natural no's are:");
				    	for(i=1;i<=20;i++)
                        printf("\n %d",i);
						break;
						case 6:
						printf("\n Enter no.:");
						scanf("%d",&a);
						if(a%2==0)
						printf("\n no. is even:");
						else
						printf("\n no is odd:");
						break;     	
				    	default:
				    		printf("\n Invalid choice");
				        }
                         getch();
                           }


