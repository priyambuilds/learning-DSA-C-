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