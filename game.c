#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void compare();

void main()
{
	char a[50];

	printf("enter the player name\n");

	scanf("%s",a);
	
	compare(a);

}


void compare(char *p)
{
	int i,k=0,count = 0;

	char *a[] = { "yuvaraj","msdhoni","rohith","maxwell","abd","klrahul","virat","ashwin","hardhikpandya","krunalpandya","rabada","rashidkhan","gayle","bhuvaneswarkumar","gabbr","sureshraina","sangakara","malinga"," warner"};


printf("string length:%ld\n",strlen(p));
	while(1)
	{

		if(k == 20)
		{
			exit(0);
		}

		count = 0;

		for(i = 0;p[i] != '\0'; i++)
		{
			if(p[i] == a[k][i])
			{
				count++;						
			}
		}
	
	if ((count == strlen(a[0])) && (k == 0))
	{
	printf(" 'Yuvaraj singh' He is an indian internatinal cricketr & all rounder,\n his ODI- highest score is 150  OVER england,\n he hits  6 sixes in a single over OVER england his world's nick name is  *king of six*\n");

		break;
	}
	if ((count == strlen(a[1])) && (k == 1))
	{
	printf("Mahendra singh Dhoni he is an indian internatinal cricketr\n &captain of india team from 2007 in all formats\n& best finesher & best wk in the world ODI-highest score is 183\n his nick name is *mr.cool*\n");
	break;
	}
	if ((count == strlen(a[2])) && (k == 2))
	{
	printf("Rohith sharma  he is indian internatinal crickter\n & vice captain of india team ,openar batsman, he hits 200+ runs in ODI MATCHs three times 264 is his highest score as well as this 264 is ODI highest score in the world\n his also colled as *hit man* \n");
	break;
	}
	if ((count  == strlen(a[3])) && (k == 3))
	
	{
  	printf("glann james maxwell he is austrailan internatinal cricketr\n & All rounder, his played all formats\n his ODI hieghest score -102 very fast\n & out or right batsman his t20(145*) score is higher then ODI\n");
	break;
	}	
	if ((count == strlen(a[4])) && (k == 4))
	{
	printf("abraham benjamin de villiers he is south african internatinal crickter\n all rounder ,his played all formats \n his odi  hights score is 176  &  he is very dengrous batsman\n in the world his play like 360 fastest playerhis very spacl in hitting six and back six \n his also colled as *mr.360*  \n");
	break;
	}
	if ((count == strlen(a[5])) && (k == 5))
	{
	printf("kannanur lokesh rahul he is indian internatinal crickter\n he is opener batsman ,his plyaed few matechs only\n but he get star mark in cricket spacelly openner batsman\n he gives his best in 2k18 ipl as opener rahul is also one of player who is the future of indian cricket\n");
	break;
	}
	if((count == strlen(a[6])) && (k == 6))
	{
	printf("virat kohli he is indian internatinal cricketr\n he is  present captain of india team & best batsman\n his ODI highest score 183  he hits 100 in all formats except t20(ipl) he is also colled as *run mechine*  \n");
		break;
	}
	if((count == strlen(a[7])) && (k == 7))
	{
	printf("ravichandran ashwin he is an indian internatinal cricketr he is all rounder but most of the times he plays with ball he is best spinner his ODI WICKETS 150 ,& TEST -316 ,T20- 52 best bowling is *4/8* \n");
	break;
	}
	if((count == strlen(a[8])) && (k == 8))
	{
	printf("hardhik pandya he is indian internatinal cricketr\n & all rounder he plays bat as well as ball also\n & he is best finesher , he is spacl in hatric six's\n");
	break;

	}
	if((count == strlen(a[9])) && (k == 9))
	{
	printf(" krnual pandya he is  an indian international cricketr,\n  he is batsman he is upcoming player in the indian internatinal cricket team\n");
	break;
	}
	if((count == strlen(a[10])) && (k == 10))
	{
	printf(" kagiso rabada he is south african internatiuonal crickter\n he is toper in icc ODI ,T20M bowller he played very less matechs but his perfomence is best than others his best is *6/16*\n");
		break;
	}

	if((count == strlen(a[11])) && (k == 11))
	{
	printf("rashid khan arman he is afganiusthan internatinal crickter\n he will play the matchs both the things bat as will as ball\n he is  one of the best all rounder in icc  ODI W-100, BEST IS *7/18*  \n");
		break;
	}
	if ((count == strlen(a[12])) && (k == 12))
	{
	printf("chris gayle he is west indies internatinal crickter bset batsman in icc he played all formats\n & all rounder also he is very spcl to hitting six's 333 is test best score ,215 is ODI best score and\n *ipl best is 175 in just of 75 balls* most imp player in icc for west indes\n six- 98 in test ,275 in ODI 103 in t20 \n");
	break;
	}
	if((count == strlen(a[13])) && (k == 13))
	{
	printf("Bhuvaneswar kumar singh he is indian internatinal crickter \n imp pace bowler in indian team he played all formats he plays with ball and change the match results best W In ODI 5/42,t20-5/24  bhuvi is very spcl to *death overs*\n");
		break;
	}
	if((count == strlen(a[14])) && (k == 14))
	{
	printf("shikhar dhawan he is indian internatinal crickter\n best opener batsman his best is 137 in ODI he is also colled as *gabber*\n ");
		break;
	}
	if((count == strlen(a[15])) && (k == 15))
	{
	printf("Suresh kuimar raina  he is indian internatinal crickter\n he is fastest player in indian team his best score in ODI is 116*\n ");
	break;
	}
	if((count == strlen(a[16])) && (k == 16))
	{
	printf("kumar sangakara he is srilankan internatinal crickter \n he is captain of srilanka good captaincyhis best is 169 in ODI  \n");
	break;
	}
	if((count == strlen(a[17])) && (k == 17))
	{
	printf("lasith malinga he is srilankan internatinal cricketr\n he is very most imp & denguros  pace bowler some times\n srilanka won the match because of his bowling  \n");
	break;
	}
	if((count == strlen(a[18])) && (k == 18))
	{
	printf("devid warner he is astrilian internatinal crickter\n he is openr batsman in astrailian team very inteligent batsman\n and palys like legend and won the whole world herats\n then champion ships*he is the heart of sunriser tem in ipl\n*");
	break;
	}
	k++;
}

	/*	if(count == strlen(p))
		{
			goto details;
		}
		if(k < 36)
		{
			k++;
		}
		else
		{
			printf("String not found\n");
			return;
		}*/

	 
	



}

