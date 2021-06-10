#! /bin/bash

FIRST=$1
SECOND=$2
./rez $FIRST $SECOND 

READ=$?
if [ "$READ" -eq "0" ]
then
	echo "Success test"
else
	echo "Unsuccess test,please try again"
fi
