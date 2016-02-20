#define Rbase 10
#define Rup 100
#define Rdown 75
#define Rleft 51
#define Rright 39
#define Rselect 15
#define numButtons 5

#include <avr\pgmspace.h>

#include "LCD.h"
#include "QW.h"

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int KeyTable[] = {

		((double)Rselect / (Rbase + Rselect)) * 1023,

		((double)Rup / (Rbase + Rup)) * 1023,

		((double)Rright / (Rbase + Rright)) * 1023,

		((double)Rdown / (Rbase + Rdown)) * 1023,

		(((double)Rleft) / (Rbase + Rleft)) * 1023

};

char letters[] = {
	'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
	'B', 'B',
	'C', 'C',
	'D', 'D', 'D', 'D',
	'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E',
	'F', 'F',
	'G', 'G', 'G',
	'H', 'H',
	'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I',
	'J',
	'K',
	'L', 'L', 'L', 'L',
	'M', 'M',
	'N', 'N', 'N', 'N', 'N', 'N',
	'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O',
	'P', 'P',
	'Q',
	'R', 'R', 'R', 'R', 'R', 'R',
	'S', 'S', 'S', 'S',
	'T', 'T', 'T', 'T', 'T', 'T',
	'U', 'U', 'U', 'U',
	'V', 'V',
	'W', 'W',
	'X',
	'Y', 'Y',
	'Z' };

