fun main() {
    var s = readLine()!!
    var t = s.toInt()
    repeat(t){
        var s1 = readLine()!!.split(' ')
        var n = s1[0].toInt()
        var x = s1[1].toInt()
        if(n <= 2)
            println(1)
        else{
            n -= 2
            var count = 1
            if(n % x != 0)
                count++
            count += n/x
            println(count)
        }
    }
}