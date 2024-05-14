//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/skyler/.local/bin/nettraf", 1, 16},
	{"", "/home/skyler/.local/bin/volume", 1, 2},
	{"🗓️ ", "date '+%b %d %Y (%a) %I:%M%p'", 5, 0},
	{"", "/home/skyler/.local/bin/internet", 5, 4},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
