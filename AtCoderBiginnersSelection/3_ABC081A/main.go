package main

import (
	"fmt"
	"strings"
)

func main() {
	var s string
	fmt.Scanf("%s", &s)
	c := strings.Count(s[0:3], "1")
	fmt.Println(c)
}
