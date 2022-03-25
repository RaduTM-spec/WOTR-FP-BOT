//Hello. To run the bot, install Code Blocks / Visual Studio, create a new project + file, copy-paste all that's here to that file    (try do not omit anything, inlcuding this text and paranteses ( ) { })    and press Build & Run Button.

//The language used is C++

//Where the program ask you for the Sleep Grade (is the first question) press i to get the instructions. This action can be performed every time you open the program.

//General things about this program
	 
	/*
	    This bot is an almost fully automatic one, where you have just to answer every turn to circa 5 questions and press any key in the Action Resolution to take an action
		It's not a very sofisticated one, just follow the actions bellow (and depending on the Action Dice)
		The bot it's not fully tested, so probably in real games few things will not be like he the bot knows, in this case  close it and play with yourself:)
		 -that's because i wanted to be as automatic as possible and look fancy
		The bot will kill one damage of corruption if random companion is choosed: so point is bot disadvantage
		The Dice are auto-randomized by the program, so you shouldn't introduce them every round
	    
	The General Actions that the program does are:
		  -Move the Fellowship trought the shortest route
	      -Bring Gandalf the White as quickly as he can and move him to fangorn
		  -Start with GTG as the guide, and after he left Strider becomes the Guide(ATENTION!-if Strider in the fellowship and he has choosed as the random Companion, choose another companion,the program is not maked to recognize this (!BUT the program will ask you if Strider is died at the final of a turn): in this way the bot will get some pretty luck and will have a chance to win you
		  -Separate Strider if Dead Men of Dunhharow card is in the fp hand
		  -Keep the rest of companions in the Fellowship to absorb Corruption 
	      -When it comes to PALANTIR (-play a card if possible,if not draw one)
		  
	
	//IF THE BOT CURRENT INFORMATION ABOUT THE GAME ARE WRONG - just ignore them, this doesn t affect so much the dice actions, so in this case just read the actions
	

	*/

#include <iostream>
#include <chrono>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <dos.h>
#include <Windows.h>
#include <windows.h>



using namespace std;
void readINSTRUCTIONS()
{
	cout << endl << endl;
	cout << "   -This is a Free Peoples BOT for War of the Ring game for players that plays as the Shadow" << endl;
	cout << "   -Press (y/n) : - press y or Y for Yes and any key for NO" << endl;
	cout << "   -C-Character M-Muster H-Army/Muster P-Palantir W-Will of the West" << endl;
	cout << "   -The FellowShip always will choose the shortest route (Throught Moria)" << endl;
	cout << "  Current Grade of Delay is : 0  ";


}
void bringgtw()
{
	cout << "   >>>   W - Bring Gandalf The White in Play   <<<" << endl;

}
void bringgtw1()
{
	cout << "   >>>   C - Move the Fellowship   <<<" << endl << endl;
	cout << "   >>>   C - Separate Gandalf The Grey from the Fellowship and let Strider to be the Guide  <<<" << endl << endl;
	cout << "   >>>   W - Bring Gandalf The White in Play   <<<" << endl;

}
void bringgtw2()
{
	cout << "   >>>   C - Separate Gandalf The Grey from the Fellowship and let Strider to be the Guide <<<" << endl << endl;
	cout << "   >>>   W - Bring Gandalf The White in Play   <<<" << endl;

}
void sepstrider()
{
	cout << "   >>>   C - Separe Strider and few Companions from the Fellowship to a Rohan Region   <<<   " << endl;
}
void movewithW()
{
	cout << "   >>>   W - Move the Fellowship   <<<" << endl;
}
void movewithC()
{
	cout << "   >>>   C - Move the Fellowship   <<<" << endl;
}
void movewithMR()
{
	cout << "   >>>   ElvenRing + M - Move the Fellowship   <<<" << endl;
}
void movewithHR()
{
	cout << "   >>>   ElvenRing + H - Move the Fellowship   <<<" << endl;
}
void movewithPR()
{
	cout << "   >>>   ElvenRing + P - Move the Fellowship   <<<" << endl;
}
void hidewithM()
{
	cout << "   >>> M - Hide the Felloship   <<<" << endl;
}
void hidewithH()
{
	cout << "   >>> H - Hide the Felloship   <<<" << endl;
}
void hidewithP()
{
	cout << "   >>> P - Hide the Felloship   <<<" << endl;
}
void hidewithW()
{
	cout << "   >>> W - Hide the Felloship   <<<" << endl;
}
void hidewithC()
{
	cout << "   >>> C - Hide the Felloship   <<<" << endl;
}
void useP()
{
	cout << "   >>>   P - Play Strategy/Character card or Draw one card   <<<" << endl;
}
void useM()
{
	cout << "      Can Recruit ?(y/n): ";
	char k = _getch();
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "                                                   " << endl;
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << endl;
	switch (k)
	{
	case 'y':
		cout << "   >>>   M - Recruit One Elite Unit   <<<" << endl;

		break;
	case 'Y':
		cout << "   >>>   M - Recruit One Elite Unit   <<<" << endl;

		break;
	default:
		cout << "   >>>   M - Play Muster Card or Move Gondor on the Political Track   <<<" << endl;

		break;
	}
}
void useH()
{
	cout << "      Can Recruit ?(y/n): ";
	char k = _getch();
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << "                                                   " << endl;
	cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cout << endl;
	switch (k)
	{
	case 'y':
		cout << "   >>>   H - Recruit One Elite Unit   <<<" << endl;

		break;
	case 'Y':
		cout << "   >>>   H - Recruit One Elite Unit   <<<" << endl;

		break;
	default:
		cout << "   >>>   H - Play Strategy Card or Move Gondor on the Political Track   <<<" << endl;

		break;
	}
}

