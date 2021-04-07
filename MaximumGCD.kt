fun maxGCD(n:Int):Int{
    var g:Int
    if(n >= 4){
        if(n%2 == 0)
            g = n/2
        else g = (n-1)/2
    }
    else g = 1
    return g
}
fun main() {
    var s = readLine()!!
    var t = s.toInt()
    var n:Int
    repeat(t){
        s = readLine()!!
        n = s.toInt()
        println(maxGCD(n))
    }

}