fun distance1(a:Char, b:Char): Int {
    var x = a.toInt()
    var y = b.toInt()
    var temp:Int
    if(x < y){
        temp = x
        x = y
        y = temp
    }
    temp = 10+y-x
    if(temp < x-y)
        return temp
    else
        return x-y;
}
fun main() {
    var s = readLine()!!
    var n = s.toInt()
    var s1 = readLine()!!
    var s2 = readLine()!!
    var i = 0
    var sum = 0
    repeat(n){
        sum += distance1(s1[i], s2[i])
        i++
    }
    println(sum)
}