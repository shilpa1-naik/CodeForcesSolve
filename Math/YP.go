package main
 
import "fmt"
 
func main() {
	var n int
	fmt.Scanln(&n)
	var x, y, z int
	var sumx, sumy, sumz int
 
	for i := 0; i < n; i++ {
		fmt.Scanln(&x, &y, &z)
		sumx += x
		sumy += y
		sumz += z
	}
 
	if sumx == 0 && sumy == 0 && sumz == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
