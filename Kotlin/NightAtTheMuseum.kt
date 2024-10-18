fun distance(a:Char, b:Char):Int{
    var min:Int
    if(a < b){
        min = b-a
        if(min > 13)
            return 26-min
        else return min
    }
    else{
        min = ('z' - a) + (b - 'a') +1
       
        if(min > 13)
            return 26-min
        else return min
    }
}
fun main() {
    var s = readLine()
    s = s.toString()
    var len = s.length
    var sum = 0
    var i = 0
    var value:Int
    s = 'a'+s
    repeat(len){
        value = distance(s[i], s[i+1])
        sum +=  value
        
        i = i+1
    }
    println(sum)

}