const PROGMEM char string001[] = "A boy's name";
const PROGMEM char string002[] = "A river";
const PROGMEM char string003[] = "An animal";
const PROGMEM char string004[] = "Things that are cold";
const PROGMEM char string005[] = "Insects";
const PROGMEM char string006[] = "TV Shows";
const PROGMEM char string007[] = "Things that grow";
const PROGMEM char string008[] = "Fruits";
const PROGMEM char string009[] = "Things that are black";
const PROGMEM char string010[] = "School subjects";
const PROGMEM char string011[] = "Movie titles";
const PROGMEM char string012[] = "Musical Instruments";
const PROGMEM char string013[] = "Authors";
const PROGMEM char string014[] = "Bodies of water";
const PROGMEM char string015[] = "A bird";
const PROGMEM char string016[] = "Countries";
const PROGMEM char string017[] = "Cartoon characters";
const PROGMEM char string018[] = "Holidays";
const PROGMEM char string019[] = "Things that are square";
const PROGMEM char string020[] = "In the Northwest Territories, Canada";
const PROGMEM char string021[] = "Clothing";
const PROGMEM char string022[] = "A relative";
const PROGMEM char string023[] = "Games";
const PROGMEM char string024[] = "Sports Stars";
const PROGMEM char string025[] = "School supplies";
const PROGMEM char string026[] = "Things that are hot";
const PROGMEM char string027[] = "Heroes";
const PROGMEM char string028[] = "A girl's name";
const PROGMEM char string029[] = "Fears";
const PROGMEM char string030[] = "TV Stars";
const PROGMEM char string031[] = "Colors";
const PROGMEM char string032[] = "A fish";
const PROGMEM char string033[] = "Fruits";
const PROGMEM char string034[] = "Provinces or States";
const PROGMEM char string035[] = "Sports equipment";
const PROGMEM char string036[] = "Tools";
const PROGMEM char string037[] = "Breakfast foods";
const PROGMEM char string038[] = "Gifts";
const PROGMEM char string039[] = "Flowers";
const PROGMEM char string040[] = "Ice cream flavors";
const PROGMEM char string041[] = "A drink";
const PROGMEM char string042[] = "Toys";
const PROGMEM char string043[] = "Cities";
const PROGMEM char string044[] = "Things in the kitchen";
const PROGMEM char string045[] = "Ocean things";
const PROGMEM char string046[] = "Nicknames";
const PROGMEM char string047[] = "Hobbies";
const PROGMEM char string048[] = "Parts of the body";
const PROGMEM char string049[] = "Sandwiches";
const PROGMEM char string050[] = "Items in a catalog";
const PROGMEM char string051[] = "World leaders / Politicians";
const PROGMEM char string052[] = "School subjects";
const PROGMEM char string053[] = "Excuses for being late";
const PROGMEM char string054[] = "Ice cream flavors";
const PROGMEM char string055[] = "Things that jump / bounce";
const PROGMEM char string056[] = "Television stars";
const PROGMEM char string057[] = "Things in a park";
const PROGMEM char string058[] = "Foriegn cities";
const PROGMEM char string059[] = "Stones / Gems";
const PROGMEM char string060[] = "Musical instruments";
const PROGMEM char string061[] = "Nicknames";
const PROGMEM char string062[] = "Things in the sky";
const PROGMEM char string063[] = "Pizza toppings";
const PROGMEM char string064[] = "Colleges / Universities";
const PROGMEM char string065[] = "Fish";
const PROGMEM char string066[] = "Countries";
const PROGMEM char string067[] = "Things that have spots";
const PROGMEM char string068[] = "Historical Figures";
const PROGMEM char string069[] = "Something you're afraid of";
const PROGMEM char string070[] = "Terms of endearment";
const PROGMEM char string071[] = "Items in this room";
const PROGMEM char string072[] = "Drugs that are abused";
const PROGMEM char string073[] = "Fictional characters";
const PROGMEM char string074[] = "Menu items";
const PROGMEM char string075[] = "Magazines";
const PROGMEM char string076[] = "Capitals";
const PROGMEM char string077[] = "Kinds of candy";
const PROGMEM char string078[] = "Items you save up to buy";
const PROGMEM char string079[] = "Footwear";
const PROGMEM char string080[] = "Something you keep hidden";
const PROGMEM char string081[] = "Items in a suitcase";
const PROGMEM char string082[] = "Things with tails";
const PROGMEM char string083[] = "Sports equipment";
const PROGMEM char string084[] = "Crimes";
const PROGMEM char string085[] = "Things that are sticky";
const PROGMEM char string086[] = "Awards / Ceremonies";
const PROGMEM char string087[] = "Cars";
const PROGMEM char string088[] = "Spices / Herbs";
const PROGMEM char string089[] = "Bad habits";
const PROGMEM char string090[] = "Cosmetics / Toiletries";
const PROGMEM char string091[] = "Celebrities";
const PROGMEM char string092[] = "Cooking utensils";
const PROGMEM char string093[] = "Reptiles / Amphibians";
const PROGMEM char string094[] = "Parks";
const PROGMEM char string095[] = "Leisure activities";
const PROGMEM char string096[] = "Things you're allergic to";
const PROGMEM char string097[] = "Restaurants";
const PROGMEM char string098[] = "Notorious people";
const PROGMEM char string099[] = "Fruits";
const PROGMEM char string100[] = "Things in a medicine cabinet";
const PROGMEM char string101[] = "Toys";
const PROGMEM char string102[] = "Household chores";
const PROGMEM char string103[] = "Bodies of water";
const PROGMEM char string104[] = "Authors";
const PROGMEM char string105[] = "Halloween costumes";
const PROGMEM char string106[] = "Weapons";
const PROGMEM char string107[] = "Things that are round";
const PROGMEM char string108[] = "Words associated with exercise";
const PROGMEM char string109[] = "Sports";
const PROGMEM char string110[] = "Song titles";
const PROGMEM char string111[] = "Parts of the body";
const PROGMEM char string112[] = "Ethnic foods";
const PROGMEM char string113[] = "Things you shout";
const PROGMEM char string114[] = "Birds";
const PROGMEM char string115[] = "A girl's name";
const PROGMEM char string116[] = "Ways to get from here to there";
const PROGMEM char string117[] = "Items in a kitchen";
const PROGMEM char string118[] = "Villains";
const PROGMEM char string119[] = "Flowers";
const PROGMEM char string120[] = "Things you replace";
const PROGMEM char string121[] = "Baby foods";
const PROGMEM char string122[] = "Famous duos and trios";
const PROGMEM char string123[] = "Things found in a desk";
const PROGMEM char string124[] = "Vacation spots";
const PROGMEM char string125[] = "Diseases";
const PROGMEM char string126[] = "Words associated with money";
const PROGMEM char string127[] = "Items in a vending machine";
const PROGMEM char string128[] = "Movie Titles";
const PROGMEM char string129[] = "Games";
const PROGMEM char string130[] = "Things you wear";
const PROGMEM char string131[] = "Beers";
const PROGMEM char string132[] = "Things at a circus";
const PROGMEM char string133[] = "Vegetables";
const PROGMEM char string134[] = "States";
const PROGMEM char string135[] = "Things you throw away";
const PROGMEM char string136[] = "Occupations";
const PROGMEM char string137[] = "Appliances";
const PROGMEM char string138[] = "Cartoon characters";
const PROGMEM char string139[] = "Types of drinks";
const PROGMEM char string140[] = "Musical groups";
const PROGMEM char string141[] = "Store names";
const PROGMEM char string142[] = "Things at a football game";
const PROGMEM char string143[] = "Trees";
const PROGMEM char string144[] = "Personality traits";
const PROGMEM char string145[] = "Video games";
const PROGMEM char string146[] = "Electronic gadgets";
const PROGMEM char string147[] = "Board games";
const PROGMEM char string148[] = "Things that use a remote";
const PROGMEM char string149[] = "Card games";
const PROGMEM char string150[] = "Internet lingo";
const PROGMEM char string151[] = "Offensive words";
const PROGMEM char string152[] = "Wireless things";
const PROGMEM char string153[] = "Computer parts";
const PROGMEM char string154[] = "Software";
const PROGMEM char string155[] = "Websites";
const PROGMEM char string156[] = "Game terms";
const PROGMEM char string157[] = "Things in a grocery store";
const PROGMEM char string158[] = "Reasons to quit your job";
const PROGMEM char string159[] = "Things that have stripes";
const PROGMEM char string160[] = "Tourist attractions";
const PROGMEM char string161[] = "Diet foods";
const PROGMEM char string162[] = "Things found in a hospital";
const PROGMEM char string163[] = "Food / Drink that is green";
const PROGMEM char string164[] = "Weekend Activities";
const PROGMEM char string165[] = "Acronyms";
const PROGMEM char string166[] = "Seafood";
const PROGMEM char string167[] = "Christmas songs";
const PROGMEM char string168[] = "Words ending in ' - n'";
const PROGMEM char string169[] = "Words with double letters";
const PROGMEM char string170[] = "Children's books";
const PROGMEM char string171[] = "Things found at a bar";
const PROGMEM char string172[] = "Sports played outdoors";
const PROGMEM char string173[] = "Names used in songs";
const PROGMEM char string174[] = "Foods you eat raw";
const PROGMEM char string175[] = "Places in Europe";
const PROGMEM char string176[] = "Olympic events";
const PROGMEM char string177[] = "Things you see at the zoo";
const PROGMEM char string178[] = "Math terms";
const PROGMEM char string179[] = "Animals in books or movies";
const PROGMEM char string180[] = "Things to do at a party";
const PROGMEM char string181[] = "Kinds of soup";
const PROGMEM char string182[] = "Things found in New York";
const PROGMEM char string183[] = "Things you get tickets for";
const PROGMEM char string184[] = "Things you do at work";
const PROGMEM char string185[] = "Foreign words used in English";
const PROGMEM char string186[] = "Things you shouldn't touch";
const PROGMEM char string187[] = "Spicy foods";
const PROGMEM char string188[] = "Things at a carnival";
const PROGMEM char string189[] = "Things you make";
const PROGMEM char string190[] = "Places to hangout";
const PROGMEM char string191[] = "Animal noises";
const PROGMEM char string192[] = "Computer programs";
const PROGMEM char string193[] = "Honeymoon spots";
const PROGMEM char string194[] = "Things you buy for kids";
const PROGMEM char string195[] = "Things that can kill you";
const PROGMEM char string196[] = "Reasons to take out a loan";
const PROGMEM char string197[] = "Words associated with winter";
const PROGMEM char string198[] = "Things to do on a date";
const PROGMEM char string199[] = "Historic events";
const PROGMEM char string200[] = "Things you store items in";
const PROGMEM char string201[] = "Things you do every day";
const PROGMEM char string202[] = "Things you get in the mail";
const PROGMEM char string203[] = "Things you save up to buy";
const PROGMEM char string204[] = "Things you sit in / on";
const PROGMEM char string205[] = "Reasons to make a phone call";
const PROGMEM char string206[] = "Types of weather";
const PROGMEM char string207[] = "Titles people can have";
const PROGMEM char string208[] = "Things that have buttons";
const PROGMEM char string209[] = "Items you take on a road trip";
const PROGMEM char string210[] = "Things that have wheels";
const PROGMEM char string211[] = "Reasons to call 911";
const PROGMEM char string212[] = "Things that make you smile";
const PROGMEM char string213[] = "Ways to kill time";
const PROGMEM char string214[] = "Things that can get you fired";
const PROGMEM char string215[] = "Hobbies";
const PROGMEM char string216[] = "Holiday Activities";

