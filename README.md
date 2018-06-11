# MetaMath
Simple project to verify mathematical theorems in MetaMath from a text file. The output from a lexer and parser generator used in this project is from **Parser** <https://github.com/LangsethLars/Parser>.

The project has just started and I used some other existing open source code just as a start before writing my own code.

Here are some useful links about this subject:
* <http://us.metamath.org/>
* <https://github.com/david-a-wheeler/metamath-test>
* <http://www.cs.miami.edu/~tptp/>

The project is created in Visual Studio 2017. Most windows specific things has been removed just in case somebody need to run it on another platform. The remaining VS2017 spesific files are:
* MetaMath.sln - 
  Solution file for the project. The main entry point for Visual Studio 2017.
* MetaMath.vcxproj - 
  Contains information about the version of Visual C++ that generated the file, and information about the platforms, configurations, and project features selected with the Application Wizard.
* MetaMath.vcxproj.filters - 
  Contains information about the association between the files in the project and the filters. This association is used in the IDE to show grouping of files with similar extensions under a specific node (for e.g. ".cpp" files are associated with the "Source Files" filter).

PS: Remember to change Project-->Properties so the program runs in the **Test** folder.