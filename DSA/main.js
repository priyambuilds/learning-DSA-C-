let a = 10
let b = 20
let c = 40
const Calculate = (a, b, c) => {
    let max = a >= b && a >= c ? a
            : b >= a && b >= c ? b
            : c
    let min = a<=b && a<= c
    return (
        console.log(`min = ${min}, max = ${max}`)
    )
}
Calculate(a, b, c)

let n = Number(prompt("enter a no"))
let arr = Array(n)
const Sort = (arr) => {
    for (let i = 0; i < n; i++) {
        let a = Number(prompt(("enter nos in arr")))
        arr[i] = a
    }
    let pos = 0
    let neg = 0
    let eve = 0
    let odd = 0
    for (i of arr) {
        if (i > 0) {
            pos += 1
        }
        if (i < 0) {
            neg += 1
        }
        if (i % 2 == 0) {
            eve += 1
        }
        else {
            odd += 1
        }
    }
    console.log(arr)
    return console.log(`${pos}, ${neg}, ${eve}, ${odd}`)
}
Sort(arr)