fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var s = readLine()!!.split(' ')
        var a = s[0].toInt()
        var b = s[1].toInt()
        var c = s[2].toInt()
        var d = s[3].toInt()
        var x = (a+b)/2
        var y = (c+b)/2
        var z = (c+d)/2
        if(x+y <= z){
            x = b
            y = c
            z = c
        }
        print(x)
        print(' ')
        print(y)
        print(' ')
        println(z)
    }
}