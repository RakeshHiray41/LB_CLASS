
class Node:
  def __init__(self, No):
    self.Data = No
    self.next = None

class SinglyLL:
  def __init__(self):
    self.First = None
    self.iCount = 0

########################################################################################
  def InsertFirst(self,No):
    newn = Node(No)
    if(self.First == None):   #LL is empty
      self.First = newn
    else:                     #LL atleast one node
      newn.next = self.First
      self.First = newn
    self.iCount = self.iCount + 1

########################################################################################
  def InsertLast(self,No):
    newn = Node(No)
    if(self.First == None):   #LL is empty
      self.First = newn
    else:                     #LL atleast one node
      temp = self.First

      while(temp.next != None):
        temp = temp.next
      temp.next = newn
    self.iCount = self.iCount + 1

##############################################################################################

  def Display(self):
    temp = self.First
    while(temp != None):
      print(f" | {temp.Data} | -> ",end="  ")
      temp = temp.next
    print("None\n")

#############################################################################################

  def Count(self):
    return self.iCount

#############################################################################################

  def DeleteFirst(self):
    if(self.First == None):
      return
    else:
      temp = self.First
      self.First = self.First.next
      del temp
      self.iCount =self.iCount - 1

#################################################################################################

  def DeleteLast(self):
    if(self.First == None):
      return
    elif(self.First.next == None):  #LL contian only one node
      del self.First
      self.First = None

    else:
      temp = self.First
      while(temp.next.next != None):
        temp = temp.next
      del temp.next
      temp.next = None
    self.iCount =self.iCount - 1

#################################################################################################
  def insertAtPos(self, No, pos):
    if ((pos < 1) or (pos > self.iCount + 1)):
      return

    if (pos == 1):
      self.InsertFirst(No)
    elif (pos == self.iCount + 1):
      self.InsertLast(No)
    else:
      newn = Node(No)
      temp = self.First
      for i in range(1, pos - 1):
        temp = temp.next
      newn.next = temp.next
      temp.next = newn
      self.iCount += 1
#################################################################################################
  def DeleteAtPos(self, pos):
    if ((pos < 1) or (pos > self.iCount + 1)):
      return

    if (pos == 1):
      self.DeleteFirst()
    elif (pos == self.iCount):
      self.DeleteLast()
    else:
      temp = self.First
      for i in range(1, pos - 1):
        temp = temp.next
      target = temp.next
      temp.next = target.next
      del target
      self.iCount -= 1
#################################################################################################

def main():
  print("Demonstration of Singly linear Linked List")

  sobj = SinglyLL()

  while True:
    print("\n===============================")
    print("Operations on Singly Linked List")
    print("1. Insert First")
    print("2. Insert Last")
    print("3. Insert at Position")
    print("4. Delete First")
    print("5. Delete Last")
    print("6. Delete at Position")
    print("7. Display")
    print("8. Count")
    print("9. Exit")
    print("===============================")

    try:
      choice = int(input("Enter your choice: "))
    except ValueError:
      print("Invalid input. Please enter a number.")
      continue

    match choice:
      case 1:
        no = int(input("Enter number to insert at first: "))
        sobj.InsertFirst(no)

      case 2:
        no = int(input("Enter number to insert at last: "))
        sobj.InsertLast(no)

      case 3:
        no = int(input("Enter number to insert: "))
        pos = int(input("Enter position: "))
        sobj.insertAtPos(no, pos)

      case 4:
        sobj.DeleteFirst()

      case 5:
        sobj.DeleteLast()

      case 6:
        pos = int(input("Enter position to delete: "))
        sobj.DeleteAtPos(pos)

      case 7:
        sobj.Display()

      case 8:
        print(f"Number of nodes are: {sobj.Count()}")

      case 9:
        print("Exiting the program...")
        break

      case _:
        print("Invalid choice. Please try again.")

if (__name__ == "__main__"):
  main()