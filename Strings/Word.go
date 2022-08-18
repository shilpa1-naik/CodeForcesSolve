package main

import (
	"fmt"
	"strings"
	"unicode"
)

func main() {
	var str string
	fmt.Scanln(&str)
	var upper, lower int
	for _, ch := range(str) {
		if unicode.IsLower(ch) {
			lower++
		} else {
			upper++
		}
	}

	if upper > lower  {
		str = strings.ToUpper(str)
	} else {
		str = strings.ToLower(str)
	}
	fmt.Println(str)
	
	
}
