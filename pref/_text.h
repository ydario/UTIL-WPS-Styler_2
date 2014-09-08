//==========================================================================\
// 001.h - international version strings                                    |
// TOC                                                                      |
// - init_errors:                                                           |
// - preferences notebook major_and_minor_tabs                              |
// - main_window_strings                                                    |
// - General_page                                                           |
// - main_windows_settings                                                  |
// - active_inactive_titlebar settings                                      |
// - titlebar_hiding page                                                   |
// - window_rolling general preferences                                     |
// - maximized_windows options                                              |
// - window sizing_moving page                                              |
// - text_controls_options                                                  |
// - VIO_windows_options                                                    |
// - mouse_options                                                          |
// - windows_keys                                                           |
// - exception_list dialog                                                  |
// - mouse_keyboard_actions_events dialog                                   |
// - bitmap_selection dialog                                                |
// - help_strings (view.exe parameters).                                    |
// - installer_unistaller strings                                           |
// - registration_dialog strings                                            |
//==========================================================================/

#ifndef RES001_H_
   #define RES001_H_


//==========================================================================\
// init_errors: error displayed in case of program initialization failure   |
//==========================================================================/

#define SZERR_LOADMOD            "Start failure: SMARTWIN.DLL is not loaded!"
#define SZERR_REGCTLS            "Controls registration failure!"
#define SZERR_LOADDLG            "Main window creation failure!"
#define SZERR_OPENPROFILE        "Styler/2 profile: opening failure!"
#define SZERR_FILLNOTEBOOK       "Preferences notebook: page insertion "      \
                                 "failure!"


//==========================================================================\
// - preferences notebook major_and_minor_tabs                              |
//==========================================================================/

#define SZ_PAGEXOFY              "page 1 of 2"

#define SZ_SMARTWINDOWS          "Styler/2"
#define SZ_PRODINFO              "Product information"
#define SZ_GENERAL               "General"
#define SZ_EXCEPTIONS            "Exceptions"
#define SZ_MAINWIN               "~Dialogs"
#define SZ_GENOPTS               "General options"
#define SZ_TITLEBAR              "~Titlebar"
#define SZ_TBARACTIVEWIN         "Active window"
#define SZ_TBARINACTWIN          "Inactive window"
#define SZ_TBARHIDING            "Titlebar hiding"
#define SZ_WINDOWROLLING         "Window ~rolling"
#define SZ_MAXWIN                "Ma~ximized windows"
#define SZ_SIZEMOVE              "~Sizing/moving"
#define SZ_TXTCTLS               "T~ext controls"
#define SZ_VIOWIN                "~VIO windows"
#define SZ_MOUSE                 "~Mouse"
#define SZ_MAPPINGS              "Mappings"
#define SZ_KEYBOARD              "~Keyboard"
#define SZ_WINDOWSKEYS           "Windows keys"


//==========================================================================\
// -  main_window_strings                                                   |
//==========================================================================/

#define SZ_SMWDISABLED           "Styler/2 is currently disabled!!!"
#define SZ_SMWPREFDSBLD          "Styler/2 - (disabled)"
#define SZ_SMARTWINPREF          "Styler/2 - Preferences (unregistered)"
#define SZ_SMARTWINPREFREG       "Styler/2 - Preferences"
#define SZ_EXPIRED               "Styler/2 trial time has expired!"

// toolbar context help messages
#define SZHLP_BTNONOFF           "Enable/disable Styler/2"
#define SZHLP_BTNAPPLY           "Apply new titlebar settings"
#define SZHLP_BTNUNDO            "Restore previous settings"
#define SZHLP_BTNDEF             "Set preferences to default values"
#define SZHLP_BTNHLP             "Show on-line help"
// statusbar context help
#define SZHLP_STATUSBAR          "You can make the window wider if the help " \
                                 "message doesn't fit the statusbar width!!!"

// generic error messages
#define SZERR_ALLOC              "Failed to allocate the requested memory."


//==========================================================================\
// - General_page                                                           |
//==========================================================================/

// control captions
#define SZ_APPLONEXIT            "~Apply on exit"
#define SZ_SAVONEXIT             "~Save on exit"
#define SZ_LASTVIEWED            "~Remember last viewed page"
#define SZ_APPLYALL              "~Apply all"
#define SZ_UNDOALL               "~Undo all"
#define SZ_DEFALL                "~Default all"
// progress dialog
#define SZ_DEFALLING             "Resetting to default..."
#define SZ_GENPROGRESS           "Progress"
#define SZ_GENTIMEELAPS          "Elapsed time"
#define SZ_GENSTOP               "~Stop"

