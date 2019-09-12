// Adventure 01
// Module 02

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

// Variables
char doDebug;
char decision;
string x;
string waited;
string name;
int handChoice;
int health = 10;
int beastHP = 12;
unsigned int myRand;
unsigned int myDmg;
unsigned int wildDmg;
unsigned int spearDmg = 0;
unsigned int shieldBlock = 0;
unsigned int spearAttack = 0;
unsigned int shieldAttack = 0;
unsigned int myAttack = 0;
unsigned int wildAttack = 0;
unsigned int myBlock = 0;
unsigned int wildBlock = 0;
int turn = 0;
bool debug;
bool alive;
bool playing;

int main()
{
	// Seed RNG

	srand(time(0));

	// welcome the player, check for Debug

	cout << "\n(Would you like to view the numerical values?(y/n))\n\n";
	cin >> doDebug;
	if (doDebug == 'y' || doDebug == 'Y')
	{
		debug = true;
	}

	cout << "\nWelcome to The Jungle!\n";
	cout << "Would you like to play some games?(y/n)\n\n";
	cin >> decision;

	if (decision == 'y' || decision == 'Y')
	{
		playing = true;
	}
	else if (decision == 'n' || decision == 'N')
	{
		playing = false;
	}

	// start the loop
	while (playing == true)
	{

		sleep(1);
		cout << "\n\tJust before dusk, you arrive at a small encampment at the outskirts of the Ariza Jungle. ";
		cout << "Numerous men and women dressed in militia outfits bustle from tent to tent, loading supplies";
		cout << " into a small caravan of jeeps.\n\n";
		sleep(1);
		cout << "\tYou curiously watch for a second before you hear a shout from behind you. ";
		cout << "'You, there! Grab one those and get in that jeep, now!' ";
		cout << "Before you have a chance to argue, a large man shoves you toward a crude looking table, on top of which are a spear and a shield.\n\n";
		sleep(1);
		while (handChoice != 1 && handChoice != 2)
		{
			cout << "\nWhich one would you like to grab?";
			cout << "\nSpear (1)";
			cout << "\nShield (2)\n\n";
			cin >> handChoice;

			if (handChoice == 1)
			{
				if (debug == true)
				{
					cout << "\n(DEBUG: ATK +15)\n(DEBUG: DMG +2)\n";
				}
				cout << "\n\tYou nervoiusly pick up the spear, ";
				spearAttack += 15;
				spearDmg += 2;
			}
			else if (handChoice == 2)
			{
				if (debug == true)
				{
					cout << "\n(DEBUG: BLOCK +15)\n(DEBUG: DEFENSE +2)\n";
				}
				cout << "\n\tYou nervously pick up the shield, \n";
				shieldAttack += 15;
				shieldBlock += 2;
			}
		}

		cout << "but before you can ask any questions, the large man thrusts you ";
		cout << "into an old, beaten up jeep, separate from the caravan. ";
		cout << "You barely have time to adjust your newly acquired ";
		if (handChoice == 1)
		{
			cout << "spear before you notice the driver of the jeep.\n\n";
		}
		if (handChoice == 2)
		{
			cout << "shield before you notice the driver of the jeep.\n\n";
		}
		sleep(1);
		cout << "\tThe driver is an older man who is proudly dressed in a safari outfit. ";
		cout << "He turns around and smiles a toothy grin as the door slams closed beside you. ";
		cout << "'The name's Gregory! What do they call ya?'\n\n";
		cin >> name;
		cout << "\n\t'" << name << ", sir.' You barely manage to stammer out before Gregory turns around ";
		cout << "put the jeep into drive.\n\n";
		sleep(1);
		cout << "\tGregory tells you story after story of his youthful days, recounting the tales of adventure and excitment";
		cout << "as trees and fauna fly by the window of the jeep.\n\n";
		sleep(1);
		cout << "\tBefore long, you Gregory begins to tell you about his family. ";
		cout << "He tells you about how his daughter just graduated college,";
		cout << "and about how his wife has been begging him for years to retire and stay at home.\n\n";
		sleep(1);
		cout << "'Why don't you stay home with her' you quickly blurt out.\n\n";
		sleep(1);
		cout << "\tHe gives an inquisitive look in the mirror before giving a small chuckle. ";
		cout << "Before you can react, Gregory skids the jeep to a stop, and turns toward you.\n\n";
		sleep(1);
		cout << "\t'Well, " << name << ", this jungle calls to ya, and who am I to ignore that call?'";
		cout << "Slighty confused, you look out the window, hoping to see some sign of where you might be. ";
		cout << "You're still on the same dirt road, with nothing but trees in sight.\n\n";
		sleep(1);
		cout << "\tNow fully confused, you turn back toward Gregory to ask another question ";
		cout << "but as you look back, the seat is empty, and the door is wide open. ";
		cout << "You're unsure of where he went, but you have a bad feeling in your stomach about this.\n\n";
		sleep(1);
		cout << "Would you like to exit the vehicle?(y/n)\n\n";
		cin >> decision;

		if (decision == 'n' || decision == 'N')
		{
			playing = false;
		}

		cout << "\n\tYou slowly scoot across the back seat, towards the driverside door. ";
		cout << "As you reach the door, you once again look out the window, trying to find any trace of Gregory. ";
		cout << "There's no sign of him on the road, and no trace of him in the brush.\n\n";
		sleep(1);
		cout << "\tSeeing no sign of Gregory, you slowly reach for the door handle, and nervously pull. ";
		cout << "The door unlatches and slowly creaks open, letting a warm wave of muggy air wash over you. ";
		cout << "The lush forest around you is surprisingly quiet.\n\n";
		sleep(1);
		cout << "\tYou slowly step out of the car, your feet hit the dirt beneath you, and you shakily stand up. ";
		cout << "As you stand in the dimly lit roadway, you hear a branch snap behind you. ";
		cout << "You quickly turn around, just in time to see a beast like figure pounce from the brush. ";
		cout << "With cat like reflexes, you fall to the ground, and the figure soars over your head, letting out a deafening roar.\n\n";
		sleep(1);
		cout << "You quickly scramble to you feet. Should you try to fight the beast?(y/n)\n\n";
		cin >> decision;
		sleep(1);

		if (decision == 'n' || decision == 'N')
		{
			playing = false;
		}

		cout << "\nYou grab your ";

		if (handChoice == 1)
		{
			cout << "spear ";
		}
		if (handChoice == 2)
		{
			cout << "shield ";
		}

		cout << "and prepare to charge.\n";

		while(health > 0 && beastHP > 0 && turn != 4)
		{
			cout << "\nWould you like: \n";
			cout << "Attack (1)\n";
			cout << "Block (2)\n\n";
			int AB;
			cin >> AB;
			if (AB == 2)
			{
				cout << "\nYou steel yourself again an oncoming attack!\n\n";

			}
			else if (AB == 1)
			{
				cout << "\nYou lunge at the beast!\n\n";
			}
			else 
			{
				cout << "\nYou hesisitate for a second, and the beast attacks!\n\n";
			}


			myDmg = (rand() % 3) + 1 + spearDmg;
			wildDmg = (rand() % 5) + 1 - shieldBlock;
			if (AB == 2)
			{
				myRand = rand();
				// (myRand * x / y) to stop RNG from cascading.
				myAttack = ((myRand * 5 / 4) % 100) + 1 + spearAttack;
				myRand = rand();
				myBlock = ((myRand * 7 / 2) % 100) + 3 + shieldAttack;
			}
			else if (AB == 1)
			{
				myRand = rand();
				// (rand() * x / y) to stop RNG from cascading.
				myAttack = ((myRand * 9 / 5) % 100) + 3 + spearAttack;
				myRand = rand();
				myBlock = ((myRand * 7 / 3) % 100) + 1 + shieldAttack;
			}
			
			// (rand() * x / y) to stop RNG from cascading.
			myRand = rand();
			wildAttack = ((myRand * 3 / 2) % 100) + 1;
			myRand = rand();
			wildBlock = ((myRand * 5 / 3) % 100) + 1;

			if (debug == true)
			{
				cout << "myDmg: " << myDmg << endl;
				cout << "wildDmg: " << wildDmg << endl;
				cout << "myAttack: " << myAttack << endl;
				cout << "myBlock: " << myBlock << endl;
				cout << "wildAttack: " << wildAttack << endl;
				cout << "wildBlock: " << wildBlock << endl;
			}

			if (myAttack > wildBlock)
			{
				if (myAttack >= wildBlock * 2)
				{
					cout << "You critically hit the beast!\n";
					beastHP -= myDmg * 2;
				}
				else
				{
					cout << "You hit the beast!\n";
					beastHP -= myDmg;
				}
				
			} 
			else if (myAttack < wildBlock)
			{
				cout << "You miss the beast!\n";
			}

			if (wildAttack > myBlock)
			{
				if (wildAttack >= myBlock * 2)
				{
					cout << "The beast critcally hits you!\n";
					health -= wildDmg * 2;
				}
				else
				{
					cout << "The beast hits you!\n";
					health -= wildDmg * 2;
				}
				
			}
			else if (wildAttack < myBlock)
			{
				cout << "The beast misses you!\n";
			}

			cout << "beastHP: " << beastHP << endl;
			cout << "health: " << health << endl << endl;

			// Add 1 to turns
			turn++;

			if (health <= 0 || turn > 4)
			{
				alive = false;
			}
			else if (beastHP <= 0)
			{
				alive = true;
			}

			sleep(1);
		}

		if (playing == false)
		{
			cout << "\nThen I guess your adventure ends here.\n";
			return 0;
		}

		if (alive == false)
		{
			cout << "\tAs you lunge at the beast, it adeptly dodges out of the way. ";
			cout << "Before you know what happened, you feel a wet, painful sensation fill your stomach. ";
			cout << "You look down to see blood pooling from a wound, and the world fades to black.\n\n";
			cout << "This is the end of your adventure.";
			return 0;
		}

		if (alive == true)
		{
			cout << "\tAs you lunge at the beast, it gives out a tremendous roar, ";
			cout << "followed by a soft whimper. You're exhausted, but you stand triumphant. ";
			cout << "You stand there quietly, admiring the figure at your feet, ";
			cout << "when it begins to transform before your eyes. ";
			cout << "The beast like form shifts into that of Gregory. ";
			cout << "He looks up to you, smiling sheepishly, as he points to a scratch on your arm. ";
			cout << "'Now the jungle will call to you too, " << name << "'.\n\n";
			sleep(1);
			cout << "\tAs the words leave his lips, his once vibrant eyes go dull grey. ";
			cout << "You stand there cold, tired and alone. The scratch on your arm seering from pain.\n\n";
			cout << "This is the end of your adventure.";
			return 0;
		}
	}
    // start the encounter
    // randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
    // if block is greater or equal to attack, successful block
    // otherwise, subtract attack value from health.
	// keep looping while health is greater than zero and fewer than 4 turns have happened

	// if health is greater than 0, congratulate player
	// otherwise, tell the player they're dead.
}