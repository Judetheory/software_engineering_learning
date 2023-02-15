#!/bin/bash
echo "Hello World" # to print given words

#system variable are mostly defined in capital case and User defined variable
echo $BASH
echo $BASH_VERSION
echo $HOME
echo $PWD
#the above are examples of system variable

#USER DEFINED VARIABLE
name=Jude
echo $name
echo My name is $name
echo $name is working on $BASH on $PWD
#variable name SHOULD NOT start with number
