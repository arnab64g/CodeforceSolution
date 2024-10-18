fun main() {
    var n = readLine()!!.toInt();
    var s = readLine()!!.toCharArray()
    var i = 0;
    var count = 0
    while(i < n - 2){
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
            count++
        i++;
    }
    println(count);
}