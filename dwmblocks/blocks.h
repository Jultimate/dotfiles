//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{ "VOL ", "pamixer --get-volume-human | awk '{print toupper(substr($1,1,3))}'", 0, 9 },

	{ "MEM ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	20,		0 },

	{ "", "date '+%b %d (%a) %I:%M%p'",					5,		0 },

    { "BAT ", "acpi | awk '{print $4}' | sed 's/,//g'", 60, 0 },

	// { "", "xset q | grep \"Caps Lock:\" | awk '{if($4==\"on\") print \"CAPS\"; else print \"caps\"}'", 0, 7 }
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