// help strings
#define SZHLP_APPLONEXIT         "Modified preferences which require the "    \
                                 """Apply"" button are automatically applied "\
                                 "when the Preferences application is closed"
#define SZHLP_SAVONEXIT          "If this box isn't checked, changes are "    \
                                 "applied to the current session but not "    \
                                 "saved in SMARTWIN.INI, so rebooting will "  \
                                 "restore your previous settings."
#define SZHLP_LASTVIEWED         "Last viewed page is made the topmost page " \
                                 "when the Preferences application is "       \
                                 "restarted"
#define SZHLP_APPLYALL           "Apply all modified settings on every page " \
                                 "which requires it"
#define SZHLP_UNDOALL            "Undo all modified settings on every page"
#define SZHLP_DEFALL             "Reset all the options to the default "      \
                                 "values"


//==========================================================================\
// - main_windows_settings                                                  |
//==========================================================================/

// control captions
#define SZ_MWUSESMWFONT          "~Use Styler/2 font"
#define SZ_MWOVERRDPPS           "~Override Presentation Parameters"
#define SZ_MWIGNOREPP            "~Ignore Presentation Parameters"
#define SZ_MWDLGONLY             "~Dialogs only"
// help strings
#define SZHLP_MWUSESMWFONT       "Force all dialog windows to use the "       \
                                 "selected font"
#define SZHLP_MWOVERRDPPS        "Replace even non-default fonts"
#define SZHLP_MWFONT             "Select the font"
#define SZ_FONTSAMPLE            "Styler/2 - Sample font"
#define SZ_DLGFONT               "Dialog font"


//==========================================================================\
// - active_inactive_titlebar settings                                      |
//==========================================================================/

// captions (titlebar sample)
#define SZ_TBARACTWINSMPL        "Active window - sample"
#define SZ_TBARINACTWINSMPL      "Inactive window - sample"
// font dialog title:
#define SZ_TBARFONT              "Titlebar font"
// control captions
#define SZ_ENTBARENH             "~Enable titlebar enhancements"
#define SZ_TBOCNTXTMENU          "~Context menu"
#define SZ_BKGND                 "Background:"
#define SZ_SOLIDCOLOR            "~Solid color"
#define SZ_SHADE                 "~Gradient"
#define SZ_BMP                   "~Bitmap"
#define SZ_SWAPCOLOR             "S~wap colors"
#define SZ_HORZ                  "H~orizontal"
#define SZ_VERTICAL              "~Vertical"
#define SZ_HORZ3                 "H~orizontal - center"
#define SZ_VERTICAL3             "~Vertical - center"
#define SZ_OUTER                 "~Outer"
#define SZ_INNER                 "~Inner"
#define SZ_B_KGND                "Bac~kground"
#define SZ_LEFT                  "~Left"
#define SZ_RIGHT                 "~Right"
#define SZ_TOP                   "~Top"
#define SZ_BOTTOM                "Botto~m"
#define SZ_STRETCH               "Stret~ch"
#define SZ_BMPNOBMP              "B~MP:"
#define SZ_3DBORDER              "3D border:"
#define SZ_SHOW                  "Show bor~der"
#define SZ_TXTSTYLE              "Text style:"
#define SZ_TBCENTER              "~Center"
#define SZ_3DEFFECT              "~3D text"
#define SZ_FONT                  "~Font:"
#define SZ_FGNDTXT               "Foregro~und"
// help messages
#define SZHLP_ENTBARENH          "Enable/disable titlebar aesthetic "         \
                                 "enhancements"
#define SZHLP_TBOCNTXTMENU       "Display the context menu when the mouse "   \
                                 "button is clicked on the titlebar"
#define SZHLP_TITLEBARSAMPLE     "Click on the titlebar to change its "       \
                                 "background color, gradient direction or "   \
                                 "bitmap according to the current background "\
                                 "mode"
#define SZHLP_TBMNSYS            "Set the bitmap for the window system menu " \
                                 "button"
#define SZHLP_TBMNCLOSE          "Set the bitmap for the window close button"
#define SZHLP_TBMNHIDE           "Set the bitmap for the window hide button"
#define SZHLP_TBMNMIN            "Set the bitmap for the window minimize "    \
                                 "button"
#define SZHLP_TBMNRES            "Set the bitmap for the window restore "     \
                                 "button"
#define SZHLP_TBMNMAX            "Set the bitmap for the window maximize "    \
                                 "button"
#define SZHLP_RDBTN_SOLID        "Use a solid color as titlebar background"
#define SZHLP_RDBTN_SHADE        "Use a gradient as titlebar background"
#define SZHLP_RDBTN_BITMAP       "Use a bitmap as titlebar background"
#define SZHLP_TBOOVERRDPPS       "Use the titlebar enhancements even if the " \
                                 "titlebar doesn't use a default background"
#define SZHLP_SWPCOLSHADE        "Swap gradient colors"
#define SZHLP_SHADEDIRECT        "Change gradient direction and type"
#define SZHLP_BTN_COLUP          "Set the left/top/outer color for gradient " \
                                 "background"
#define SZHLP_BTN_COLDOWN        "Set the right/bottom/inner color for "      \
                                 "gradient background"
#define SZHLP_SHOWBORDER         "Draw a 2-color border around the titlebar"
#define SZHLP_SWPCOLBRDR         "Swap border colors"
#define SZHLP_BTN_HILITE         "Set the highlight color for the titlebar "  \
                                 "3D border"
#define SZHLP_BTN_SHADOW         "Set the shadow color for the titlebar 3D "  \
                                 "border"
#define SZHLP_CHK_STRETCH        "Stretch the bitmap to fit the titlebar "    \
                                 "size"
#define SZHLP_BTN_BITMAP         "Set the titlebar background bitmap"
#define SZHLP_CHK_TBCENTER       "Center the titlebar text"
#define SZHLP_CHK_3DEFFECT       "Set 3D effect for the titlebar text"
#define SZHLP_BTN_FONT           "Set the titlebar font"
#define SZHLP_SWPCOLTXT          "Swap font colors"
#define SZHLP_BTN_FGNDTXT        "Set the color of the titlebar text"
#define SZHLP_BTN_SHADOWTXT      "Set the color of the titlebar text shadow"
// error messages
#define SZERR_UPDBMPNAME         "Unable to update the name of the bitmap "   \
                                 "file in smartwin.ini!"
// edit color dialog -----------------------
#define SZ_CLRTITLE              "Select color"
#define SZ_CLROK                 "~OK"
#define SZ_CLRUNDO               "~Undo"
#define SZ_CLRCANC               "~Cancel"
#define SZ_CLRRED                "~Red"
#define SZ_CLRGRN                "~Green"
#define SZ_CLRBLU                "~Blue"


//==========================================================================\
// - titlebar_hiding page                                                   |
//==========================================================================/

// control captions
#define SZ_HIDETBAR              "~Enable titlebar hiding"
#define SZ_HTBARBY               "Hide by:"
#define SZ_SYSMENU               "~System menu"
#define SZ_HTBARHIDEBTN          "Titlebar-~hide button"
#define SZ_HTBARUNHIDEBTN        "Titlebar-~unhide button"
#define SZ_HTREDFLDRH            "~Reduce folders height"
#define SZ_HTXCLDLGWIN           "E~xclude dialog windows"
#define SZ_HTBARPUPDELAY         "~Pop up delay (1/100 Sec) :"
#define SZ_HTBARHIDEDELAY        "Hi~de delay (1/100 Sec) :"
#define SZ_HTBARINCLMENU         "~Include menu"
// help msgs
#define SZHLP_HTBARENABLE        "Enable the titlebar hide/unhide feature"
#define SZHLP_HTBARSYSMENU       "Add a ""hide/unhide titlebar"" item to the "\
                                 "window system menu"
#define SZHLP_HTBARMOU           "Select which mouse event on the titlebar "  \
                                 "hides/unhides the titlebar itself"
#define SZHLP_HTBARKEYB          "Select a keyboard accelerator for titlebar "\
                                 "hiding/unhiding"
#define SZHLP_HTBARHIDEBTN       "Add a ""hide/unhide titlebar"" button to "  \
                                 "the window controls and select the  "       \
                                 """hide"" bitmap"
