fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var  n = readLine()!!.toInt()
        for (i in 1 .. n) {
            print(i)
            print(' ')
        }
        println()
    }
}