#include "awshell.h"

/**
* print_error - executes applications
* @argv0: name of the command
* @c_counter: string counting of every command typed
*                     _
*     /\             | |
*    /  \   _ __   __| |_   _
*   / /\ \ | '_ \ / _` | | | |
*  / ____ \| | | | (_| | |_| |
* /_/    \_\_|_|_|\__, |\__, | _   _
* \ \        / (_)   | | __/ || \ | |
*  \ \  /\  / / _ ___| ||___/ |  \| |
*   \ \/  \/ / | / __| __/ _ \| . ` |
*    \  /\  /  | \__ \ || (_) | |\  |
*     \/  \/   |_|___/\__\___/|_| \_| |- Nov 2020 -|
*
*/
void print_error(char *c_counter, char *argv0)
{
	write(STDERR, "hsh: ", 5);
	write(STDERR, c_counter, _strlen(c_counter));
	write(STDERR, ": ", 2);
	write(STDERR, argv0, _strlen(argv0));
	write(STDERR, ": not found\n", 12);
}
