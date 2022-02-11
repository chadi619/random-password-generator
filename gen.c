#include<stdio.h>
#include<time.h>
#include<windows.h>

main(){
	int len,random,i;
	
	char numbers[] = "0123456789";
   
    char letter[] = "abcdefghijklmnoqprstuvwyzx";
   
    char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
   
    char symbols[] = "|~%!@#$^&*?";
    
	char answer1[2],answer2[2],answer3[2],answer4[2],deci[3];
	
	char password[696969];

	char answer5[2];
	
	double bits;
	printf("\t\t\tthis programe generates random password with the length and chosen charcters ");
	
	start:
	printf("\npassword lenght:");
	scanf("%d",&len);

	printf("\nanswer with 'y' for (yes) or 'n' for (no):");
	
	printf("\ninclude lower case(a-z):");
	scanf("%s",&answer1);
	
	printf("\ninclude upper case(A-Z):");
	scanf("%s",&answer2);
	
	printf("\ninclude symbols(#,@,*):");
	scanf("%s",&answer3);
	
	printf("\ninclude number(0-9):");
	scanf("%s",&answer4);
	
//	system("cls");
	

	
		srand (time(0));
		random=(rand()%4)+1;
	
	again:
if(answer1[0]=='y' || answer2[0]=='y' || answer3[0]=='y'|| answer4[0]=='y')
{
printf("\nyour password is:");
	for( i=0;i<=len-1;i++)
		{
					
			
				
				
			if(random==1)
			{	
				i--;
				random=(rand()%4)+1;
				if(answer1[0]=='y')	
				{	
					i++;
					password[i]=letter[rand()%26];		
					printf("%c",password[i]);
					bits+=4.525;
				}
			}	
			else if(random==2)
			{	i--;
				random=(rand()%4)+1;
				if(answer2[0]=='y')
				{ 	
					i++;
					password[i]=LETTER[rand()%26];
					printf("%c",password[i]);
					bits+=4.525;
				}
			}	
			
			else if(random==3)
			{	
				i--;
				random=(rand()%4)+1;
				if(answer3[0]=='y')
				{	
					i++;
					password[i]=symbols[rand()%11];
					printf("%c",password[i]);
					bits+=3.7;
							
				}
			}
	 		
	
			else if(random==4)
			{			
				i--;
				random=(rand()%4)+1;
				if(answer4[0]=='y')
				{	
					i++;
					password[i]=numbers[rand()%10];
					printf("%c",password[i]);
					bits+=3.175;
				}
			}
		password[i]='\0';
	}
}
else{
	
	printf("\nPlease include at least one characters set for the password to be based on.\n\nclick 'y' to try again 'n' to exite:");
	answer5[0]=getch();
	if(answer5[0]=='y')
	{
		system("cls");
		goto start;
	}
}
int asci=254;
	
	if(answer1[0]=='y' || answer2[0]=='y' || answer3[0]=='y'|| answer4[0]=='y')
	{
	
		if(bits<24.3)
		{
			printf("\n\nPassword Strength: Very Weak %c\n\nbits:%.2f",asci,bits);
		}
		else if(bits>=24.3 && bits<48.7)
		{
			printf("\n\nPassword Strength: Weak %c %c\n\nbits:%.2f",asci,asci,bits);
		}
		else if(bits>=48.7 && bits<60.9)
		{
			printf("\n\nPassword Strength: Good %c %c %c\n\nbits:%.2f",asci,asci,asci,bits);
		}
		else if(bits>=60.9 && bits<121.7)
		{
			printf("\n\nPassword Strength: Strong %c %c %c %c\n\nbits:%.2f",asci,asci,asci,asci,bits);
		}
		else if(bits>=121.7)
		{
			printf("\n\nPassword Strength: Strong %c %c %c %c %c\n\nbits:%.2f",asci,asci,asci,asci,asci,bits);
		}
	}
		printf("\nanother password\nyes/no:");
		for(i=0;i<=2;i++)
		{
			deci[i]=getch();
			printf("%c",deci[i]);
		}
		if(strcmp(deci,"yes")==0)
		{
			bits=0;
			system("cls");
			goto again;
		}

}
