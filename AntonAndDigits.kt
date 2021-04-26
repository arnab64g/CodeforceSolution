fun main() {
    var vl = readLine()!!.split(' ')
    var k2 = vl[0].toInt();
    var k3 = vl[1].toInt();
    var k5 = vl[2].toInt();
    var k6 = vl[3].toInt();
    var min = k2;
    if(k5 < k2)
        min = k5;
    if(k6 < min)
        min = k6;
    var valueS = min*256;
    k2 -= min;
    if(k3 < k2)
        valueS +=  k3*32;
    else valueS += k2*32;
    println(valueS);
}