#define SZHLP_HTBARUNHIDEBTN     "Add a ""hide/unhide titlebar"" button to "  \
                                 "the window controls and select the  "       \
                                 """unhide"" bitmap"
#define SZHLP_HTREDFLDRH         "When hiding the title of a folder, the "    \
                                 "total window height is reduced by the "     \
                                 "titlebar height."
#define SZHLP_XCLDLGWIN          "Disable hiding of titlebars of dialog "     \
                                 "windows"
#define SZHLP_HTBARPUPDELAY      "How long the mouse pointer must stay over " \
                                 "the upper window border to unhide the "     \
                                 "titlebar"
#define SZHLP_HTBARHIDEDELAY     "How long the mouse pointer must stay away " \
                                 "from the titlebar to make the titlebar "    \
                                 "itself be hidden"
#define SZHLP_HTBARINCLMENU      "Hide both the menubar and the titlebar"


//==========================================================================\
// - window_rolling general preferences                                     |
//==========================================================================/

// control captions
#define SZ_RLWINENBL             "~Enable window rolling"
#define SZ_RLWINBY               "Roll by:"
#define SZ_RLWINRLBTN            "Titlebar-~roll button"
#define SZ_RLWINUNRLBTN          "Titlebar-~unroll button"
#define SZ_XCLHTBARWIN           "E~xclude hidden-title windows"
#define SZ_AUNRLGETFOCUS         "Auto-unroll when ~getting focus"
#define SZ_ARLLOSEFOCUS          "Auto-roll when ~losing focus"
#define SZ_AUNRLCLOSEWIN         "Auto-unroll when ~closing window"
#define SZ_ALLOWVRSZ             "Allow ~vertical resizing of rolled windows"
#define SZ_AUNRLVRSZWIN          "Auto-unroll windows vertically resi~zed"
#define SZ_RLTOBTOTTOM           "Roll to the ~bottom"
#define SZ_RLSTATESTORE          "~Store rolled state"
// help messages
#define SZHLP_RLWINENBL          "Enable the ""window rolling"" feature"
#define SZHLP_RLWINSYSMENU       "Add a ""roll/unroll"" item to the window "  \
                                 "system menu"
#define SZHLP_MOUSE              "Select which mouse event on the titlebar "  \
                                 "rolls/unrolls the window"
#define SZHLP_KEYBOARD           "Select a keyboard accelerator for titlebar "\
                                 "rolling/unrolling"
#define SZHLP_ROLLTBARBTN        "Add a ""roll/unroll"" button to the window "\
                                 "controls and select the  ""roll"" bitmap"
#define SZHLP_UNROLLTBARBTN      "Add a ""roll/unroll"" button to the window "\
                                 "controls and select the  ""unroll"" bitmap"
#define SZHLP_XCLHTBARWIN        "Exclude window rolling for windows whose "  \
                                 "title has been hidden"
#define SZHLP_AUNRLGETFOCUS      "Automatically unroll a previously rolled "  \
                                 "window which is getting focus"
#define SZHLP_ARLLOSEFOCUS       "If their roll state was previously set, "   \
                                 "automatically roll windows that lose focus"
#define SZHLP_AUNRLCLOSEWIN      "Automatically unroll windows that are "     \
                                 "being closed"
#define SZHLP_ALLOWVRSZ          "Allow rolled windows to be vertically "     \
                                 "resized"
#define SZHLP_AUNRLVRSZWIN       "Automatically unroll vertically-resized "   \
                                 "windows to their previous size"
#define SZHLP_RLTOBTOTTOM        "Windows are rolled to their bottom side"
#define SZHLP_RLSTATESTORE       "Rolled state of windows is stored in the "  \
                                 "initialization file"


//==========================================================================\
// - maximized_windows options                                              |
//==========================================================================/

// control captions
#define SZ_MXOVERSZPOS           "~Override default size and position"
#define SZ_MXORIGIN              "Origin (pixel):"
#define SZ_MXX                   "~x:"
#define SZ_MXY                   "~y:"
#define SZ_MXSIZE                "Size (pixel):"
#define SZ_MXWIDHT               "~width:"
#define SZ_MXHEIGHT              "~height:"
#define SZ_MXNOMOVE              "Don't allow ~moving"
#define SZ_MXNOSIZE              "Don't allow ~sizing"
//help messages
#define SZHLP_MXOVERSZPOS        "Allows you to set size and position of "    \
                                 "maximized windows"
#define SZHLP_MXX                "Set the horizontal distance in pixels from "\
                                 "the bottom left corner of the screen"
#define SZHLP_MXY                "Set the vertical distance in pixels from "  \
                                 "the bottom left corner of the screen"
#define SZHLP_MXWIDHT            "Set width of maximized windows"
#define SZHLP_MXHEIGHT           "Set height of maximized windows"
#define SZHLP_MXNOMOVE           "Don't allow moving of maximized windows"
#define SZHLP_MXNOSIZE           "Don't allow resizing of maximized windows"


//==========================================================================\
// - window sizing_moving page                                              |
//==========================================================================/

// control captions
#define SZ_FULLWINDRAG           "~Full window drag and size"
#define SZ_SMOOTHHMOVE           "~Smooth horizontal movements"
#define SZ_AUTOCASCADE           "Auto~cascade windows"
#define SZ_BKGNDSZMOVE           "S~nap windows to the screen edges"
#define SZ_SZMVSZMVBY            "Sn~ap by:"
#define SZ_FRAME_DRAG            "Frame ~drag"
#define SZ_SZMVDRAGBY            "Dra~g by:"
#define SZ_PUSHBOTTOM            "~Push behind all other windows"
#define SZ_PUSHONE               "Push ~one step behind"
#define SZ_SZMVPUSHBY            "P~ush by:"
// help messages
#define SZHLP_FULLWINDRAG        "The whole window is synchronously "         \
                                 "repainted as it is resized or moved"
#define SZHLP_SMOOTHHMOVE        "Move windows horizontally by 1-pixel steps "\
                                 "rather than the default 8-pixel steps"
#define SZHLP_BKGNDSZMOVE        "Align the window to the screen edges "      \
                                 "according to the spot on the titlebar "     \
                                 "where you clicked"
#define SZHLP_BKGNDSZMVME        "Set the mouse action on the titlebar to "   \
                                 "snap windows to the screen edge"
#define SZHLP_FRAMEDRAG          "Move windows by placing the mouse pointer " \
                                 "on on the window border and dragging it"
#define SZHLP_FRAMEDRAGME        "Set the mouse action that will perform the "\
                                 """Frame drag"" operation"
#define SZHLP_PUSHBOTTOM         "Push the current window to the background " \
                                 "behind all other windows"
#define SZHLP_SZMVZONE           "Push the current window one step behind "   \
                                 "rather than behind all other windows"
#define SZHLP_PUSHBOTTOMME       "Set the mouse action to perform the ""Push "\
                                 "behind all other windows"" function"

//==========================================================================\
// - text_controls_options                                                  |
//==========================================================================/

// control captions
#define SZ_TCGEFAUTOSEL          "Entry field ~automatic text selection"
#define SZ_TCGEFAUTOSELBY        "~Select by:"
#define SZ_TCGMOUCPYPST          "~Mouse copy/cut/paste"
#define SZ_TCGMCPYEF             "~Entry fields"
#define SZ_TCGMCPYMLE            "M~ultiline edit fields"
#define SZ_TCGMCPYSTXT           "Static te~xt"
#define SZ_TCGMCPYLBOX           "~List boxes"
#define SZ_TCGMCPYLBTN           "~Buttons"
#define SZ_TCGCPYBY              "~Copy by:"
#define SZ_TCGCUTBY              "Cu~t by:"
#define SZ_TCGPSTINSBY           "Paste (~insert) by:"
#define SZ_TCGOVRWRTBY           "Paste (~overwrite) by:"
// help messages
#define SZHLP_TCGEFAUTOSEL       "Select the entire contents of an entry "    \
                                 "field"
