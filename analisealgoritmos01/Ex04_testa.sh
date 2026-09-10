#!/bin/bash

for i in $(cat entradas.txt)
do
    echo $i | ./Ex04
done