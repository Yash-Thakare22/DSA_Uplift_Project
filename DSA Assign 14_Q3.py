class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
	def push(self, new_data):
		new_node = Node(new_data)
		new_node.next = self.head
		self.head = new_node
	def deleteNode(self, position):
		if self.head == None:
			return
		temp = self.head
		if position == 0:
			self.head = temp.next
			temp = None
			return
		for i in range(position -1 ):
			temp = temp.next
			if temp is None:
				break
		if temp is None:
			return
		if temp.next is None:
			return
		next = temp.next.next
		temp.next = None

		temp.next = next
	def printList(self):
		temp = self.head
		while(temp):
			print " %d " %(temp.data),
			temp = temp.next
llist = LinkedList()
llist.push(7)
llist.push(1)
llist.push(3)
llist.push(2)
llist.push(8)

print "Created Linked List: "
llist.printList()
llist.deleteNode(4)
print "\nLinked List after Deletion at position 4: "
llist.printList()