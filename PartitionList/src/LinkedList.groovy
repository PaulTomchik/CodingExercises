/**
 * Created by paul on 12/10/14.
 */
class LList {

    class Node {
        def elem
        def next

        Node(elem) {
            this.elem = elem
        }
    }

    def head = null

    def push (Node node) {
        node.next = head
        head = node
        return this
    }

    def push (def elem) {
        return push(new Node(elem))
    }

    def pop () {
        def node = head

        if (head != null) {
            head = head.next
            node.next = null
        }

        return node
    }

    def isEmpty() {
        return (head == null)
    }

    @Override
    String  toString() {
        StringBuilder stringBuilder = new StringBuilder("[")
        def cur = head

        while(cur != null) {
            stringBuilder.append(cur.elem)
            if((cur = cur.next) != null)
                stringBuilder.append(", ")
        }

        stringBuilder.append("]")

        return stringBuilder.toString()
    }
}
