fun main(){
    var t = readLine()!!.toInt()
    repeat(t){
        var n = readLine()!!.toInt()
        if(n % 2 == 0){
            var k = 2
            var p = 1
            for(i in 1.. n/2){
                print(k)
                print(" ")
                print(p)
                print(" ")
                k += 2;
                p += 2;
            }
            println();
        }
        else{
            var k = 2
            var p = 1
            for(i in 1 .. n/2 -1){
                print(k)
                print(" ")
                print(p)
                print(" ")
                p+=2;
                k+=2;
            }
            print(n)
            print(" ")
            print(n - 2)
            print(" ")
            print(n - 1)
            println()
        }
    }
}