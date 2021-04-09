import kotlin.math.sqrt
import kotlin.math.*
fun isprime(n:Int):Boolean{
    var res = true
    var vl = sqrt(n.toDouble()).toInt()
   for (i in 2 .. vl+1) {
       if(n%i == 0){
           res = false
           break
       }
   }
   return res
}
fun main() {
    var s = readLine()!!.split(' ');
    var n = s[0].toInt()
    var m = s[1].toInt()
    if(! isprime(m))
        println("NO")
    else{
        var nx = n+1
        while(! isprime(nx))
            nx++
        if(nx == m)
            println("YES")
        else println("NO")
    }
}