#define SZHLP_TCGEFAUTOSELBY     "Set the mouse event which will select the " \
                                 "entire contents of an entry field"
#define SZHLP_TCGMOUCPYPST       "Perform clipboard operations with the "     \
                                 "mouse"
#define SZHLP_TCGMCPYEF          "Enable mouse clipboard shortcuts for entry "\
                                 "fields"
#define SZHLP_TCGMCPYMLE         "Enable mouse clipboard shortcuts for "      \
                                 "multiline editing fields"
#define SZHLP_TCGMCPYSTXT        "Enable mouse clipboard shortcuts for "      \
                                 "static text controls"
#define SZHLP_TCGMCPYLBOX        "Enable mouse clipboard shortcuts for list " \
                                 "boxes"
#define SZHLP_TCGMCPYLBTN        "Enable mouse clipboard shortcuts for "      \
                                 "buttons, checkboxes and radio buttons"
#define SZHLP_TCGCPYBY           "Select which mouse event copies the "       \
                                 "selected text to the clipboard"
#define SZHLP_TCGCUTBY           "Select which mouse event cuts the selected "\
                                 "text to the clipboard"
#define SZHLP_TCGPSTINSBY        "Select which mouse event inserts the "      \
                                 "clipboard contents into the text control"
#define SZHLP_TCGOVRWRTBY        "Select which mouse event uses the "         \
                                 "clipboard contents to overwrite the text "  \
                                 "control"


//==========================================================================\
// - VIO_windows_options                                                    |
//==========================================================================/

// control captions
#define SZ_VIONOHSCRL            "Eliminate ~horizontal scrollbars"
#define SZ_VIOINS                "Make ~insert mode the default"
#define SZ_VIOMOUCPY             "Enable ~mouse copy/paste"
#define SZ_VIOKBDCPY             "Enable ~keyboard copy/paste"
#define SZ_VIOCPYBY              "~Copy by:"
#define SZ_VIOCPYALLBY           "Copy ~all by:"
#define SZ_VIOPASTEBY            "~Paste by:"

// help messages
#define SZHLP_VIONOHSCRL         "Enlarge windows resized by a MODE command " \
                                 "in order to remove the horizontal "         \
                                 "scrollbar"
#define SZHLP_VIOINS             "Toggle on/off permanent insert mode by "    \
                                 "pressing Alt+Ins"
#define SZHLP_VIOMOUCLPBRD       "Execute clipboard operations through the "  \
                                 "mouse"
#define SZHLP_VIOMCPY            "Select which mouse/keyboard combination "   \
                                 "marks and copies VIO text to the clipboard"
#define SZHLP_VIOMCPYALL         "Select which mouse/keyboard combination "   \
                                 "copies all the VIO contents to the "        \
                                 "clipboard"
#define SZHLP_VIOMPASTE          "Select which mouse/keyboard combination "   \
                                 "pastes the clipboard contents into the VIO "\
                                 "window"
#define SZHLP_VIOKBDCLPBRD       "Execute clipboard operations through the "  \
                                 "keyboard"
#define SZHLP_VIOCPY             "Select which keyboard combination marks "   \
                                 "and copies VIO text to the clipboard"
#define SZHLP_VIOCPYALL          "Select which keyboard combination copies "  \
                                 "all the VIO contents to the clipboard"
#define SZHLP_VIOPASTE           "Select which keyboard combination pastes "  \
                                 "the clipboard contents into the VIO window"


//==========================================================================\
// - mouse_options                                                          |
//==========================================================================/

// control captions
#define SZ_CHKMAUTFOCUS          "~Automatic focus"
#define SZ_MAFDELAY              "~Delay (1/100 Sec):"
#define SZ_MAFIGNDESK            "~Ignore desktop"
#define SZ_MAFNOTOP              "Don't bring to ~top"
#define SZ_MAFIGNNEW             "Ignore ~new windows"
#define SZ_CHKMPTRHIDE           "Pointer ~hiding"
#define SZ_MPHDELAY              "~Delay (1/10 Sec):"
#define SZ_MPHXCLBTN             "Exclude ~buttons"
#define SZ_MPHXCLMENU            "Exclude ~menu"
#define SZ_MBTN3MAP              "Double click ~emulation"
#define SZ_MBTN3TBAR             "Include titlebar"
#define SZ_CHKMMOVETOFOCUS       "~Move the pointer to the focus window"
#define SZ_MMTFSTEPS             "~Steps:"
#define SZ_MMTFWINCREATE         "~New windows"
#define SZ_MMTFWINDLG            "Dialo~gs"
#define SZ_MMTFXCLDLGNOBTN       "E~xclude buttonless dialogs"
// help messages
#define SZHLP_CHKMAUTFOCUS       "Automatically change window focus by "      \
                                 "following the mouse pointer to another "    \
                                 "window"
#define SZHLP_MAFDELAY           "How long the mouse pointer must stay over " \
                                 "a window to give it the focus"
#define SZHLP_MAFIGNDESK         "Don't give the focus to the desktop when "  \
                                 "the mouse moves over it"
#define SZHLP_MAFNOTOP           "Don't bring to the top the window which "   \
                                 "was given the focus through mouse "         \
                                 "movements"
