class Node:
    def __init__(self, val):
        self.val = val
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def add(self, val):
        new_node = Node(val)
        if self.head is None:
            self.head = new_node
        else:
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node

    def delete(self, val):
        x = self.head
        prev = None

        while x is not None:
            if x.val == val:
                if prev is None:
                    self.head = x.next  # Si es el primer nodo, movemos la cabeza
                else:
                    prev.next = x.next  # Eliminamos el nodo en medio o al final
                return True  # Nodo eliminado
            prev = x
            x = x.next

        return False  # Nodo no encontrado

    def print_list(self):
        temp = self.head
        while temp:
            print(temp.val, end=" -> ")
            temp = temp.next
        print("None")

# Prueba
ll = LinkedList()
ll.add(10)
ll.add(20)
ll.add(30)
ll.print_list()  # 10 -> 20 -> 30 -> None

ll.delete(20)
ll.print_list()  # 10 -> 30 -> None

ll.delete(10)
ll.print_list()  # 30 -> None

ll.delete(30)
ll.print_list()  # None
