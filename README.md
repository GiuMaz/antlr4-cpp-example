 ANTLR4 CPP CALCULATOR
=======================

This is a simple project written in c++ that use [antlr4](https://www.antlr.org/) 
to parse simple arithmetic expressions and interpret them using the tools
provided by the antlr runtime.

The calculator use *Listeners* to calculate the result of an arithmetic expression.

## installation

The antlr runtime is cloned by the cmake superbuild system, and a copy of
the antlr4.7.1 jar is provided in the external directory, so there are no
need to directly install antlr, but java is required to execute the code
generation.

To build the preject, execute the commands:

> mkdir build  
> cd build  
> cmake ..  
> make  

The first call to `make` require more time because it should download and
build the antlr runtime.

## usage

The calculator `calc` support +,-,\* and / between integer number. It is
also possible to use parenthesis. For example:

> calc > (1 + 2)/3  
> 1  
> calc > 1 + 2 + 3 + 4 - 5  
> 5  


