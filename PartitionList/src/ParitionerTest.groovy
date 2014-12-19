/**
 * Created by paul on 12/10/14.
 */
class ParitionerTest extends GroovyTestCase {
    void testPartition() {
        LList ll = new LList()

        ll.push(1).push(10).push(2).push(9).push(5).push(3).push(5).push(8)
        Paritioner.partition ll, 5
        println ll
    }
}
