/**/
"@ECHO OFF"
/*"mode co80,102"*/
"copy ..\..\resdll\*.rc"
"copy ..\..\resdll\*.dlg"
"copy captions text.h"
"pause"
call mkresdll2 "STLRES13", "pref.rc", "@#AlessandroCantatore:1.3#@Styler/2 Spanish resources V.1.3 - (c) 1998-2003 Alessandro Cantatore", "-DSTLRRESDLL -i ..\..\headers -i ..\..\include -i ..\..\pref"
"pause"
"del *.rc"
"del *.h"
"del *.dlg"
"del *.c"
"del *.obj"
"del *.def"
"del *.res"
"CALL LXLITE STLRES13.DLL"
"copy stlres13.dll ..\..\warp4\install\es"
"pause"
