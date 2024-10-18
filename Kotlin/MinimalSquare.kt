fun minSquare(x:Int, y:Int):Int{
   
    var max = x.toInt()
    var min = y.toInt()
    if(y > x){
        max = y
        min = x
    }
    min *= 2
    var len:Int 
    if(max > min) 
        len = max
    else len = min
    return len*len
}
fun main() {
    var s = readLine()!!
    var t = s.toInt()
    repeat(t){
        var sz = readLine()!!.split(' ')
        var a = sz[0].toInt()
        var b = sz[1].toInt()
        println(minSquare(a, b))
        
    }
}