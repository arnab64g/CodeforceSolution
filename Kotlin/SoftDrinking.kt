fun main() {
    val elements = readLine()!!.split(' ')
    var n = elements[0].toInt()
    var k = elements[1].toInt()
    var l = elements[2].toInt()
    var c = elements[3].toInt()
    var d = elements[4].toInt()
    var p = elements[5].toInt()
    var nl = elements[6].toInt()
    var np = elements[7].toInt()
    var td = (k*l)/nl
    var tl = c*d
    var ts = p/np
    var tt = tl
    if(tt > ts)
        tt = ts
    if(tt > td)
        tt = td
    println(tt/n)
    
}