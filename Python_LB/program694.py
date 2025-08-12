
class Node:
  def __init__(self, No):
    self.Deta = No
    self.Next = None

def main():
  print("Demonstration of Singly linear Linked List")

  obj1 = Node(11)
  obj2 = Node(21)
  obj3 = Node(51)

  obj1.Next = obj2
  obj2.Next = obj3
  obj3.Next = None

if (__name__ == "__main__"):
  main()