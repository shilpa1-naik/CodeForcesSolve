package main

import (
	"fmt"
)

func main() {
	var str string
	fmt.Scanln(&str)
	hel := "hello"
	j := 0
	for i := 0 ; i < len(str) && j < 5 ; i++ {
		if hel[j] == str[i] {
			j++
		}
	}
	if j >= 5 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
		
}
