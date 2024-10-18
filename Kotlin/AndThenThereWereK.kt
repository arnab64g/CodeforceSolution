fun valueofk(n:Int){
    var v = n
    var count = 0
    while(v != 0){
        count++
        v /= 2
    }
    var res = Math.pow(2.toDouble(), count.toDouble() - 1) - 1
    println(res.toInt())
    
}
fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var n = readLine()!!.toInt()
        valueofk(n)
    }
}