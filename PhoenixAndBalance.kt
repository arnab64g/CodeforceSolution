fun power(n:Int):Int{
    var prod = 1;
    repeat(n){
        prod *= 2
    }
    return prod
}
fun main() {
    var s = readLine()!!
    var n:Int
    var hf:Int
    var i:Int
    var t = s.toInt()
    repeat(t){
        s = readLine()!!
        n = s.toInt()
        hf = n/2
        i = 1
        var w1 = 0
        var w2 = 0
        repeat(hf-1){
            w1 += power(i)
            i++
        }
        w1 += power(n)
        repeat(hf){
            w2 += power(i)
            i++
        }
        println(Math.abs(w1-w2))
    }
}