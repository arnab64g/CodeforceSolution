fun main() {
    var s = readLine()!!
    var t = s.toInt()
    repeat(t) {
        var str = readLine()!!.split(' ')
        var n = str[0].toInt()
        var m = str[1].toInt()
        var x = str[2].toLong()
        var r = x%n.toLong()
        if(r == 0.toLong())
            r = n.toLong()
        var div = (x-r)/n
        var cln = m*(r-1)+div
        println(cln+1)
    }
}