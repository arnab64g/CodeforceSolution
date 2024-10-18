fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var a = s[0].toInt()
        var b = s[1].toInt()
        var c = s[2].toInt()
        var d  = a
        if(d < b)
            d = b
        if(d < c)
            d = c
        println(d)
    }
}