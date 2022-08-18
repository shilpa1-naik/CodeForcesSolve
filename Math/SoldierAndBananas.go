package main

import (
	"fmt"
)

func main() {
	var k, n, w int
	fmt.Scanln(&k, &n, &w)
	var dollarsNeeded int
	for i:= 0; i <= w; i++ {
		dollarsNeeded += ( i * k)
	}
	if (dollarsNeeded - n ) < 0 {
		fmt.Println( 0 );
	} else {
		fmt.Println( dollarsNeeded - n);
	}
}
