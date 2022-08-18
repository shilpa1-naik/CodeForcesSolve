package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scanln(&n)
	quo := n / 5
	rem := n % 5
	fmt.Println( quo + (func() int {if rem > 0 {return 1}  else {return 0}}()))

}
