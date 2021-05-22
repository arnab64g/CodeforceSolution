fun main() {
    var n = readLine()!!.toInt()
    var s = readLine()!!.split(' ')
    var chest = 0
    var bicps = 0
    var back = 0
    var max = "chest"
    var sz:Int
    for (i in 0 .. n-1) {
        if(i % 3 == 0)
            chest += s[i].toInt()
        else if(i % 3 == 1) 
            bicps += s[i].toInt()
        else back += s[i].toInt()
    }
    sz = chest
    if(bicps > chest){
        max = "biceps"
        sz = bicps
    }
    if(back > sz)
        max = "back"
    println(max)
}