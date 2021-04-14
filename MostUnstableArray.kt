fun main() {
    var s = readLine()!!
    var t = s.toInt()
    while(t-- != 0){
        var value:Int
        var nm = readLine()!!.split(' ')
        var n = nm[0].toInt()
        var m = nm[1].toInt()
        if( n == 1)
            value = 0
        else if(n == 2)
            value = m
        else value = 2*m
        println(value)
    }
}