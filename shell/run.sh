#!/bin/bash
dir=`dirname $1`
isTest=$2

go build -o $dir "${dir}/main.go"

if [ $isTest = "t" ]; then
    oj t -c "${dir}/main" -d "${dir}/test"
fi