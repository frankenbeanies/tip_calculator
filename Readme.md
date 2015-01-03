Tip Calculator
==============

**C++ Tip Calculator**

These instructions are assuming an Ubuntu 14.04 machine with g++ and the Ubuntu SDK already installed. This code is theoretically cross platform, but I have not had an opportunity to test this assertion. 

Installing, Compiling, and Running
----------------------------------

```
//Get the code
git clone https://github.com/frankenbeanies/tip_calculator.git
cd tip_calculator
//Generate the makefile
qmake --makefile
qmake --project
```

***The file tip_calculator.pro must have this line appended to the end***

```
QT += widgets
```

This adds QT to the build. The project will not compile with out this. 

```
//Make the project
make
//Run the project
./tip_calculator
```

At this point, you should see the application. 