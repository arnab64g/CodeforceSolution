fun main() {
    var s = readLine()!!.split(' ')
    var n = s[0].toInt()
    var m = s[1].toInt()
    var p = s[2].toInt()
    var res = true
    if(n > m)
        res = false
    else if(n > p)
        res = false
    if(res)
        println("Yes")
    else println("No")
}