/**/
"@ECHO OFF"
"mode co80,102"
"copy ..\..\resdll\*.rc"
"copy ..\..\resdll\*.dlg"
"copy captions text.h"
"pause"
call mkresdll2 "STLRES13", "warp3.rc", "@#AlessandroCantatore:1.3#@Styler/2 for Warp 3 - Spanish resources V.1.3 - (c) 1998-2003 Alessandro Cantatore", "-DSTLRRESDLL -i ..\..\headers -i ..\..\pref"
"pause"
"del *.rc"
"del *.h"
"del *.dlg"
"del *.c"
"del *.obj"
"del *.def"
"del *.res"
"CALL LXLITE STLRES13.DLL"
"copy stlres13.dll ..\..\warp3\install\es"
"pause"
