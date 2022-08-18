package main

import (
	"runtime"
	"fmt"
)

func main() {
	fmt.Printf("NumCPU is %d\n", runtime.NumCPU())
}