int main()
{


	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	//introduction
	SetConsoleTextAttribute(hConsole, 15);
	cout << "         The ";
	SetConsoleTextAttribute(hConsole, 11);
	cout << "Base Game";
	SetConsoleTextAttribute(hConsole,15);
	cout << " of ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << "War of the Ring";
	SetConsoleTextAttribute(hConsole, 15);
	cout << " by ";
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Radu";

	cout << endl << endl;

	SetConsoleTextAttribute(hConsole, 15);
	cout << "              The ";
	SetConsoleTextAttribute(hConsole, 3);
	cout << "BOT";
	SetConsoleTextAttribute(hConsole, 15);
	cout << " play as ";
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Free Peoples";

	cout << endl;



	//Instructions
	SetConsoleTextAttribute(hConsole, 8);

	cout << "                Sleep(Delay) Grade(1-9): ";
	//Seconds for Sleep
	int sleepsec;
	char sleeps = _getch();
	switch (sleeps)
	{
	case '1':
		sleepsec = 100;
		break;
	case '2':
		sleepsec = 200;
		break;
	case '3':
		sleepsec = 300;
		break;
	case '4':
		sleepsec = 400;
		break;
	case '5':
		sleepsec = 500;
		break;
	case '6':
		sleepsec = 600;
		break;
	case '7':
		sleepsec = 700;
		break;
	case '8':
		sleepsec = 800;
		break;
	case '9':
		sleepsec = 900;
		break;
	case 'i':
		sleepsec = 0;
		SetConsoleTextAttribute(hConsole, 8);
		readINSTRUCTIONS();
		break;
	case 'I':
		sleepsec = 0;
		SetConsoleTextAttribute(hConsole, 8);
		readINSTRUCTIONS();
		break;
	default:
		sleepsec = 0;
		break;
	}



	//_________________________________________________________________________________________________________________________________

GAMESTART:
	cout << sleeps << endl;
	unsigned int Turn = 1;//The number of turn
	char fpdice[6];//The Current Dice
	int numberfpdice = 4;//The NUmber of Dice

	bool PlayOn = true;
	int FellowshipRegionMoves = 0;
	int FellowshipTrack = 0;
	 int CorruptionTrack = 0;
	int SPVictoryPoints;
	
	bool GTWinplay = false;
	bool GTGoutoffsp = false;
	bool FellowshipState = true;

	bool GTGGuide = true;
	bool StriderGuide = false;
	bool OtherGuide = false;
	bool GollumGuide = false;

	bool GTWinfangorn = false;

	bool Striderinrohan = false;

	bool FSPinmordor = false;

	bool deadmeninhand = false;

	int ElvenRings = 3;

	size_t HuntAllocation;
	//Eyes in the HuntBox


	//Game
	while (PlayOn)
	{
		SetConsoleTextAttribute(hConsole, 10);
		cout << "                    ------------" << endl;
		cout << "                    |  Turn " << Turn << "  |" << endl;
		cout << "                    ------------" << endl;

		Sleep(100);

		//Show The Guide
		SetConsoleTextAttribute(hConsole, 1);
		cout << "                   Guide : ";
		if (GTGoutoffsp == false && GTGGuide==true)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Gandalf The Grey";
		}
		if (StriderGuide == true)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Strider";
		}
		if (GollumGuide == true)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Gollum";
		}
		if (OtherGuide == true)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Other Companion";
		}
		cout << endl;

		//Show Felloship State
		SetConsoleTextAttribute(hConsole, 1);
		cout << "              Fellowship : ";
		if (FellowshipState == true)
		{
			SetConsoleTextAttribute(hConsole, 11);
			cout << "Hidden";
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Revealed";
		}
		cout << endl;

		if (FSPinmordor == true)
		{
			FellowshipTrack = -1;
		}
		//Show Fellowship Progress

		SetConsoleTextAttribute(hConsole, 1);
		cout << "                   Track : ";
		SetConsoleTextAttribute(hConsole, 8);
		for (size_t i = 0; i < 13; i++)
		{  
			if(FellowshipTrack == i && CorruptionTrack == i)
			{
				SetConsoleTextAttribute(hConsole, 20);
				cout << i;
				SetConsoleTextAttribute(hConsole, 8);
				cout << " ";
				continue;

			}
			if (FellowshipTrack == i)
			{
				SetConsoleTextAttribute(hConsole, 1);
				cout << i << " ";
				SetConsoleTextAttribute(hConsole, 8);
				continue;
				
			}
			if (CorruptionTrack == i)
			{
				SetConsoleTextAttribute(hConsole, 12);
				cout << i << " ";
				SetConsoleTextAttribute(hConsole, 8);
				continue;
				
			}
			
			cout << i << " ";
			
		}
		
		cout << endl;
		
		bool OneMoveperTurn = false;

		/*Atributte Code-     3 - Phase
							  8 - Text
							  1 - dice
							  12 - SP
							  6 - Action
		 */

		//Show if Fellowship in Mordor
		if (FSPinmordor == true)
		{
			SetConsoleTextAttribute(hConsole, 15);
			cout << "                           The  ";
			SetConsoleTextAttribute(hConsole, 1);
			cout << "Fellowship";
			SetConsoleTextAttribute(hConsole, 15);
			cout << " is in ";
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Mordor";
			cout << endl;
		}