#define SZHLP_MAFIGNNEW          "Upon creation of a new window, suspend the "\
                                 """automatic focus"" feature until the "     \
                                 "mouse moves over the window"
#define SZHLP_CHKMPTRHIDE        "Hide the mouse pointer when the mouse is "  \
                                 "not being moved or clicked"
#define SZHLP_MPHDELAY           "How long the mouse must stay still before " \
                                 "the pointer is hidden"
#define SZHLP_MPHXCLBTN          "Suspend the ""mouse pointer hiding"" "      \
                                 "feature when the mouse is over a button "   \
                                 "control"
#define SZHLP_MPHXCLMENU         "Suspend the ""mouse pointer hiding"" "      \
                                 "feature when the mouse is over a menu "     \
                                 "control"
#define SZHLP_MBTN3MAP           "A click on the middle mouse button "        \
                                 "simulates a double click of the left mouse "\
                                 "button"
#define SZHLP_MBTN3TBAR          "Enables double click emulation on "         \
                                 "titlebars (this will prevent use of button "\
                                 "3 for window rolling or titlebar hiding)"
#define SZHLP_CHKMMOVETOFOCUS    "Automatically move the mouse pointer to "   \
                                 "the window which is getting the focus"
#define SZHLP_MMTFWINCREATE      "Move the mouse pointer to the focus window "\
                                 "only if it is a new window"
#define SZHLP_MMTFWINDLG         "Move the mouse pointer to the focus window "\
                                 "only if it is a dialog window"
#define SZHLP_MMTFXCLDLGNOBTN    "Exclude dialog windows which do not have "  \
                                 "any button control"
#define SZHLP_MMTFSTEPS          "Number of steps (1 step equals approx. "    \
                                 "1/100 sec.) taken before moving the mouse " \
                                 "to the target window"


//==========================================================================\
// - windows_keys                                                           |
//==========================================================================/

// control captions
#define SZ_WKEYLEFT              "~Left Windows key:"
#define SZ_WKEYRIGHT             "~Right Windows key:"
#define SZ_WKEYMENU              "Windows ~menu key:"
// help messages
#define SZHLP_WKEYLEFT           "Set which action is performed when the "    \
                                 "left Windows key is pressed"
#define SZHLP_WKEYRIGHT          "Set which action is performed when the "    \
                                 "right Windows key is pressed"
#define SZHLP_WKEYMENU           "Set which action is performed when the "    \
                                 "menu Windows key is pressed"
// actions performed by the windows keys
#define SZ_WKEYNOACT             "Do not perform any action"
#define SZ_WKEYHIDESHOW          "Hide/show all windows"
#define SZ_WKEYROLLUNROLL        "Roll/unroll all windows"
#define SZ_WKEYWINLIST           "Show window list"
#define SZ_WKEYCONTEXT           "Show context menu"
#define SZ_WKEYWCLOCK            "Lock up the desktop"
#define SZ_WKEYDRIVEFLDR         "Open the Drives folder"
#define SZ_WKEYSSETUPFLDR        "Open the System Setup folder"
#define SZ_WKEYOS2CMD            "Open an OS/2 command window"
#define SZ_WKEYWCDESK            "Show WarpCenter desktop menu"
#define SZ_WKEYWCWLIST           "Show WarpCenter window list"
#define SZ_WKEYWCPLIST           "Show WarpCenter process list"
#define SZ_WKEYWCTRAYLIST        "Show WarpCenter tray list"
#define SZ_WKEYWCNEXTTRAY        "Switch to the next WarpCenter tray"
#define SZ_WKEYWCINFO            "Show WarpCenter information menu"


//==========================================================================\
// - exception_list dialog                                                  |
//==========================================================================/

// captions of the controls
#define SZ_EXCPTLIST             "Exceptions list:"
#define SZ_FIND                  "~Find"
#define SZ_ADD                   "~Add"
#define SZ_REMOVE                "~Remove"
// help strings
#define SZHLP_LBOX_EXCEPTION     "List of the executables for which the "     \
                                 "current options are disabled"
#define SZHLP_EF_LISTITEM        "Enter the path and name of an executable "  \
                                 "you want to add to the exceptions list"
#define SZHLP_FIND               "Find an executable filename and add it to " \
                                 "the exceptions list"
#define SZHLP_ADD                "Add the name of an executable to the "      \
                                 "exceptions list"
#define SZHLP_REMOVE             "Remove the selected executable name from "  \
                                 "the exceptions list"
// error messages
#define SZERR_EXCGETLIST         "Unable to get the exceptions list!!!"
#define SZERR_EXCUPDATEPRO       "Unable to update the exception list in "    \
                                 "OS2.INI"
#define SZQUERY_EXCFILENOTFOUND  "File not found! Do you want to add it to "  \
                                 "the exceptions list?"
// title of Find-executable-file dialog
#define SZ_ADDTOEXCPTLIST        "Add to the exception list..."


//==========================================================================\
// - mouse_keyboard_actions_events dialog                                   |
//==========================================================================/

// control captions
#define SZ_KEYBCTRLDFUNCS        "Functions controlled by the keyboard"
#define SZ_MOUCTRLDFUNCS         "Functions controlled by the mouse"
#define SZ_FEFUNCEVENT           "~Function:"
#define SZ_ENABLE                "~Enable"
#define SZ_PRIMKEY               "~Primary key:"
#define SZ_MOUBTN                "~Mouse button:"
#define SZ_CLICK                 "C~lick"
#define SZ_DBLCLK                "~Double click"
#define SZ_CTRL                  "~Ctrl"
#define SZ_ALT                   "~Alt"
#define SZ_SHIFT                 "~Shift"
#define SZ_MKINSERT              "Ins"
#define SZ_MKBKSPC               "Bkspc"
#define SZ_MKDEL                 "Del"
// strings to build the text of the "mouse action" buttons
#define SZ_CMPMOUBTN             " mouse button"
#define SZ_DELKEY                " Del"
#define SZ_INSKEY                " Ins"
#define SZ_BKSPKEY               " Backspace"
#define SZ_CMPCLICK              " click"
#define SZ_CMPDBLCLK             " double click"
#define SZ_CMPCTRL               " Ctrl +"
#define SZ_CMPALT                " Alt +"
#define SZ_CMPSHIFT              " Shift +"

// mouse/keyboard functions list
#define SZ_BKSZMOVE              "Windows: snap to the screen edge"
#define SZ_FRAMEDRAG             "Windows: move by dragging the window "      \
                                 "border"
#define SZ_PUTBEHIND             "Windows: push behind other windows"
#define SZ_ROLL                  "Windows: roll"
#define SZ_HTBAR                 "Windows: hide titlebar"
#define SZ_EFSELALLTXT           "Entry field: select all the text"
#define SZ_TXTCTLSCPY            "Text controls: copy selected text to the "  \
                                 "clipboard"
#define SZ_TXTCTLSAPND           "Text controls: append selected text to the "\
                                 "clipboard"
#define SZ_TXTCTLSCUT            "Text controls: cut selected text"
#define SZ_TXTCTLSPASTE          "Text controls: insert text from the "       \
                                 "clipboard"
#define SZ_TXTCTLSOVRWRT         "Text controls: insert text from the "       \
                                 "clipboard, overwriting previously selected "\
                                 "text"
#define SZ_VIOCOPY               "VIO windows: mark & copy text to the "      \
                                 "clipboard"
#define SZ_VIOAPND               "VIO windows: copy all the window contents " \
                                 "to the clipboard"
#define SZ_VIOPASTE              "VIO windows: insert text from the "         \
                                 "clipboard"
#define SZ_FLDOPPRPRT            "Folders: open properties notebook"
#define SZ_FLDOPPAR              "Folders: open parent"
#define SZ_FLDFIND               "Folders: find"
#define SZ_FLDSRTNAME            "Folders: sort by name"
#define SZ_FLDSRTEXT             "Folders: sort by extension"
#define SZ_FLDSRTTYPE            "Folders: sort by type"
#define SZ_FLDRSRTRNAME          "Folders: sort by real name"
#define SZ_FLDRSRTSIZE           "Folders: sort by size"
#define SZ_FLDSRTWRT             "Folders: sort by last write date"
#define SZ_FLDSRTACC             "Folders: sort by last access date"
#define SZ_FLDSRTCREAT           "Folders: sort by creation date"
#define SZ_FLDARRANGE            "Folders: arrange"
#define SZ_FLDREFRESH            "Folders: refresh"

// mouse/keyboard functions target
#define SZ_PERFTBAR              "Action performed on the titlebar"
#define SZ_PERFFOCWIN            "Action performed on the focus window"
#define SZ_PERFWINBRD            "Action performed on the window border"
#define SZ_PERFTXTCTLS           "Action performed on text controls"
#define SZ_PERFEF                "Action performed on entry fields"
#define SZ_PERFVIO               "Action performed on VIO windows"
#define SZ_PERFANYWIN            "Action performed on any window"
#define SZ_PERFONFLDR            "Action performed on folders"


//==========================================================================\
// - bitmap_selection dialog                                                |
//==========================================================================/

// control captions
#define SZ_EDIT                  "~Edit"
#define SZ_IMPORT___             "~Import..."
#define SZ_DISABLE               "~Disable"
#define SZ__DEFAULT              "~Default"
#define SZ_CLOSEBTNPOS           "No button\x09Left side\x09Default "             \
                                 "position\x09Right side\x09"
#define SZ_OK                    "~OK"
#define SZ_CANCEL                "~Cancel"
#define SZ_HELP                  "Help"
#define SZ_EDIT_                 "Edit "
// help messages
#define SZHLP_LBOX_BMPSEL        "Click to select a bitmap, double click to " \
                                 "set it"
#define SZHLP_EDITBMP            "Edit the selected bitmap"
#define SZHLP_FINDBMP            "Copy a bitmap file to the current path"
#define SZHLP_BMPDISABLE         "Remove the button from the titlebar"
#define SZHLP_DEFAULT            "Use the default bitmap"
#define SZHLP_CLOSEPOS           "Select the position of the window close "   \
                                 "button"
#define SZHLP_BMPOK              "Accept the currently selected bitmap"
#define SZHLP_BMPCANCEL          "Dismiss the dialog, leaving the settings "  \
                                 "unchanged"
// dialog titles
#define SZ_BSDTITLE0             "Active titlebar background bitmap"
#define SZ_BSDTITLE1             "Inactive titlebar background bitmap"
#define SZ_BSDTITLE2             "System menu button bitmap"
#define SZ_BSDTITLE3             "Close button bitmap"
#define SZ_BSDTITLE4             "Hide button bitmap"
#define SZ_BSDTITLE5             "Minimize button bitmap"
#define SZ_BSDTITLE6             "Restore button bitmap"
#define SZ_BSDTITLE7             "Maximize button bitmap"
#define SZ_BSDTITLE8             "Roll button bitmap"
#define SZ_BSDTITLE9             "Unroll button bitmap"
#define SZ_BSDTITLE10            "Hide titlebar button bitmap"
#define SZ_BSDTITLE11            "Unhide titlebar button bitmap"
// warning/error messages
#define SZERR_BSDALLOC           "Cannot allocate memory for the dialog "     \
                                 "data!"
#define SZ_ASKOVERWRITE          "The selected file is already present in "   \
                                 "thecurrent directory! Do you want to "      \
                                 "overwrite it?"
#define SZ_ASKCONFIRM            "Please confirm!"
#define SZERR_STARTICONEDIT      "Cannot start the Icon editor!"
#define SZERR_COPYBMP            "Cannot import the bitmap file!"
#define SZERR_INVALIDPATH        "Invalid path: "
// import bitmap dialog
#define SZ_IMPORTBMP             "Import bitmap file"
#define SZ_IMPORTOK              "~Import"


//==========================================================================\
// - help_strings (view.exe parameters).                                    |
// Only univocal portions of the titles of the various pages are needed     |
// The string portions used here depend on the translation of the INF file  |
// source (STYLER2.IPF)                                                     |
//==========================================================================/

// help strings (view parameters):
#define SZINF_FILE               "STYLER2"
#define SZINF_LOGO               " STYLER"
#define SZINF_GEN                " GENERAL"
#define SZINF_EXCPTN             " EXCEPTION"
#define SZINF_DLG                " DIALOG"
#define SZINF_TBAR               " TITLEBAR"
#define SZINF_TBHIDE             " HIDING"
#define SZINF_ROLLING            " ROLLING"
#define SZINF_MAXIMIZ            " MAXIMIZ"
#define SZINF_MOVING             " MOVING"
#define SZINF_TEXT               " TEXT"
#define SZINF_VIO                " VIO"
#define SZINF_MOUSE              " MOUSE"
#define SZINF_MOUKEY             " MOUSE/KEYB"
#define SZINF_BITMAP             " BITMAP"
#define SZINF_INSTALL            " INSTALL"
#define SZINF_REGISTER           " REGISTRATION"
#define SZINF_WKEYS              " WINDOWS KEYS"


//==========================================================================\
// - installer_unistaller strings                                           |
//==========================================================================/

// installation dialog - control captions
#define SZ_INSTTITLE             "Styler/2 installer/uninstaller"
#define SZ_INSTSEL               "Select an action:"
#define SZ_INSTINST              "~Install"
#define SZ_INSTRECR              "~Recreate desktop objects"
#define SZ_INSTUNIST             "~Uninstall"
#define SZ_INSTDRV               "~Drive selection:"
#define SZ_INSTPATH              "~Installation path:"
#define SZ_INSTBACK              "<< ~Back"
#define SZ_INSTFWD               "~Forward >>"
#define SZ_INSTCANC              "~Cancel"
#define SZ_INSTHELP              "~Help"
#define SZ_INSTEXIT              "~Exit"
#define SZ_INSTINSTIN            "Click on Forward to start installation to:"
#define SZ_INSTRFRSHIN           "Click on Forward to start recreating "      \
                                 "objects!"
#define SZ_INSTUNINSTIN          "Click on Forward to start uninstallation!"
#define SZ_INSTLICENSE           "License agreement:"
#define SZ_INSTLOGFILE           "Log file:"

// error messages
#define SZ_INSTERRNOLIC          "Failed to load the license.txt file."
#define SZ_IENERDINST            "Installation has been interrupted! Please " \
                                 "check the log file."
#define SZ_IENERDRFRSH           "Objects creation has been interrupted! "    \
                                 "Please check the log file."
#define SZ_IENERDUNINST          "Uninstallation has been interrupted! "      \
                                 "Please check the log file."

// title of the various progress windows
#define SZ_IPRDRVINFO            "Building the drive list..."
#define SZ_IPRINSTLING           "Installing Styler/2..."
#define SZ_IPRRFRSHING           "Recreating Styler/2 objects..."
#define SZ_IPRDELETING           "Uninstalling Styler/2..."

// other messages
#define SZ_IQRYMKPATH            "Please confirm:\tThe selected path doesn't "\
                                 "exist! Do you want to create it now?"
#define SZ_INSTREPATH            "Click on Back to select a new installation "\
                                 "path!"
#define SZ_IERRMKPATH            "Failed to create the selected path!"
#define SZ_IENDINSTOK            "The installation procedure terminated "     \
                                 "successfully.\x0aPlease reboot to load the "\
                                 "new SMARTWIN.DLL."
#define SZ_IENDRFRSHOK           "The Styler/2 objects have been created "    \
                                 "successfully."
#define SZ_IENDUNINSTOK          "The uninstallation procedure terminated "   \
                                 "successfully."
#define SZ_IENDINSTSTP           "The installation procedure has been "       \
                                 "interrupted."
#define SZ_IENDRFRSHSTP          "The objects creation procedure has been "   \
                                 "interrupted."
#define SZ_IENDUNINSTSTP         "The uninstallation procedure has been "     \
                                 "interrupted."
#define SZ_IENDINSTPRB           "Some problems occurred during "             \
                                 "installation.\x0aPlease check the log file "\
                                 "for more details."
#define SZ_IENDRFRSHPRB          "The objects creation procedure had some "   \
                                 "problems.\x0aPlease check the log file for "\
                                 "more details."
#define SZ_IENDUNINSTPRB         "Some problems occurred during "             \
                                 "uninstallation.\x0aPlease check the log "   \
                                 "file for more details."
#define SZ_INSTPROCERR           "Error!"
#define SZ_INSTCHKPREF           "Checking if the preferences application is "\
                                 "running..."
#define SZ_INSTSYSDLLS           "Adding SMARTWIN.DLL to "                    \
                                 "OS2.INI/SYS_DLLS/LoadPerProcess..."
#define SZ_INSTSYSDLLS2          "Adding STYLER20.DLL to "                    \
                                 "OS2.INI/SYS_DLLS/LoadPerProcess..."
#define SZ_INSTADDINI0           "Adding: "
#define SZ_INSTADDINI1           " to OS2.INI..."
#define SZ_INSTDELINI1           " from OS2.INI..."
#define SZ_ICHKSMWINI            "Checking the presence of a previous "       \
                                 "SMARTWIN.INI file..."
#define SZ_IMKOBJS               "Creating Styler/2 desktop objects..."
#define SZ_IMKOBJ                "Creating the object: "

#define SZ_IDELSYSDLLS           "Removing SMARTWIN.DLL from "                \
                                 "OS2.INI/SYS_DLLS/LoadPerProcess..."
#define SZ_IDELSYSDLLS2          "Removing STYLER20.DLL from "                \
                                 "OS2.INI/SYS_DLLS/LoadPerProcess..."

#define SZ_INSQRYSTRTUP          "Please confirm\tDo you want Styler/2 "      \
                                 "started with default settings (Yes button) "\
                                 "or with all options disabled (No button)?"
#define SZ_IQRYREMBMPS           "Please confirm\tDo you want to remove the " \
                                 "bitmaps subdirectory and all of its "       \
                                 "contents?"
#define SZ_INSDSTROBJ            "Destroying: "
#define SZ_IQRYREMIPTH           "Please confirm\tDo you want to remove the " \
                                 "installation path: "
#define SZ_IQRYREMIPTH1          " and all of its contents?"
#define SZ_IPRELAPSED            "\x0aElapsed time: 11 hours, 22 minutes and "\
                                 "33 seconds."
#define SZ_ILOGCPY               "Copying :"
#define SZ_ILOGCPYTO             " to : "
#define SZ_IOVWRTNEW             "Please confirm\t is a newer file and is "   \
                                 "going to be overwritten!\x0aClick on "      \
                                 """Yes"" to ovewrite it or ""No"" to "       \
                                 "preserve it."
