#!/bin/bash
CC=gcc
EXEC=task8
SRC=task8.c
if [ "$SRC" -nt "$EXEC" ]
then
    echo "Rebuilding $EXEC..."
    $CC $SRC -o $EXEC
fi
input="./test_cases_points.txt"
COUNTER=1
check_output () {
    if [ "$READ" -ne "0" ]
    then
        if [ "$READ" -eq "1" ]
        then
            READ="1 Two agruments needed"
        elif [ "$READ" -eq "2" ]
        then
            READ="2 Points match"
        elif [ "$READ" -eq "3" ]
        then
            READ="3 Wrong imput format"
        fi
        echo -e "\nTest $COUNTER failed,argument were $line exit status: $READ\n"
    else
        echo -e "\nTest $COUNTER passed\n"
    fi
}
while IFS= read -r line
    do
        ./$EXEC $line
        READ=$?
        check_output $COUTER
        (( COUNTER++ ))
    done < "$input"
