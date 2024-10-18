fun main() {
    var s = readLine()!!
    var n = s.toInt()
    if( n >= 0)
        println(n)
    else{
        var l1 = n % 10
        n /= 10
        var l2 = n % 10
        n /= 10
        n *= 10
        if(l1 > l2)
            n += l1
        else n+= l2
        print(n)         
    }
}