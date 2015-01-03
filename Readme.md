Tip Calculator
==============

**C++ Tip Calculator**

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

***The Makefile must have this line appended to the end***

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