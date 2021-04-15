fun main() {
    var t = readLine()!!.toInt()
    repeat(t) {
        var n = readLine()!!
        var len = n.length
        var digplus = 0
        for (i in 1 .. len) {
            digplus += i
        }
        var dig = n[0] - '0'
        dig--
        dig *= 10
        digplus += dig
        println(digplus)
    }
}