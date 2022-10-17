#!/bin/bash
echo "Enter Execution Number"
cat << EOF

===========================
    1  -> Searching
    2  -> Max Of Two Arrays
    3  -> Bubble Sort
    4  -> Binary Search Tree
    5  -> Greatest Common Divisor
    6  -> Prime Number
    7  -> C-Sum
    8  -> Insertion Sort
    9  -> Sqrt D/C
    10 -> UDF
    11 -> Binary Search
    12 -> Merge Sort
    13 -> Heap
    14 -> Exponent D/C
    15 -> Max and Min D/C
    16 -> Activity Selector
    17 -> Huffman 
    18 -> Job Selection
    19 -> KnapSack
=======================================

EOF
read Value
while [ $Value != -1 ]
do
    if [[ $Value == 1 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-one/searching.c
        echo "====EXECUTION BEGINS===="
        ./lab-one/searching
    elif [[ $Value == 2 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-one/max-of-two-array.c
        echo "====EXECUTION BEGINS===="
        ./lab-one/max-of-two-array
    elif [[ $Value == 3 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-one/bubble-sort.c
        echo "====EXECUTION BEGINS===="
        ./lab-one/bubble-sort
    elif [[ $Value == 4 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-one/bst.c
        echo "====EXECUTION BEGINS===="
        ./lab-one/bst
    elif [[ $Value == 5 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-two/gcd.c
        echo "====EXECUTION BEGINS===="
        ./lab-two/gcd
    elif [[ $Value == 6 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-two/prime-number.c
        echo "====EXECUTION BEGINS===="
        ./lab-two/prime-number
    elif [[ $Value == 7 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-three/csum.c
        echo "====EXECUTION BEGINS===="
        ./lab-three/csum
    elif [[ $Value == 8 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-three/insertion-sort.c
        echo "====EXECUTION BEGINS===="
        ./lab-three/insertion-sort
    elif [[ $Value == 9 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-three/sqrt.c
        echo "====EXECUTION BEGINS===="
        ./lab-three/sqrt
    elif [[ $Value == 10 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-three/udf.c
        echo "====EXECUTION BEGINS===="
        ./lab-three/udf

    elif [[ $Value == 11 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-four/binary-search.c
        echo "====EXECUTION BEGINS===="
        ./lab-four/binary-search

    elif [[ $Value == 12 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-four/merge-sort.c
        echo "====EXECUTION BEGINS===="
        ./lab-four/merge-sort
    elif [[ $Value == 13 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-five/heap.c
        echo "====EXECUTION BEGINS===="
        ./lab-five/heap
    elif [[ $Value == 14 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-six/expo.c
        echo "====EXECUTION BEGINS===="
        ./lab-six/expo
    elif [[ $Value == 15 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-six/max-min.c
        echo "====EXECUTION BEGINS===="
        ./lab-six/max-min
    
    elif [[ $Value == 16 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-seven/act-selector.c
        echo "====EXECUTION BEGINS===="
        ./lab-seven/act-selector
    elif [[ $Value == 17 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-seven/huffman.c
        echo "====EXECUTION BEGINS===="
        ./lab-seven/huffman
    elif [[ $Value == 18 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-seven/job.c
        echo "====EXECUTION BEGINS===="
        ./lab-seven/job
    elif [[ $Value == 19 ]]
    then
        echo "====CODE READING BEGINS===="
        cat ../app/lab-seven/knapsack.c
        echo "====EXECUTION BEGINS===="
        ./lab-seven/knapsack
    fi
    echo " ================================ "
    echo " "
    echo "Enter Execution Number"
    echo " "
    echo " ================================ "
    read Value;
done