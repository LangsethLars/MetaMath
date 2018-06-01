# MetaMath
Simple project to verify mathematical theorems in MetaMath from a text file.

Here are some useful links about this subject:
* <http://us.metamath.org/>
* <https://github.com/david-a-wheeler/metamath-test>
* <http://www.cs.miami.edu/~tptp/>

Parser is not finished but it works. Better error handling should be implemented. The bootstrapper was implemented first. This was used to generate two files **Parser_Bootstrap.cpp** and **Parser_Bootstrap.h**.
These files was then used for lexing and parsing the text file **DefaultCFG.txt** to generate **Parser_DefaultCFG.cpp** and **Parser_DefaultCFG.h**. They are equal to the other two files as they should be.
The text file is meant to represent what was done during the bootstrap. The files **Parser.cpp** and **Parser.h** is meant to be used stand alone together with the generated files with lookup tables.

The project is created in Visual Studio 2017. Most windows specific things has been removed just in case somebody need to run it on another platform. The remaining VS2017 spesific files are:
* MetaMath.sln - 
  Solution file for the project. The main entry point for Visual Studio 2017.
* MetaMath.vcxproj - 
  Contains information about the version of Visual C++ that generated the file, and information about the platforms, configurations, and project features selected with the Application Wizard.
* MetaMath.vcxproj.filters - 
  Contains information about the association between the files in the project and the filters. This association is used in the IDE to show grouping of files with similar extensions under a specific node (for e.g. ".cpp" files are associated with the "Source Files" filter).

PS: Remember to change Project-->Properties so the program runs in the **Test** folder.