#define SZ_IOVWRTCONF            "Please confirm\t is going to be "           \
                                 "overwritten!\x0aClick on ""Yes"" to "       \
                                 "ovewrite it or ""No"" to preserve it."
#define SZ_ILOGREM               "Removing: "
#define SZ_ILOGMKPATH            "Creating the path: "
// Styler/2 Desktop objects titles
// folder
#define SZ_OBJTFOLDER            "Styler/2"
// other objects
#define SZ_OBJTPRPRTY            "Preferences"
// this is the title of the properties object in the system setup folder:
#define SZ_OBJTPRPRTY1           "Styler/2 Preferences"
#define SZ_OBJTREADME            "Read me"
#define SZ_OBJTLICENSE           "License agreement"
#define SZ_OBJTRGSTRNT           "Registration notes"
#define SZ_OBJTINST_U            "Installer/uninstaller"
#define SZ_OBJTRGSTRPR           "Registration"
#define SZ_OBJTDOC               "User's Guide"


//==========================================================================\
// - registration_dialog strings                                            |
//==========================================================================/

// control captions:
#define SZ_REGTITLE              "Styler/2 registration"
#define SZ_REGINSTR              "How to register:"
#define SZ_REGNAME               "~Name:"
#define SZ_REGADDRESS            "~Address:"
#define SZ_REGCITY               "~City:"
#define SZ_REGZIP                "ZIP:"
#define SZ_REGPROV               "Pro~v/State:"
#define SZ_REGCTRY               "~Country:"
// replace "" with the name of your country (for instance "ITALY")
#define SZ_REGCTRYEF             ""
#define SZ_REGEMAIL              "e-~mail:"
#define SZ_REGTPWD               "VAT code:"

