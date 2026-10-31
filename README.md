# What This mod changes
I'll put this at the bottom in case you want to be surprised

# How To Install 
(taken directly from [Seeky's Rel Loader](https://github.com/SeekyCt/spm-rel-loader/blob/master/ISO.md) so you don't have to click another link to get there)
* Install [Wiimms ISO Tools](https://wit.wiimm.de/) if you haven't already
    * You may need to restart your computer after installation if the commands aren't working
* Open the folder with your SPM ISO in a command prompt
* Run the command `wit x ISONAMEHERE extracted`
    * Replace ISONAMEHERE with the name of your ISO
* Navigate to `extracted/DATA/files/`
    * This should contain folders like `a`, `eff` and `font`
* Create a folder named `mod`
* Copy the rel for the mod into this folder and rename it `mod.rel`
* In the same location as before, run the command `wit copy --align-files extracted mod.wbfs`
    * Feel free to delete the `extracted` folder after this is done if you want to save storage space
* Your ISO is now patched, return to the tutorial that linked you here for instructions on what to do next

# Credits
* [L5050](https://github.com/L5050) and [Seeky](https://github.com/SeekyCt) for the spm rel loader mod template (and this ReadMe's sources)
* [Yme](https://github.com/shiken-yme) for the star effect function and reviewing my code

# Actually What the mod does
You will take damage when you:
  * Jump
  * Jump in a cutscene
  * Use Carrie (I made sure she still works)
  * Fall off a ladder
  * Use a Spring
  * Swim (yes I know I'm evil)
