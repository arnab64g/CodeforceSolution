fun main() {
    var t = readLine()!!.toInt();
    repeat(t){
        var n = readLine()!!.toInt();
        if(n == 2)
            println(2)
        else if(n % 2 == 0)
            println(0)
        else println(1)
    }
}