#define SZ_REGCLIENTDATA         "Customer ~data"
#define SZ_REGCLIENTCODE         "Customer ~code"
#define SZ_REGREGCODE            "~Registration key"
#define SZ_REGMLNONE             "I do not want to receive any news by "      \
                                 "e-mail"
#define SZ_REGMLSTLR             "Please e-mail me any news about Styler/2"
#define SZ_REGMLALL              "Please e-mail me any news about Styler/2 "  \
                                 "and any other programs by Alessandro "      \
                                 "Cantatore"
#define SZ_REGINPUTCSTMR         "Type in your full name, location and "      \
                                 "e-mail address:"
#define SZ_REGSENDCODE           "Send your customer code to "                \
                                 "<alexcant@tin.it>!"
#define SZ_REGINPUTREGCODE       "Insert your registration key below:"
#define SZ_REGEDIT               "~Edit"
#define SZ_REGCPYCLPBRD          "~Save"
#define SZ_REGOK                 "~OK"
// file dialog title
#define SZ_REGSAVECSTMRFIL       "Save the customer code as:"
// errors
#define SZERR_REGFAILALLOC       "Error!\tAllocation failure."
#define SZERR_REGLOADREGFILE     "Error!\tFailed to load the file "           \
                                 "REGISTER.TXT."