const char * const questions[] PROGMEM = {

	string001,
	string002,
	string003,
	string004,
	string005,
	string006,
	string007,
	string008,
	string009,
	string010,
	string011,
	string012,
	string013,
	string014,
	string015,
	string016,
	string017,
	string018,
	string019,
	string020,
	string021,
	string022,
	string023,
	string024,
	string025,
	string026,
	string027,
	string028,
	string029,
	string030,
	string031,
	string032,
	string033,
	string034,
	string035,
	string036,
	string037,
	string038,
	string039,
	string040,
	string041,
	string042,
	string043,
	string044,
	string045,
	string046,
	string047,
	string048,
	string049,
	string050,
	string051,
	string052,
	string053,
	string054,
	string055,
	string056,
	string057,
	string058,
	string059,
	string060,
	string061,
	string062,
	string063,
	string064,
	string065,
	string066,
	string067,
	string068,
	string069,
	string070,
	string071,
	string072,
	string073,
	string074,
	string075,
	string076,
	string077,
	string078,
	string079,
	string080,
	string081,
	string082,
	string083,
	string084,
	string085,
	string086,
	string087,
	string088,
	string089,
	string090,
	string091,
	string092,
	string093,
	string094,
	string095,
	string096,
	string097,
	string098,
	string099,
	string100,
	string101,
	string102,
	string103,
	string104,
	string105,
	string106,
	string107,
	string108,
	string109,
	string110,
	string111,
	string112,
	string113,
	string114,
	string115,
	string116,
	string117,
	string118,
	string119,
	string120,
	string121,
	string122,
	string123,
	string124,
	string125,
	string126,
	string127,
	string128,
	string129,
	string130,
	string131,
	string132,
	string133,
	string134,
	string135,
	string136,
	string137,
	string138,
	string139,
	string140,
	string141,
	string142,
	string143,
	string144,
	string145,
	string146,
	string147,
	string148,
	string149,
	string150,
	string151,
	string152,
	string153,
	string154,
	string155,
	string156,
	string157,
	string158,
	string159,
	string160,
	string161,
	string162,
	string163,
	string164,
	string165,
	string166,
	string167,
	string168,
	string169,
	string170,
	string171,
	string172,
	string173,
	string174,
	string175,
	string176,
	string177,
	string178,
	string179,
	string180,
	string181,
	string182,
	string183,
	string184,
	string185,
	string186,
	string187,
	string188,
	string189,
	string190,
	string191,
	string192,
	string193,
	string194,
	string195,
	string196,
	string197,
	string198,
	string199,
	string200,
	string201,
	string202,
	string203,
	string204,
	string205,
	string206,
	string207,
	string208,
	string209,
	string210,
	string211,
	string212,
	string213,
	string214,
	string215,
	string216

};

