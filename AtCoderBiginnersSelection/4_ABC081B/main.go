package main

import "fmt"

func main() {
	var n, b int
	fmt.Scanf("%d", &n)
	s := make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &b)
		s[i] = b
	}
	c := 0
	for {
		for i, v := range s {
			if v%2 != 0 {
				fmt.Println(c)
				return
			}
			s[i] = v / 2
		}
		c++
	}
}
