#! /bin/bash

FIRST=$1
SECOND=$2
./rez $FIRST $SECOND 

READ=$?
if [ "$READ" -eq "0" ]
then
	echo "tast passed"
else
	echo "test failed"
fi
