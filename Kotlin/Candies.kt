fun main() {
    var s = readLine()!!
    var t = s.toInt()
    var n:Int
    repeat(t){
        s = readLine()!!
        n = s.toInt()
        var i = 3
        var cst = 2
        while(n%i != 0){
            i += cst*2
            cst *= 2
        }
        println(n/i)

    }
}