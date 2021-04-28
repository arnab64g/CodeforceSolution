fun factorial(n:Int): Long {
    var prod = 1.toLong()
    for (i in 1 .. n) {
        prod *= i
    }
    return prod
}
fun main() {
    var s = readLine()!!.split(' ')
    var x = s[0].toInt()
    var y = s[1].toInt()
    var min:Int
    if(x < y)
        min = x
    else min = y
    println(factorial(min))
}