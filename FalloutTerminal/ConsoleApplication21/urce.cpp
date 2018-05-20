#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
	string a[16];
	int j = 0;
	string WORD;
	int n;
	int i1;
	int num_attempts = 4;
	string guess = " ";
	string password;
	int y;
	int c = 0;
	int x = 0;
	string WORDS[64];
	WORDS[0] = "VIRAL";
	WORDS[1] = "DARED";
	WORDS[2] = "WIRES";
	WORDS[3] = "LINES";
	WORDS[4] = "LIVES";
	WORDS[5] = "SORTS";
	WORDS[6] = "AGREE";
	WORDS[7] = "FARMS";
	WORDS[8] = "MINES";
	WORDS[9] = "LIKES";
	WORDS[10] = "PARTS";
	WORDS[11] = "HAREM";
	WORDS[12] = "LINED";
	WORDS[13] = "WARNS";
	WORDS[14] = "THREW";
	WORDS[15] = "SIDES";
	WORDS[16] = "LIERS";
	WORDS[17] = "LAYER";
	WORDS[18] = "FIRES";
	WORDS[19] = "PRISE";
	WORDS[20] = "SIZES";
	WORDS[21] = "GIRLS";
	WORDS[22] = "FORKS";
	WORDS[23] = "ROCKS";
	WORDS[24] = "SOCKS";
	WORDS[25] = "RETRO";
	WORDS[26] = "LOTOS";
	WORDS[27] = "DRONE";
	WORDS[28] = "CORNS";
	WORDS[29] = "RAVEN";
	WORDS[30] = "BARNS";
	WORDS[31] = "GARRY";
	WORDS[32] = "FALLS";
	WORDS[33] = "SOULS";
	WORDS[34] = "TURNS";
	WORDS[35] = "SWORD";
	WORDS[36] = "TRICK";
	WORDS[37] = "SNEAK";
	WORDS[38] = "OCEAN";
	WORDS[39] = "LEEKS";
	WORDS[40] = "GEEKS";
	WORDS[41] = "WEEKS";
	WORDS[42] = "SHORT";
	WORDS[43] = "CHAIN";
	WORDS[44] = "MAINS";
	WORDS[45] = "TRONE";
	WORDS[46] = "WINDS";
	WORDS[47] = "CLICK";
	WORDS[48] = "CRATE";
	WORDS[49] = "COINS";
	WORDS[50] = "BALLS";
	WORDS[51] = "ROLLS";
	WORDS[52] = "WOMAN";
	WORDS[53] = "GROSS";
	WORDS[54] = "BROWS";
	WORDS[55] = "NOSES";
	WORDS[56] = "ROSES";
	WORDS[57] = "POSES";
	WORDS[58] = "CODES";
	WORDS[59] = "BEARS";
	WORDS[60] = "WOLFS";
	WORDS[61] = "BULLS";
	WORDS[62] = "FOOLS";
	WORDS[63] = "RULES";
	n = 63;

	srand(time(NULL));
	for (int i = 0; i <= 15;)
	{
		x = rand() % 63;

		if (WORDS[x] == "1")
			continue;
		else
		{
			a[i] = WORDS[x];
			WORDS[x] = "1";
		}

		i++;
	}
	password = a[rand() % 15];
	



	cout << "ROBCO INDUSTRIES (TM) TERMLINK PROTOCOL" << endl;
	cout << "ENTER PASSWORD NOW" << endl;


	cout << endl;
	cout << num_attempts << " ATTEMPT(S) LEFT: ";
	for (n = 0; n < num_attempts; n++) {
		cout << "[]";
	}
	cout << endl;
	cout << endl;
	cout << " 0xF4F0 !" << a[0] << "=*]+_{ 0xF5BC *%(]{-}!.&^=" << endl;
	cout << " 0cF4FC !)=$+<_--*]= 0xF5C8 !&+-;&+" << a[8] << endl;
	cout << " 0xF508 &$^%{" << a[1] << "!< 0xF5D4 +&{)^" << a[9] << "*!" << endl;
	cout << " 0xF514 ;$(%)!*#&@^* 0xF5E0 " << a[10] << "}(^=(&^" << endl;
	cout << " 0xF520 &^}[-*$]+{=% 0xF5EC %^@$;&)*#!(&" << endl;
	cout << " 0xF52C #&*^!%@$)*(; 0xF5F8 %]&!*}.=-(^{" << endl;
	cout << " 0xF538 +%]}-={" << a[2] << " 0xF604 ^$" << a[11] << "(*=!%" << endl;
	cout << " 0xF544 " << a[3] << "%$-=[*- 0xF610 {*}^+%" << a[12] << ";" << endl;
	cout << " 0xF550 }^-.=*]!&%({ 0xF61C (%@$&;*#[^!}" << endl;
	cout << " 0cF55C $}+^%{=*]&-[ 0xF628 }&.(^%*${-+!" << endl;
	cout << " 0xF568 ]<&" << a[4] << "*%^{ 0xF634 *$};" << a[13] << "!^%" << endl;
	cout << " 0xF574 !;*+" << a[5] << "($& 0xF640 )<!=]=_*=]--" << endl;
	cout << " 0xF580 -}+=&][{*^%$ 0xF64C !^+{-;}" << a[14] << " " << endl;
	cout << " 0xF58C )=;" << a[6] << "$(&! 0xF658 *=^{$&+)%-*=" << endl;
	cout << " 0xF598 &({!%.=}^]-* 0xF664 .!}(]!<_-[}=" << endl;
	cout << " 0xF5A4 -%;+$)" << a[7] << "& 0xF670 }+^" << a[15] << "+=%*" << endl;
	cout << " 0xF5B0 $%-&]+}^*={[ 0xF67C {+=]]&^$%--*" << endl;

	do {
		if (num_attempts > 0)
		{
			cout << ">";
			cin >> guess;
		}
		if (guess != password)
		{
			j = 0;
			for (int i = 0; i < 5; i++)
			{
				if (guess[i] == password[i])
				{
					j = j + 1;
				}
			}
			cout << ">Entry denied " << endl;
			cout << ">" << j << "/5 correct." << endl;
			num_attempts = num_attempts - 1;
			cout << num_attempts << " ATTEMPT(S) LEFT: ";
			for (n = 0; n < num_attempts; n++) {
				cout << "[]";
			} cout << endl;
		}
	} while (guess !=password && num_attempts != 0);
	if (guess == password)
	{
		cout << ">Right!" << endl;
		cout << ">Please wait" << endl;
		cout << ">while system" << endl;
		cout << ">is accessed." << endl;
	}
	else
	{
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << "\t                     TERMINAL BLOCKED" << endl;
		cout << " " << endl;
		cout << "\t\t      PLEASE CONTACT AN ADMINISTRATOR" << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
		cout << " " << endl;
	}
	return 0;
}