void Game::start() {

	lcd.begin(16, 2);

	lcd.print(F("    QuickWit    "));
	delay(1500);
	lcd.setCursor(0, 1);
	lcd.print(F("  Press Select   "));

	while (getKey() != 0) {}
	while (getKey() == 0) {}
}

int Game::getKey() {

	int value = analogRead(A0);

	for (int i = 0; i < numButtons; i++)
		if (abs(value - KeyTable[i]) <= 1) return i;
	
	return value;

}

void Game::setRounds() {
	
	lcd.clear();
	lcd.print(F("Number of Rounds"));
	rounds = 20;
	int input = getKey();

	while (input != 0) {
			if (input == 1 && rounds < 50) rounds += 5;
			if (input == 3 && rounds > 10) rounds -= 5;
			lcd.setCursor(0, 1);
			lcd.print(rounds);
			while (getKey() == input) {}
			input = getKey();
	}
	while (getKey() == 0) {}
}

void Game::play() {

	lcd.clear();

	lcd.print(F("     Ready?     "));
	delay(500);
	lcd.setCursor(0, 1);
	lcd.print(F("  Press Select   "));

	int p[4] = { 0, 0, 0, 0 };

	while (getKey() != 0) {}
	while (getKey() == 0) {}

	for (int i = 0; i < rounds; i++) {
		lcd.clear();

		char buffer[40];
		strcpy_P(buffer, (char*)pgm_read_word(&(questions[random(216)])));

		String currquestion = buffer;
		currquestion.trim();

		lcd.print(currquestion);

		delay(1000);

		if (currquestion.length() > 16) {

			for (int scrollCounter = 0; scrollCounter < currquestion.length() - 16; scrollCounter++) {

				lcd.scrollDisplayLeft();

				delay(200);
			}

			delay(1000);

		}

		lcd.clear();
		lcd.print(currquestion);

		delay(1000);

		for (int j = 0; j < 10; j++) {

			lcd.setCursor(0, 1);
			lcd.print(randLetter());
			delay(100);

		}

		bool cont = true;

		while (cont) {

			int input = getKey();

			switch (input) {
			case 1:
				p[0] += 1; cont = false; break;
			case 2:
				p[1] += 1; cont = false; break;
			case 3:
				p[2] += 1; cont = false; break;
			case 4:
				p[3] += 1; cont = false; break;
			case 0:
				i--; cont = false; break;

			}

			while (getKey() == input) {}

		}

		lcd.clear();

		lcd.print(F("P1:"));
		if(p[0] > 9) lcd.print(p[0]);
		else { lcd.print(F(" ")); lcd.print(p[0]); }

		lcd.print(F(" "));

		lcd.print(F("P2:"));
		if (p[1] > 9) lcd.print(p[1]);
		else { lcd.print(F(" ")); lcd.print(p[1]); }

		lcd.setCursor(0, 1);

		lcd.print(F("P3:"));
		if (p[2] > 9) lcd.print(p[2]);
		else { lcd.print(F(" ")); lcd.print(p[2]); }

		lcd.print(F(" "));

		lcd.print(F("P4:"));
		if (p[3] > 9) lcd.print(p[3]);
		else { lcd.print(F(" ")); lcd.print(p[3]); }

		if (i < 9) lcd.setCursor(15, 0);
		else lcd.setCursor(14, 0);
		lcd.print(i + 1);

		delay(3000);

	}
	
	while (getKey() != 0) {}
	while (getKey() == 0) {}

}

char Game::randLetter() {

	return letters[random(98)];

}