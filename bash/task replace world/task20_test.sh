#!/bin/bash
CC=gcc
EXEC=task20
SRC=task20.c
if [ "$SRC" -nt "$EXEC" ]
then
    echo "Rebuilding $EXEC..."
    $CC $SRC -o $EXEC
fi
input="./test_cases.txt"
COUNTER=1
check_output () {
    if [ "$READ" -ne "0" ]
    then
        if [ "$READ" -eq "1" ]
        then
            READ="1 Three agruments needed"
        elif [ "$READ" -eq "2" ]
        then
            READ="2 Wrong agrument format"
         elif [ "$READ" -eq "3" ]
        then
            READ="3 the world $3 is not in the string $1"
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
