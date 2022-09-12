#!/bin/bash
isTest=$1
find ./ -name main.go | entr -p ./shell/run.sh /_ $isTest

