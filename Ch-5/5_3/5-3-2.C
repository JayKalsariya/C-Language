#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int choise;
	clrscr();
	p("\nPress 1 for English");
	p("\nPress 2 for Hindi");
	p("\nPress 3 for Gujarati");
	p("\nEnter your choise : ");
	s("%d",&choise);
	switch(choise)
	{
		case 1:
			p("\nPress 1 for Internet Recharge");
			p("\nPress 2 for Top-up  Recharge");
			p("\nPress 3 for Special Recharge");
			p("\nEnter your choise : ");
			s("%d",&choise);
			switch(choise)
			{
				case 1:
					p("\nSuccesfull your Internet Recharge");
					break;
				case 2:
					p("\nSuccesfull your Top-up  Recharge");
					break;
				case 3:
					p("\nSuccesfull your Special Recharge");
					break;
				default:
					p("\nInvalid Input !!");
					break;
			}
			break;
		case 2:
			p("\nInternet Recharge ke liye 1 dabaye");
			p("\nTop-up  Recharge ke liye 2 dabaye");
			p("\nSpecial Recharge kr liye 3 dabaye");
			p("\nEnter your choise : ");
			s("%d",&choise);
			switch(choise)
			{
				case 1:
					p("\nInternet Recharge safaltapurvak purn hua.");
					break;
				case 2:
					p("\nTop-up  Recharge safaltapurvak purn hua.");
					break;
				case 3:
					p("\nSpecial Recharge safaltapurvak purn hua.");
					break;
				default:
					p("\nInvalid Input !!");
					break;
			}
			break;
		case 3:
			p("\nInternet Recharge mate 1 dabavo");
			p("\nTop-up  Recharge  mate 2 dabavo");
			p("\nSpecial Recharge  mate 3 dabavo");
			p("\nEnter your choise : ");
			s("%d",&choise);
			switch(choise)
			{
				case 1:
					p("\nInternet Recharge safaltapurvak purn thayu.");
					break;
				case 2:
					p("\nTop-up  Recharge safaltapurvak purn thayu.");
					break;
				case 3:
					p("\nSpecial Recharge safaltapurvak purn thayu.");
					break;
				default:
					p("\nInvalid Input !!");
					break;
			}
			break;
		default:
			p("\nInvalid Input !!");
			break;
	}
	getch();

}