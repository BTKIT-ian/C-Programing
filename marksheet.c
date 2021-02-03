
	
	 /* Write a C program to input marks of five subjects Physics, Chemistry,hindi, Mathematics and English. Calculate percentage and grade according to following: */

#include<stdio.h>
#include<conio.h>
void main()
{
	int rollno,age,p,c,h,m,e,tot;
	char ch[32];
	float per;
	printf("\n enter name=");
	scanf("%s",&ch); 
	printf("\n enter rollno=");
	scanf("%d",&rollno);
	printf("\n enter age=");
	scanf("%d",&age);
	printf("\n enter physics marks=");
	scanf("%d",&p);
	printf("\n enter chemistry marks=");
	scanf("%d",&c);
	printf("\n enter hindi marks=");
	scanf("%d",&h);
	printf("\n enter maths marks=");
	scanf("%d",&m);
	printf("\n enter english=");
	scanf("%d",&e);
	tot=p+c+h+m+e;
	per=tot/5.0;
	printf("percentage=%f",per);
	if(per>=60)
	{
	
	printf("\n Position=First");
	printf("\n Grade=A");
}
else if(per>=45 & per<60)
{
	printf("\n Position=Second");
	printf("\n Grade= B");
}
else if (per>=33 & per<45)
{
	printf("\n Position=Third");
	printf("\nGrade= C");
}
	else
	{
	printf("\n Position=fail");
	printf("\nGrade= D");
}
		getch();
}




