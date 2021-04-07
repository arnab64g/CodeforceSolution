fun brokenwall(a:Int, b:Int):Int{
    if(a < 3 || b < 3)
        return a*b
    else {
        var outer = 2*(a+b-2)
        return outer+brokenwall(a-2, b-2)
    }
} 
fun main() {
    var s = readLine()!!
    var n = s.toInt()
    repeat(n){
        var ab = readLine()!!.split(' ')
        var a = ab[0].toInt()
        var b = ab[1].toInt()
        println(brokenwall(a, b))

    }
}