#define SZERR_REGREADCSTMDAT     "Error!\tFailed to import the customer "     \
                                 "data."
#define SZERR_REGFAILOPPRF       "Error!\tFailed to open SMARTWIN.INI."
#define SZERR_REGSAVECSTMRCD     "Error!\tFailed to save the customer code."
#define SZERR_REGCONVCSTDATA     "Error!\tFailed to generate the customer "   \
                                 "code."
#define SZERR_REGREADREGCODE     "Error!\tFailed to save the registration "   \
                                 "key."
#define SZERR_REGINVKEY          "Error!\tInvalid registration key!"

// contextual help strings
#define SZHLP_REGMLEREADME       "Registration instructions."
#define SZHLP_REGINNAME          "Write your company name (your own name "    \
                                 "when buying for personal use)"
#define SZHLP_REGINADDRESS       "Write your company address (your own "      \
                                 "address when buying for personal use)"
#define SZHLP_REGINCITY          "Write the city name"
#define SZHLP_REGINZIP           "Write the ZIP/postal code, or write ""-"" " \
                                 "if not available."
#define SZHLP_REGINPROV          "Write the state/province name"
#define SZHLP_REGINNATION        "Write your country name"
#define SZHLP_REGINEMAIL         "Write your e-mail address, or write ""-"" " \
                                 "if not available."
#define SZHLP_REGINPIVA          "Write your VAT code or any other tax code " \
                                 "if you need it for the invoice, or write "  \
                                 """-"" if not available."
#define SZHLP_REGBTNEDIT         "Click on the ""Edit"" button if you need "  \
                                 "to modify your customer data."
#define SZHLP_REGMLECSTMRCODE    "Send your customer code to "                \
                                 "<alexcant@tin.it>."
#define SZHLP_REGMLEREGCODE      "Insert the registration key in the editing "\
                                 "field and then click on the OK button."
#define SZHLP_REGREGREG          "Click on the ""OK"" button to save and "    \
                                 "apply your registration key."
#define SZHLP_REGSBAR            "Move the mouse pointer over the window "    \
                                 "controls to get contextual help."

// messages

#define SZMSG_REGCANCNEWREG      "The modification of the registration key "  \
                                 "has been cancelled!"
#define SZMSG_REGREGOK           "The registration key has been saved!"
#define SZMSG_REGREGCODEPRES     "Previous registration key found."

// strings which might be longer than 256 characters:
// context help
#define SZHLP_REGML              "Choose the appropriate item to receive "    \
                                 "e-mail notification {A} when a Styler/2 "   \
                                 "update is released, or {B} when I update "  \
                                 "and release other programs I've developed, "\
                                 "or {C} never."

#define SZHLP_REGCSTMRDATA       "Click on the ""Customer data"" button to "  \
                                 "insert your full name, address and "        \
                                 "e-mail.\x0aIt will be used to generate the "\
                                 "customer code.\x0"

#define SZHLP_REGCSTMRCODE       "Click on the ""Customer code"" button to "  \
                                 "generate your customer code and e-mail it " \
                                 "to <alexcant@tin.it> to get the "           \
                                 "registration key.\x0"

#define SZHLP_REGREGCODE         "If you already have received your "         \
                                 "registration key, then click on the "       \
                                 """Registration key"" button to insert your "\
                                 "key and register Styler/2.\x0"

#define SZHLP_REGBTNCOPY         "Click on the ""Save"" button to save your " \
                                 "customer code in a file, then send that "   \
                                 "file to <alexcant@tin.it> by e-mail to "    \
                                 "receive your registration key.\x0"

// messages
#define SZMSG_REGEDCSTDATA0      "Warning\tIf you now change your data, then "\
                                 "you will need to receive and insert a new " \
                                 "registration key!\x0"

#define SZMSG_REGEDCSTDATA1      "Warning\tIf you edit your data after you "  \
                                 "already sent your customer code to "        \
                                 "<alexcant@tin.it>, then the registration "  \
                                 "key you\'ll receive will no longer be "     \
                                 "valid!\x0"

#define SZMSG_REGCSTMRCODESVD    "The customer code has been successfully "   \
                                 "saved.\x0aYou have to e-mail the file "     \
                                 "CUSTOMER.DAT to <alexcant@tin.it> in order "\
                                 "to complete the registration!\x0"

#define SZMSG_REGNEWCSTCODE0     "Warning\tYou are going to generate a new "  \
                                 "customer code.\x0aYour registration key "   \
                                 "will no longer be valid!!!\x0aClick on "    \
                                 """Yes"" to generate the new code or click " \
                                 "on ""No"" to cancel the operation.\x0"

#define SZMSG_REGNEWCSTCODE1     "Warning\tYou are going to generate a new "  \
                                 "customer code.\x0aIf you already e-mailed " \
                                 "your previous code to <alexcant@tin.it>, "  \
                                 "the registration key you\'ll receive "      \
                                 "won\'t be valid!\x0aClick on ""Yes"" to "   \
                                 "generate the new code or click on ""No"" "  \
                                 "to cancel the operation.\x0"

#define SZMSG_REGNEWREGCODE      "Warning\tYou are going to change your "     \
                                 "registration key!\x0aIf the new key is not "\
                                 "correct, the program may stop "             \
                                 "working.\x0aClick on ""Yes"" to save the "  \
                                 "new key or click on ""No"" to cancel the "  \
                                 "operation.\x0"

// system menu items
#define SZ_SYSMNTBHIDE           "Hide/unhide titlebar\x09"
#define SZ_SYSMNRLUNRL           "Ro~ll/unroll\x09"
#define SZ_SYSMNALT              "Alt+"
#define SZ_SYSMNCTL              "Ctl+"
#define SZ_SYSMNSHFT             "Shift+"
#define SZ_SYSMNINS              "Ins"
#define SZ_SYSMNBKSPC            "Bkspc"
#define SZ_SYSMNDEL              "Del"
#define SZ_SYSMNF1               "F1"
#define SZ_SYSMNF2               "F2"
#define SZ_SYSMNF3               "F3"
#define SZ_SYSMNF4               "F4"
#define SZ_SYSMNF5               "F5"
#define SZ_SYSMNF6               "F6"
#define SZ_SYSMNF7               "F7"
#define SZ_SYSMNF8               "F8"
#define SZ_SYSMNF9               "F9"
#define SZ_SYSMNF10              "F10"
#define SZ_SYSMNF11              "F11"
#define SZ_SYSMNF12              "F12"

// end file ---------------------------------------------------------------

#endif
