class Paritioner {
    static def partition(def list, def x) {
        
        def leftPartition = new LList()
        def rightPartition = new LList()
        def leftTail

        def cur = list.head
        
        while ( cur != null ) {
            if (cur.elem == x) {
                cur = cur.next
                if (leftPartition.isEmpty()) {
                    leftPartition.push(leftTail = list.pop())
                } else {
                    leftTail = leftTail.next = list.pop()
                }
            }
            else if (cur.elem < x) {
                cur = cur.next
                if (leftPartition.isEmpty()) {
                    leftPartition.push(leftTail = list.pop())
                } else {
                    leftPartition.push(list.pop())
                }
            }
            else {
                cur = cur.next
                rightPartition.push(list.pop())
            }
        }

        if (!leftPartition.isEmpty()) {
            leftTail.next = list.head
            list.head = leftPartition.head
            leftTail.next = rightPartition.head
            list.head = leftPartition.head
        } else {
            list.head = rightPartition.head
        }
    }
}
