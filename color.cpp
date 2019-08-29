/******************************************************************************
*  Program:
*     Linux Term Colors
*  Author:
*     Kyle Rizzo
*     lifeforce0 {at} gmail {dot} com
*     https://lifeforce4.wordpress.com
*  Summary:
*     This loops though all the font colors on each background for a linux
*     terminal. Tested on Bash 3.2.25(1). These special escape sequences can
*     be used with any language for a linux terminal. See my bash and perl
*     code for other examples of the same output.
*
*     "\E[" begins the escape sequence, you can also use "\033" or "\x1B".
*
*     You can use a semicolon to separated the numbers
*     (eg 1;30;46 = Bold font (making it lighter in color)
*                   FG as Black (bolding it makes it a dark gray)
*                   BG as Cyan )
*        Note: The foreground and background numbers do not overlap so order
*              does not matter, for formatting reasons I will have it always
*              be Text-format / Foreground / Background.
*
*     "m" terminates the escape sequence, the text begins immediately after.
*
*     FG hew bit: 0/1 (dark/light)
*     Foreground Colors: 3x
*     Background Colors: 4x
*
*     x representing a different color
*        0 = Black   1 = Red
*        2 = Green   3 = Yellow
*        4 = Blue    5 = Magenta
*        6 = Cyan    7 = White
******************************************************************************/
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
 
// Set a few standards to make formatting easier.
const string NC = "\E[0m"; // No Color (reset to default)
const string HOME_CURSOR  = "\E[0;0H"; // Place the cursor at 0;0 position.
const string CLEAR_SCREEN = "\E[2J";
 
/******************************************************************************
*  Loop though each background color for both normal and bold fonts of a given
*  color.
******************************************************************************/
int main(int argc, char **argv)
{
   // Clear the screen and reset the cursor to the top left.
   cout << CLEAR_SCREEN << HOME_CURSOR;
 
   // print program name.
   cout << endl << argv[0] << endl;
 
   // display the color table.
   cout << "B;FG;BG\t";
   for (int i = 40; i < 48; i++)
      cout << "  " << i << "m\t";
   cout << endl;
   for (int fg = 30; fg < 38; fg++)
      for (int h = 0; h < 2; h++)
      {
         cout << NC << h << ";" << fg << "m";
         for (int bg = 40; bg < 48; bg++)
         {
            cout << "\t"
                 << "\E[" << h << "m"
                 << "\E[" << fg << "m"
                 << "\E[" << bg << "m"
                 << "  RgB  ";
         }
         cout << endl;
      }
 
   // Reset the console to no colors.
   cout << NC << endl;
 
   return 0;
}