/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include "funcs.h"
#include "vars.h"

int main(argc, argv)       /* void changed to int, Volker Blasius, 11jul93 */
int argc;
char **argv;
{
   /* 1) INITIALIZE DATA STRUCTURES */
   /* 2) PLAY GAME */

   if (init_()) {
      game_();
   }
   /* 						!IF INIT, PLAY GAME. */
   exit_();
   /* 						!DONE */
} /* MAIN__ */
// vim: set expandtab tabstop=4 shiftwidth=4 softtabstop=4 cindent:
