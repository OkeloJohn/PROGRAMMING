#include <stdio.h>

int main()
{
	int English,Maths,Science,Kiswahili,Computer,Sum,Average;
	printf("Enter English\n");
	printf("Enter Maths\n");
	printf("Enter Science\n");
	printf("Enter Kiswahili\n");
	printf("Enter Computer\n");
	scanf("%d%d%d%d%d", &English,&Maths,&Science,&Kiswahili,&Computer);
	{
		Sum=(English+Maths+Science+Kiswahili+Computer);
		Average=(Sum/5);
        printf("Average is %d\n",Average);
		if(Average>=70&&Average<=100)
		{
			printf("Grade A");
		}
		else if(Average>=60&&Average<69)
		{
			printf("Grade B");
		}
		else if(Average>=50&&Average<59)
		{
			printf("Grade C");
		}
		else if (Average>=40&&Average<49)
		{
			printf("Grade D");
		}
		else if (Average>=0&&Average<39)
		{
			printf("Fail");
		}
	}
}
