/**/
"@mode co80,102"
call mkresdll2 "STLRES13", "pref.rc", "@#AlessandroCantatore:1.3#@Styler/2 international resources V.1.3 - (c) 1998-2003 Alessandro Cantatore", "-i ..\headers -i ..\pref -d STLRRESDLL"
"@cmd /c lxlite *.dll"
"@copy *.dll ..\warp3 > nul"
"@copy *.dll ..\warp4 > nul"
"@copy *.dll ..\warp3\install > nul"
"@copy *.dll ..\warp4\install > nul"
"@del *.dll > nul"
"@pause"