Sleep(100);


		 //  (1) Recover Action dice & Draw Event Cards

		SetConsoleTextAttribute(hConsole, 3);
		cout << "-----------------------" << endl;
		cout << "1#-Recover Action Dice |" << endl;
		cout << "-----------------------" << endl;
		//+
		SetConsoleTextAttribute(hConsole, 6);
		cout << "   >>>   Draw cards   <<<   " << endl << endl;

		SetConsoleTextAttribute(hConsole, 8);
		cout << "   Free Peoples have ";

		SetConsoleTextAttribute(hConsole, 1);
		cout << numberfpdice;

		SetConsoleTextAttribute(hConsole, 8);
		cout << " dice in the Dice Pool .";

		//show fp dice in the dice pool
		if (numberfpdice == 5)
		{
			cout << " (";
			SetConsoleTextAttribute(hConsole, 15);
			cout << "Gandalf The White in Play";
			SetConsoleTextAttribute(hConsole, 8);
			cout << ")";
		}
		cout << endl;
		Sleep(sleepsec);






		//  (2) Fellowship Phase
		SetConsoleTextAttribute(hConsole, 3);
		cout << "-------------------" << endl;
		cout << "2#-FellowShip Phase |" << endl;
		cout << "-------------------" << endl;
		//+
		SetConsoleTextAttribute(hConsole, 8);
		cout << "   Is the FellowShip in a Region with a ";

		SetConsoleTextAttribute(hConsole, 12);
		cout << "Nazgul";

		SetConsoleTextAttribute(hConsole, 8);
		cout << " or a Shadow Player ";

		SetConsoleTextAttribute(hConsole, 12);
		cout << "Stronghold";

		SetConsoleTextAttribute(hConsole, 8);
		cout << " ?";

		SetConsoleTextAttribute(hConsole, 14);
		cout << "(y/n)";

		SetConsoleTextAttribute(hConsole, 8);
		cout << ":";

		char NazgStrong = _getch();
		//Verify the security of declaration of FSP
		if (NazgStrong == 'y' || NazgStrong == 'Y')
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "Yes";
			SetConsoleTextAttribute(hConsole, 6);
			cout << endl << endl;
			cout << "               >>>  Declare the Fellowship  <<<" << endl;
		}
		else
		{
			SetConsoleTextAttribute(hConsole, 14);
			cout << "No";
			cout << endl;
		}
		Sleep(sleepsec);






		// (3) Hunt Allocation
		SetConsoleTextAttribute(hConsole, 3);
		cout << "-------------------" << endl;
		cout << "3#-Hunt Allocation |" << endl;
		cout << "-------------------" << endl;

		SetConsoleTextAttribute(hConsole, 12);
		cout << "   Eye";
		SetConsoleTextAttribute(hConsole, 8);
		cout << "(";
		SetConsoleTextAttribute(hConsole, 12);
		cout << "s";
		SetConsoleTextAttribute(hConsole, 8);
		cout << ") in the ";
		SetConsoleTextAttribute(hConsole, 12);
		cout << "HuntBox";
		SetConsoleTextAttribute(hConsole, 8);
		cout << " : ";


		SetConsoleTextAttribute(hConsole, 8);
		cout << "(press a number)";
		char inHuntBox = _getch();
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		//Fill HuntBox
		switch (inHuntBox)
		{
		case '1':
			HuntAllocation = 1;
			break;
		case '2':
			HuntAllocation = 2;
			break;
		case '3':
			HuntAllocation = 3;
			break;
		case '4':
			HuntAllocation = 4;
			break;
		case '5':
			HuntAllocation = 5;
			break;
		case '6':
			HuntAllocation = 6;
			break;
		case '7':
			HuntAllocation = 7;
			break;
		default:
			HuntAllocation = 0;
			break;

		}

		cout << "       ";
		cout << "\b\b\b\b\b\b\b";
		SetConsoleTextAttribute(hConsole, 12);
		cout << HuntAllocation;
		cout << "               ";
		cout << "\b\b\b\b\b\b\b";
		cout << endl;

		//Create a max move per turn feature
				   /*
				   if 5+ eyes - 1 move
				   if 4 eyes - 2 moves\
				   if 3 eyes - 3 moves
				   */
		unsigned int maxmoves;
		switch (HuntAllocation)
		{
		case 0:
			maxmoves = 6;
			break;
		case 1:
			maxmoves = 5;
			break;
		case 2:
			maxmoves = 4;
			break;
		case 3:
			maxmoves = 3;
			break;
		case 4:
			maxmoves = 2;
			break;
		default:
			maxmoves = 1;
			break;
		}

		//Reduce maxmoves if fsp is in mordor
		if (maxmoves > 2 && FSPinmordor == true)
		{
			maxmoves--;
		}


		Sleep(sleepsec);





		// (4) Action Roll
		SetConsoleTextAttribute(hConsole, 3);
		cout << "---------------" << endl;
		cout << "4#-Action Roll |" << endl;
		cout << "---------------" << endl;
		Sleep(sleepsec);
		//Roll the dice
		srand(time(NULL));
		for (size_t i = 1; i <= numberfpdice; i++)
		{
			int x = rand() % 6 + 1;
			switch (x)
			{

			case 3:
				fpdice[i] = 'M';
				break;
			case 4:
				fpdice[i] = 'H';
				break;
			case 5:
				fpdice[i] = 'P';
				break;
			case 6:
				fpdice[i] = 'W';
				break;
			default:
				fpdice[i] = 'C';
				break;

			}
		}

		SetConsoleTextAttribute(hConsole, 8);
		cout << "   FP dice : ";
		SetConsoleTextAttribute(hConsole, 1);
		//Write Dice
		for (size_t i = 1; i <= numberfpdice; i++)
		{
			cout << fpdice[i] << " ";
		}

		cout << endl;
        Sleep(sleepsec);






		// (5) Action Resolution
		SetConsoleTextAttribute(hConsole, 3);
		cout << "---------------------" << endl;
		cout << "5#-Action Resolution |" << endl;
		cout << "---------------------" << endl;

		//-------------------------------------------------------------------------------------------------------------------------------
	    int C = 0, M = 0, H = 0, P = 0, W = 0;
		//Dice Pool Creation
		for (size_t i = 1; i <= numberfpdice; i++)
		{
			switch (fpdice[i])
			{
			case 'C':
				C++;
				break;
			case 'M':
				M++;
				break;
			case 'H':
				H++;
				break;
			case 'P':
				P++;
				break;
			case 'W':
				W++;
				break;
			}
		}
		//LOGICS
		{//[]Actions in cases

			//Cases
			 /*
			 1.GTW not in play -- CCW (Move fellowhip,Separate GTG,Bring GTW)
			 2.Move Felloship
				Use W to move felloship
				Use C to move,then ring+Muster,army,palantir,move at least one time per turn;
			 3.Hide Felloship
			   Use Strider ability: Muster,army,palantir
			   Use will,then caracter
			 4.Use Palantir
			   — Resolve top Strategy card. If it puts units on the board, do so and end
			   — If it does not resolve, resolve the top Character card
			   — If it does not resolve, alternate Event decks until an Event card resolves
			 5. Use muster
			   — Add an Elite to the first listed location that is At War, not under siege, and at or below starting forces:
			   — Minas Tirith, Helm’s Deep, Woodland Realm, Dol Amroth, Lorien, Rivendell, Edoras, Erebor, Dale
			   — If every legal muster site in that list is above starting forces, add a regular to the first two legal locations but never reinforce above 5 units
			   — 4.2 Pass
			   — 4.3 Move one nation down the Political Track, in order of precedence: Gondor, Elves, Rohan, Dwarves, North

			 Strider take damage until 6 corruption,then random companion
			 Gollum Reveals if 10 Corruption

			 */

			 //Start to take actions
			 // use 6 for action color


		   /*Action in function of corruption
		1.if gtg guide,kill gtg
		2.if strider guide-take damage until 6
		3.if other guides
			  -if damage 1 kill random companion
			  -if damage 2+ kill guide

		*/

		}
		//FLOGICS

	ACTIONSTART:

		SetConsoleTextAttribute(hConsole, 8);
		cout << "   Press any key to Take Action";
		_getch();
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		cout << "                                                   " << endl;
		cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		
		
		
		
		//Actions
		SetConsoleTextAttribute(hConsole, 6);

		//bring GTW directly if he was killed
		if(W>=1 && GTGoutoffsp==true && GTWinplay==false && Turn>1)
		{
			bringgtw();
			W--;
			GTWinplay = true;
			numberfpdice++;
			goto ACTIONSTART;
		}

		//bring GTW with 3 dice      MMMMMMMMMMMM
		if (C >= 2 && W >= 1 && GTGoutoffsp == false && GTWinplay == false && FellowshipState == true && maxmoves > 0 && Turn>1)
		{
			bringgtw1();//move fps;separe gtg,bring gtw
			//fps state
			cout << "      Is FellowShip Revealed?(y/n):";
			char k = _getch();
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << "                                                   " << endl;
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << endl;
			switch (k)
			{
			case 'y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			case 'Y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			default:
				FellowshipState = true;
				break;
			}
			//CorruptionADD and choose to deal with
			if (true)
			{
				cout << "      How much ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Damage ";
				SetConsoleTextAttribute(hConsole, 6);
				cout << "the FellowShip received : ";

				SetConsoleTextAttribute(hConsole, 8);
				cout << "(press a number)";
				char d = _getch();
				int tiledamage;
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				switch (d)
				{
				case '0':
					tiledamage = 0;
					break;
				case '1':
					tiledamage = 1;
					CorruptionTrack++;
					break;
				case '2':
					tiledamage = 2;
					CorruptionTrack += 2;
					break;
				case '3':
					tiledamage = 3;
					CorruptionTrack += 3;
					break;
				case '4':
					tiledamage = 4;
					CorruptionTrack += 4;
					break;
				case '5':
					tiledamage = 5;
					CorruptionTrack += 5;
					break;
				case '6':
					tiledamage = 6;
					CorruptionTrack += 6;
					break;
				case '7':
					tiledamage = 7;
					CorruptionTrack += 7;
					break;
				case '8':
					tiledamage = 8;
					CorruptionTrack += 8;
					break;
				case '9':
					tiledamage = 9;
					CorruptionTrack += 9;
					break;
				default:
					tiledamage= 0;
					break;
				}
				SetConsoleTextAttribute(hConsole, 8);
				cout << "Current ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Corruption ";
				SetConsoleTextAttribute(hConsole, 8);
				cout << ": ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << CorruptionTrack;

				if (CorruptionTrack >= 12)
				{
					cout << endl;
					goto VICTORYCHECK;
				}
				cout << endl;
				//ACTION in function of corruption

				if (GTGGuide == true && tiledamage > 0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Gandalf the Grey   <<<   ";
					GTGGuide = false;
					GTGoutoffsp = true;
					StriderGuide = true;
					goto DEALWITHDAMAGEFINISH;
				}
				if (StriderGuide == true && CorruptionTrack <= 6 && tiledamage>0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Take the Damage   <<<   ";
					
					goto DEALWITHDAMAGEFINISH;
				}
				if (StriderGuide == true && CorruptionTrack >= 6 && tiledamage >0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Random Companion   <<<   ";
					CorruptionTrack = CorruptionTrack - 1;
					goto DEALWITHDAMAGEFINISH;
				}
				if (OtherGuide == true)
				{
					SetConsoleTextAttribute(hConsole, 6);
					switch (d)
					{
					case '0':
						goto DEALWITHDAMAGEFINISH;
						break;
					case '1':
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill Random Companion   <<<   ";
						CorruptionTrack = CorruptionTrack - 1;
						goto DEALWITHDAMAGEFINISH;
						break;
					default:
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill the Guide   <<<   ";
						CorruptionTrack = CorruptionTrack - 2;
						goto DEALWITHDAMAGEFINISH;
						break;
					}
					
				}
				if (GollumGuide == true)
				{
					SetConsoleTextAttribute(hConsole, 6);
					if (CorruptionTrack > 9)
					{
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Reveal the Fellowship to absorb 1 damage   <<<   ";
						FellowshipState = false;
						CorruptionTrack = CorruptionTrack - 1;
						
						goto DEALWITHDAMAGEFINISH;
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Take the Damage   <<<   ";
						
						goto DEALWITHDAMAGEFINISH;
					}

				}
			DEALWITHDAMAGEFINISH:;
				//
			}

			//
			C--;
			C--;
			W--;
			GTGoutoffsp = true;
			GTGGuide = false;
			StriderGuide = true;
			GTWinplay = true;
			numberfpdice++;
			OneMoveperTurn = true;
			maxmoves--;
			FellowshipTrack++;
			FellowshipRegionMoves++;
			goto ACTIONSTART;
		}

		//bring GTW with 2 dice
		if (C == 1 && W >= 1 && GTGoutoffsp == false && GTWinplay == false   && Turn>1)
		{
			bringgtw2();//separe gtg,bring gtw
			//fsp state
			C--;
			W--;
			GTGoutoffsp = true;
			GTGGuide = false;
			StriderGuide = true;
			GTWinplay = true;
			numberfpdice++;
			goto ACTIONSTART;
		}

		//separate Strider if Dead men of Dunharrow
		if (deadmeninhand == true && FellowshipRegionMoves>3 && FellowshipRegionMoves<9 && StriderGuide==true && C < 2 && C>0)
		{
			sepstrider();
			StriderGuide = false;
			OtherGuide = true;
			Striderinrohan = true;
			C--;
			goto ACTIONSTART;
			
		}

		//move if no C and just W, but GTG guide  MMMMMMMMMM
		if (GTGGuide == true && C == 0 && W > 0 && FellowshipState == true && maxmoves > 0)
		{
			movewithW();

			//FSP STATE
			cout << "      Is FellowShip Revealed?(y/n):";
			char k = _getch();
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << "                                                   " << endl;
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << endl;
			switch (k)
			{
			case 'y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			case 'Y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			default:
				FellowshipState = true;
				break;
			}
			//
			//CorruptionADD and choose to deal with
			if (true)
			{
				cout << "      How much ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Damage ";
				SetConsoleTextAttribute(hConsole, 6);
				cout << "the FellowShip received : ";

				SetConsoleTextAttribute(hConsole, 8);
				cout << "(press a number)";
				char d = _getch();
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				switch (d)
				{
				case '0':
					break;
				case '1':
					CorruptionTrack++;
					break;
				case '2':
					CorruptionTrack += 2;
					break;
				case '3':
					CorruptionTrack += 3;
					break;
				case '4':
					CorruptionTrack += 4;
					break;
				case '5':
					CorruptionTrack += 5;
					break;
				case '6':
					CorruptionTrack += 6;
					break;
				case '7':
					CorruptionTrack += 7;
					break;
				case '8':
					CorruptionTrack += 8;
					break;
				case '9':
					CorruptionTrack += 9;
					break;
				default:
					d = '0';
					break;
				}
				SetConsoleTextAttribute(hConsole, 8);
				cout << "Current ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Corruption ";
				SetConsoleTextAttribute(hConsole, 8);
				cout << ": ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << CorruptionTrack;

				if (CorruptionTrack >= 12)
				{
					cout << endl;
					goto VICTORYCHECK;
				}
				cout << endl;
				//ACTION in function of corruption

				if (GTGGuide == true && d=='1' || d=='2' || d=='3' || d=='4' || d=='5' || d=='6' || d=='7' || d=='8' || d=='9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Gandalf the Grey   <<<   ";
					GTGGuide = false;
					GTGoutoffsp =true;
					StriderGuide = true;
					goto DEALWITHDAMAGEFINISHw;
				}
				if (StriderGuide == true && CorruptionTrack <= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Take the Damage   <<<   ";
					goto DEALWITHDAMAGEFINISHw;
				}
				if (StriderGuide == true && CorruptionTrack >= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Random Companion   <<<   ";
					goto DEALWITHDAMAGEFINISHw;
				}
				if (OtherGuide == true)
				{
					SetConsoleTextAttribute(hConsole, 6);
					switch (d)
					{
					case '0':
						goto DEALWITHDAMAGEFINISHw;
						break;
					case '1':
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill Random Companion   <<<   ";
						goto DEALWITHDAMAGEFINISHw;
						break;
					default:
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill the Guide   <<<   ";
						goto DEALWITHDAMAGEFINISHw;
						break;
					}
				}
			DEALWITHDAMAGEFINISHw:;
				//
			}
			//
			OneMoveperTurn = true;
			W--;
			maxmoves--;
			FellowshipTrack++;
			FellowshipRegionMoves++;
			goto ACTIONSTART;
		}

		//move if no characters and just w     MMMMMMMMMMMMMM
		if (GTWinplay == true && W > 0 && FellowshipState == true && maxmoves > 0)
		{
			movewithW();

			//FSP STATE
			cout << "      Is FellowShip Revealed?(y/n):";
			char k = _getch();
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << "                                                   " << endl;
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << endl;
			switch (k)
			{
			case 'y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			case 'Y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
				FellowshipTrack = -1;
				break;
			default:
				FellowshipState = true;
				break;
			}
			//
			//CorruptionADD
			if (true)
			{
				cout << "      How much ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Damage ";
				SetConsoleTextAttribute(hConsole, 6);
				cout << "the FellowShip received : ";

				SetConsoleTextAttribute(hConsole, 8);
				cout << "(press a number)";
				char d = _getch();
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				switch (d)
				{
				case '0':
					break;
				case '1':
					CorruptionTrack++;
					break;
				case '2':
					CorruptionTrack += 2;
					break;
				case '3':
					CorruptionTrack += 3;
					break;
				case '4':
					CorruptionTrack += 4;
					break;
				case '5':
					CorruptionTrack += 5;
					break;
				case '6':
					CorruptionTrack += 6;
					break;
				case '7':
					CorruptionTrack += 7;
					break;
				case '8':
					CorruptionTrack += 8;
					break;
				case '9':
					CorruptionTrack += 9;
					break;
				default:
					d = '0';
					break;
				}
				SetConsoleTextAttribute(hConsole, 8);
				cout << "Current ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Corruption ";
				SetConsoleTextAttribute(hConsole, 8);
				cout << ": ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << CorruptionTrack;

				if (CorruptionTrack >= 12)
				{
					cout << endl;
					goto VICTORYCHECK;
				}
				cout << endl;
				//ACTION in function of corruption

				if (GTGGuide == true && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Gandalf the Grey   <<<   ";
					GTGGuide = false;
					GTGoutoffsp = true;
					StriderGuide = true;
					goto DEALWITHDAMAGEFINISHw2;
				}
				if (StriderGuide == true && CorruptionTrack <= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Take the Damage   <<<   ";
					goto DEALWITHDAMAGEFINISHw2;
				}
				if (StriderGuide == true && CorruptionTrack >= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Random Companion   <<<   ";
					goto DEALWITHDAMAGEFINISHw2;
				}
				if (OtherGuide == true)
				{
					SetConsoleTextAttribute(hConsole, 6);
					switch (d)
					{
					case '0':
						goto DEALWITHDAMAGEFINISHw2;
						break;
					case '1':
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill Random Companion   <<<   ";
						goto DEALWITHDAMAGEFINISHw2;
						break;
					default:
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill the Guide   <<<   ";
						goto DEALWITHDAMAGEFINISHw2;
						break;
					}
				}
			DEALWITHDAMAGEFINISHw2:;
				//
			}
			//
			OneMoveperTurn = true;
			W--;
			maxmoves--;
			FellowshipTrack++;
			FellowshipRegionMoves++;
			goto ACTIONSTART;
		}

		//normal move with C           MMMMMMMMMMMMMM
		if (C > 0 && FellowshipState == true && maxmoves > 0)
		{
			movewithC();


			//FSP STATE
			cout << "      Is FellowShip Revealed?(y/n):";
			char k = _getch();
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << "                                                   " << endl;
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << endl;
			switch (k)
			{
			case 'y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   " << endl;
				FellowshipTrack = -1;
				break;
			case 'Y':
				FellowshipState = false;
				SetConsoleTextAttribute(hConsole, 6);
				cout << "   >>>   Declare the Fellowship   <<<   " << endl;
				FellowshipTrack = -1;
				break;
			default:
				FellowshipState = true;
				break;
			}
			//
			//CorruptionADD
			if (true)
			{
				cout << "      How much ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Damage ";
				SetConsoleTextAttribute(hConsole, 6);
				cout << "the FellowShip received : ";

				SetConsoleTextAttribute(hConsole, 8);
				cout << "(press a number)";
				char d = _getch();
				cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
				switch (d)
				{
				case '0':
					break;
				case '1':
					CorruptionTrack++;
					break;
				case '2':
					CorruptionTrack += 2;
					break;
				case '3':
					CorruptionTrack += 3;
					break;
				case '4':
					CorruptionTrack += 4;
					break;
				case '5':
					CorruptionTrack += 5;
					break;
				case '6':
					CorruptionTrack += 6;
					break;
				case '7':
					CorruptionTrack += 7;
					break;
				case '8':
					CorruptionTrack += 8;
					break;
				case '9':
					CorruptionTrack += 9;
					break;
				default:
					d = '0';
					break;
				}
				SetConsoleTextAttribute(hConsole, 8);
				cout << "Current ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << "Corruption ";
				SetConsoleTextAttribute(hConsole, 8);
				cout << ": ";
				SetConsoleTextAttribute(hConsole, 12);
				cout << CorruptionTrack;

				if (CorruptionTrack >= 12)
				{
					cout << endl;
					goto VICTORYCHECK;
				}
				cout << endl;
				//ACTION in function of corruption

				if (GTGGuide == true && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Gandalf the Grey   <<<   ";
					GTGGuide = false;
					GTGoutoffsp = true;
					StriderGuide = true;
					goto DEALWITHDAMAGEFINISHc;
				}
				if (StriderGuide == true && CorruptionTrack <= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Take the Damage   <<<   ";
					goto DEALWITHDAMAGEFINISHc;
				}
				if (StriderGuide == true && CorruptionTrack >= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
				{
					SetConsoleTextAttribute(hConsole, 6);
					cout << "   >>>   Kill Random Companion   <<<   ";
					goto DEALWITHDAMAGEFINISHc;
				}
				if (OtherGuide == true)
				{
					SetConsoleTextAttribute(hConsole, 6);
					switch (d)
					{
					case '0':
						goto DEALWITHDAMAGEFINISHc;
						break;
					case '1':
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill Random Companion   <<<   ";
						goto DEALWITHDAMAGEFINISHc;
						break;
					default:
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Kill the Guide   <<<   ";
						goto DEALWITHDAMAGEFINISHc;
						break;
					}
				}
			DEALWITHDAMAGEFINISHc:;
				//
			}
			//
			OneMoveperTurn = true;
			C--;
			maxmoves--;
			FellowshipTrack++;
			FellowshipRegionMoves++;
			goto ACTIONSTART;
		}

		//hiding fsp
        if (FellowshipState == false)
		{
			if (StriderGuide == true)
			{
				if (M > 0)
				{
					hidewithM();
					M--;
					FellowshipState = true;
					goto ACTIONSTART;
				}
				if (H > 0)
				{
					hidewithH();
					H--;
					FellowshipState = true;
					goto ACTIONSTART;
				}
				if (P > 0)
				{
					hidewithP();
					P--;
					FellowshipState = true;
					goto ACTIONSTART;
				}
			}
			else
			{
				if (W > 0)
				{
					hidewithW();
					W--;
					FellowshipState = true;
					goto ACTIONSTART;
				}
				if (C > 0)
				{
					hidewithC();
					C--;
					FellowshipState = true;
					goto ACTIONSTART;
				}

			}
		}

		//Moving with other dice if no one move per turn + Elven RING         MMMMMMMMMMMMM
		if (OneMoveperTurn == false && FellowshipState == true && maxmoves > 0 && OneMoveperTurn == false)
			{
				if (M > 0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					movewithMR();
					//FSP STATE
					cout << "      Is FellowShip Revealed?(y/n):";
					char k = _getch();
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << "                                                   " << endl;
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << endl;
					switch (k)
					{
					case 'y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   " << endl;
						FellowshipTrack = -1;
						break;
					case 'Y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   " << endl;
						FellowshipTrack = -1;
						break;
					default:
						FellowshipState = true;
						break;
					}
					//
					//CorruptionADD
					if (true)
					{
						cout << "      How much ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Damage ";
						SetConsoleTextAttribute(hConsole, 6);
						cout << "the FellowShip received : ";

						SetConsoleTextAttribute(hConsole, 8);
						cout << "(press a number)";
						char d = _getch();
						cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						switch (d)
						{
						case '0':
							break;
						case '1':
							CorruptionTrack++;
							break;
						case '2':
							CorruptionTrack += 2;
							break;
						case '3':
							CorruptionTrack += 3;
							break;
						case '4':
							CorruptionTrack += 4;
							break;
						case '5':
							CorruptionTrack += 5;
							break;
						case '6':
							CorruptionTrack += 6;
							break;
						case '7':
							CorruptionTrack += 7;
							break;
						case '8':
							CorruptionTrack += 8;
							break;
						case '9':
							CorruptionTrack += 9;
							break;
						default:
							d = '0';
							break;
						}
						SetConsoleTextAttribute(hConsole, 8);
						cout << "Current ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Corruption ";
						SetConsoleTextAttribute(hConsole, 8);
						cout << ": ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << CorruptionTrack;

						if (CorruptionTrack >= 12)
						{
							cout << endl;
							goto VICTORYCHECK;
						}
						cout << endl;
						//ACTION in function of corruption

						if (GTGGuide == true && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Kill Gandalf the Grey   <<<   ";
							GTGGuide = false;
							GTGoutoffsp = true;
							StriderGuide = true;
							goto DEALWITHDAMAGEFINISHmr;
						}
						if (StriderGuide == true && CorruptionTrack <= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Take the Damage   <<<   ";
							goto DEALWITHDAMAGEFINISHmr;
						}
						if (StriderGuide == true && CorruptionTrack >= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Kill Random Companion   <<<   ";
							goto DEALWITHDAMAGEFINISHmr;
						}
						if (OtherGuide == true)
						{
							SetConsoleTextAttribute(hConsole, 6);
							switch (d)
							{
							case '0':
								goto DEALWITHDAMAGEFINISHmr;
								break;
							case '1':
								SetConsoleTextAttribute(hConsole, 6);
								cout << "   >>>   Kill Random Companion   <<<   ";
								goto DEALWITHDAMAGEFINISHmr;
								break;
							default:
								SetConsoleTextAttribute(hConsole, 6);
								cout << "   >>>   Kill the Guide   <<<   ";
								goto DEALWITHDAMAGEFINISHmr;
								break;
							}
						}
					DEALWITHDAMAGEFINISHmr:;
						//
					}
					//

					OneMoveperTurn = true;
					M--;
					maxmoves--;
					FellowshipTrack++;
					FellowshipRegionMoves++;
				}
				if (H > 0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					movewithHR();
					//FSP STATE
					cout << "      Is FellowShip Revealed?(y/n):";
					char k = _getch();
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << "                                                   " << endl;
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << endl;
					switch (k)
					{
					case 'y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
						FellowshipTrack = -1;
						break;
					case 'Y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   " << endl;
						FellowshipTrack = -1;
						break;
					default:
						FellowshipState = true;
						break;
					}
					//
					//CorruptionADD
					if (true)
					{
						cout << "      How much ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Damage ";
						SetConsoleTextAttribute(hConsole, 6);
						cout << "the FellowShip received : ";

						SetConsoleTextAttribute(hConsole, 8);
						cout << "(press a number)";
						char d = _getch();
						cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						switch (d)
						{
						case '0':
							break;
						case '1':
							CorruptionTrack++;
							break;
						case '2':
							CorruptionTrack += 2;
							break;
						case '3':
							CorruptionTrack += 3;
							break;
						case '4':
							CorruptionTrack += 4;
							break;
						case '5':
							CorruptionTrack += 5;
							break;
						case '6':
							CorruptionTrack += 6;
							break;
						case '7':
							CorruptionTrack += 7;
							break;
						case '8':
							CorruptionTrack += 8;
							break;
						case '9':
							CorruptionTrack += 9;
							break;
						default:
							d = '0';
							break;
						}
						SetConsoleTextAttribute(hConsole, 8);
						cout << "Current ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Corruption ";
						SetConsoleTextAttribute(hConsole, 8);
						cout << ": ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << CorruptionTrack;

						if (CorruptionTrack >= 12)
						{
							cout << endl;
							goto VICTORYCHECK;
						}
						cout << endl;
						//ACTION in function of corruption

						if (GTGGuide == true && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Kill Gandalf the Grey   <<<   ";
							GTGGuide = false;
							GTGoutoffsp = true;
							StriderGuide = true;
							goto DEALWITHDAMAGEFINISHhr;
						}
						if (StriderGuide == true && CorruptionTrack <= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Take the Damage   <<<   ";
							goto DEALWITHDAMAGEFINISHhr;
						}
						if (StriderGuide == true && CorruptionTrack >= 6 && d == '1' || d == '2' || d == '3' || d == '4' || d == '5' || d == '6' || d == '7' || d == '8' || d == '9')
						{
							SetConsoleTextAttribute(hConsole, 6);
							cout << "   >>>   Kill Random Companion   <<<   ";
							goto DEALWITHDAMAGEFINISHhr;
						}
						if (OtherGuide == true)
						{
							SetConsoleTextAttribute(hConsole, 6);
							switch (d)
							{
							case '0':
								goto DEALWITHDAMAGEFINISHhr;
								break;
							case '1':
								SetConsoleTextAttribute(hConsole, 6);
								cout << "   >>>   Kill Random Companion   <<<   ";
								goto DEALWITHDAMAGEFINISHhr;
								break;
							default:
								SetConsoleTextAttribute(hConsole, 6);
								cout << "   >>>   Kill the Guide   <<<   ";
								goto DEALWITHDAMAGEFINISHhr;
								break;
							}
						}
					DEALWITHDAMAGEFINISHhr:;
						//
					}
					//
					OneMoveperTurn = true;
					H--;
					maxmoves--;
					FellowshipTrack++;
					FellowshipRegionMoves++;
				}
				if (P > 0)
				{
					SetConsoleTextAttribute(hConsole, 6);
					movewithPR();
					//FSP STATE
					cout << "      Is FellowShip Revealed?(y/n):";
					char k = _getch();
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << "                                                   " << endl;
					cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
					cout << endl;
					switch (k)
					{
					case 'y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
						FellowshipTrack = -1;
						break;
					case 'Y':
						FellowshipState = false;
						SetConsoleTextAttribute(hConsole, 6);
						cout << "   >>>   Declare the Fellowship   <<<   "<<endl;
						FellowshipTrack = -1;
						break;
					default:
						FellowshipState = true;
						break;
					}
					
					//CorruptionADD
					if (true)
					{
						cout << "      How much ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Damage ";
						SetConsoleTextAttribute(hConsole, 6);
						cout << "the FellowShip received : ";

						SetConsoleTextAttribute(hConsole, 8);
						cout << "(press a number)";
						char d = _getch();
						cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
						switch (d)
						{
						case '0':
							break;
						case '1':
							CorruptionTrack++;
							break;
						case '2':
							CorruptionTrack += 2;
							break;
						case '3':
							CorruptionTrack += 3;
							break;
						case '4':
							CorruptionTrack += 4;
							break;
						case '5':
							CorruptionTrack += 5;
							break;
						case '6':
							CorruptionTrack += 6;
							break;
						case '7':
							CorruptionTrack += 7;
							break;
						case '8':
							CorruptionTrack += 8;
							break;
						case '9':
							CorruptionTrack += 9;
							break;
						default:
							d = '0';
							break;
						}
						SetConsoleTextAttribute(hConsole, 8);
						cout << "Current ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << "Corruption ";
						SetConsoleTextAttribute(hConsole, 8);
						cout << ": ";
						SetConsoleTextAttribute(hConsole, 12);
						cout << CorruptionTrack;

						if (CorruptionTrack >= 12)
						{
							cout << endl;
							goto VICTORYCHECK;
						}
						cout << endl;
						
					}
					
					OneMoveperTurn = true;
					P--;
					maxmoves--;
					FellowshipTrack++;
					FellowshipRegionMoves++;
				}
		}

		//use W if can't move anymore
		if (W > 0)
		{
			SetConsoleTextAttribute(hConsole, 2);
			cout << "(Transform W in Palantir)" << endl;
			SetConsoleTextAttribute(hConsole, 14);
			useP();
			W--;
			goto ACTIONSTART;
		}

		//use C if can't move anymore
		if (C > 0)
		{
			SetConsoleTextAttribute(hConsole, 6);
			if (GTWinplay == true && GTWinfangorn == false)
			{
				cout << "   >>>   C - Move Gandalf The White in Fangorn (and other Companions if possible)   <<<" << endl;
				GTWinfangorn = true;
			}
			else
				cout << "   >>>   C - Play a Character Card   <<<" << endl;
			C--;
			goto ACTIONSTART;
		}

		//use P
		if (P > 0)
    	{ 
			SetConsoleTextAttribute(hConsole, 6);
			useP();
			P--;
			goto ACTIONSTART;

		}

		//use M
		if (M > 0)
		{
			SetConsoleTextAttribute(hConsole, 6);
			useM();
			M--;
			goto ACTIONSTART;
		}

		//use H
		if (H > 0)
		{
			SetConsoleTextAttribute(hConsole, 6);
			useH();
			H--;
			goto ACTIONSTART;
		}

		//Method to verify if one of the dice has been ommissed
		if (true)


		{
			if (C > 0)
				goto ACTIONSTART;
			if (W > 0)
				goto ACTIONSTART;
			if (P > 0)
				goto ACTIONSTART;
			if (M > 0)
				goto ACTIONSTART;
			if (H > 0)
				goto ACTIONSTART;
			//Finish of this method
		}


		SetConsoleTextAttribute(hConsole, 8);
		cout << "     < ";
		SetConsoleTextAttribute(hConsole, 9);
		cout << "There are no more Action Dice to use";
		SetConsoleTextAttribute(hConsole, 8);
		cout << " >" << endl;
		//-------------------------------------------------------------------------------------------------------------------------------
		Sleep(sleepsec + 1000);





		// (6) Victory Check
		VICTORYCHECK:
		SetConsoleTextAttribute(hConsole, 3);
		cout << "-----------------" << endl;
		cout << "6#-Victory Check |" << endl;
		cout << "-----------------" << endl;
		SetConsoleTextAttribute(hConsole, 12);
		cout << "   SP Victory Points ";
		SetConsoleTextAttribute(hConsole, 8);
		cout << ": ";
//GameEND
		//IF Corruption 12+ = Finish Game
		if(CorruptionTrack >=12)
		{
			PlayOn = false;
			cout << endl;
			SetConsoleTextAttribute(hConsole, 12);
			cout << "                 --------------------------" << endl;
			cout << "                |Shadow Player won the Game|" << endl;
			cout << "                 --------------------------" << endl << endl << endl;
			SetConsoleTextAttribute(hConsole, 8);
			cout << "            Press any key to ";
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Exit";
			SetConsoleTextAttribute(hConsole, 8);
			cout << " or ";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "R";
			SetConsoleTextAttribute(hConsole, 8);
			cout << " to ";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Restart";
			cout << endl;

			char ExitorRestart = _getch();
			switch (ExitorRestart)
			{
			case 'r':
				SetConsoleTextAttribute(hConsole, 9);
				cout << endl;
				cout << "                   The Game is Restarting       ";
				Sleep(1500);
				system("cls");
				SetConsoleTextAttribute(hConsole, 13);
				cout << "Game Restarted" << endl;
				goto GAMESTART;

				break;
			case 'R':
				SetConsoleTextAttribute(hConsole, 9);
				cout << endl;
				cout << "                   The Game is Restarting       ";
				Sleep(1500);
				system("cls");
				SetConsoleTextAttribute(hConsole, 13);
				cout << "Game Restarted" << endl;
				goto GAMESTART;

				break;
			default:
				return 0;
			}
		}
		//READ Shadow Player Victory Points
		
			SetConsoleTextAttribute(hConsole, 8);
			cout << "(press a number to continue or X to finish the ";
			SetConsoleTextAttribute(hConsole, 10);
			cout << "Game";
			SetConsoleTextAttribute(hConsole, 8);
			cout << ")";
			char SPVPS = _getch();
			cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
			cout << "       ";
			cout << "\b\b\b\b\b\b\b";
			SetConsoleTextAttribute(hConsole, 12);
			switch (SPVPS)
			{
			case 'x':
				cout << " 10 Victory Points";
				break;
			case 'X':
				cout << " 10 Victory Points";
			default:
				cout << " " << SPVPS;
				break;
			}

			cout << "                                                               ";
			cout << endl;
			Sleep(sleepsec);
		
		//IF Shadow Player Victory Points = 10 = Finish Game
		if (SPVPS == 'x' || SPVPS == 'X')
		{
			PlayOn = false;
			cout << "                 --------------------------" << endl;
			cout << "                |Shadow Player won the Game|" << endl;
			cout << "                 --------------------------" << endl << endl << endl;
			SetConsoleTextAttribute(hConsole, 8);
			cout << "            Press any key to ";
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Exit";
			SetConsoleTextAttribute(hConsole, 8);
			cout << " or ";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "R";
			SetConsoleTextAttribute(hConsole, 8);
			cout << " to ";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Restart";
			cout << endl;

			char ExitorRestart = _getch();
			switch (ExitorRestart)
			{
			case 'r':
				SetConsoleTextAttribute(hConsole, 9);
				cout << endl;
				cout << "                   The Game is Restarting       ";
				Sleep(1500);
				system("cls");
				SetConsoleTextAttribute(hConsole, 13);
				cout << "Game Restarted" << endl;
				goto GAMESTART;

				break;
			case 'R':
				SetConsoleTextAttribute(hConsole, 9);
				cout << endl;
				cout << "                   The Game is Restarting       ";
				Sleep(1500);
				system("cls");
				SetConsoleTextAttribute(hConsole, 13);
				cout << "Game Restarted" << endl;
				goto GAMESTART;

				break;
			default:
				return 0;
			}

		}

		/// <summary>
		/// /////////////////List of questions after turn 3
		/// </summary>
		/// <returns></returns>

		//change guide if strider left
		if (StriderGuide == true)
		{
			SetConsoleTextAttribute(hConsole, 8);
			cout << "   Strider has left the fellowship (or died) ?(y/n) : ";
			char Changeguide = _getch();
			
			switch (Changeguide)
			{
			case 'y':
				StriderGuide = false;
				OtherGuide = true;
				cout << "Strider is not the Guide anymore !" << endl;
				break;
			case 'Y':
				StriderGuide = false;
				OtherGuide = true;
				cout << "Strider is not the Guide anymore !" << endl;
				break;
			default:
				cout << "Strider remains the Guide !" << endl;
				break;
			}
			
		}

		//ask if fsp in mordor to reduce max moves
		if (FellowshipRegionMoves>9 && FSPinmordor==false)
		{
			SetConsoleTextAttribute(hConsole, 8);
			cout << "   Is the Fellowship in Moranoon or Minas Morgul?(y/n) : ";
			char fspmord = _getch();
			
			switch (fspmord)
			{
			case 'y':
				FSPinmordor = true;
				cout << "Yes" << endl;
				break;
			case 'Y':
				FSPinmordor = true;
				cout << "Yes" << endl;
				break;
			default:
				cout << "No" << endl;
				break;
			}
		}

		//ask if fp has dead men of dunharrow cards
		if (FellowshipRegionMoves>2 && deadmeninhand == false && FSPinmordor==false)
		{
			SetConsoleTextAttribute(hConsole, 8);
			cout << "   Does the Free Peoples player have Dead Men of Dunharrow Character Card in hand ?(y/n) : ";
			char dead = _getch();
			
			switch (dead)
			{
			case 'y':
				deadmeninhand = true;
				cout << "Yes" << endl;
				break;
			case 'Y':
				deadmeninhand = true;
				cout << "Yes" << endl;
				break;
			default:
				cout << "No" << endl;
				break;
			}
		}
		
		//ask if Gollum is the Guide
		if (OtherGuide == true && FellowshipRegionMoves > 7 && GollumGuide == false)
		{
			SetConsoleTextAttribute(hConsole, 8);
			cout << "   Is Gollum the Guide ?(y/n) : ";
			char gollum = _getch();

			switch (gollum)
			{
			case 'y':
				GollumGuide = true;
				OtherGuide = false;
				cout << "Yes" << endl;
				break;
			case 'Y':
				GollumGuide = true;
				OtherGuide = false;
				cout << "Yes" << endl;
				break;
			default:
				cout << "No" << endl;
				break;
			}
		}
		Sleep(1000);
		Turn++;
	}
}
