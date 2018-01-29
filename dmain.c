/* DUNGEON-- MAIN PROGRAM */

/*COPYRIGHT 1980, INFOCOM COMPUTERS AND COMMUNICATIONS, CAMBRIDGE MA. 02142*/
/* ALL RIGHTS RESERVED, COMMERCIAL USAGE STRICTLY PROHIBITED */
/* WRITTEN BY R. M. SUPNIK */

#define EXTERN
#define INIT

#include "funcs.h"
#include "vars.h"

int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
   /* 1) INITIALIZE DATA STRUCTURES */
   /* 2) PLAY GAME */

   if (init_()) {
      game_();
   }
   /* 						!IF INIT, PLAY GAME. */
   exit_();
   /* 						!DONE */
   return 0;
} /* MAIN__ */
// vim: set expandtab tabstop=4 shiftwidth=4 softtabstop=4 cindent:
