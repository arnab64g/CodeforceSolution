fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var a = s[0].toLong()
        var b = s[1].toLong()
        var c = s[2].toLong()
        var h = c/2
        println((c-h)*a - b*h)
    }
}