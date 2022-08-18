package main

import (
	"fmt"
)

func findIfDistinct( n int ) bool {
	count := 0
	var arr [10000]int 
	for ;n > 0; {
		x := n % 10
		if arr[x] == 1 {
			n = n / 10
			continue
		} else {
			arr[x] = 1
			count++
		}
		n = n / 10
	}
	if count == 4 {
		return true
	}
	return false
}

func main() {
	var n int
	fmt.Scanln(&n)

	for i := n+1;; {
		if findIfDistinct(i) {
			fmt.Println(i)
			return
		}
		i++
	}

}

