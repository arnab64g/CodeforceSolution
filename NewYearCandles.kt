fun main() {
    var s = readLine()!!.split(' ')
    var a = s[0].toInt()
    var b = s[1].toInt()
    var h = a
    var c = a
    while(c != 0){
        c = a/b
        h += c
        a = c + (a%b)
    }
    println(h)
}