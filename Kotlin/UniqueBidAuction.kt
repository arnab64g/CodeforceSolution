fun main() {
    var t = readLine()!!.toInt()
    repeat(t){
        var n = readLine()!!.toInt()
        var a = IntArray(n) { 0 }
        var pos = IntArray(n)
        var inpt = readLine()!!.split(' ')
        for (i in 0 .. n-1) {
            a[inpt[i].toInt()-1]++;
            pos[inpt[i].toInt()-1] = i;
        }
        var loc = -1
        for (i in 0 .. n-1) {
            if(a[i] == 1){
                loc = pos[i]+1;
                break;
            }
        }
        println(loc)
    }
}