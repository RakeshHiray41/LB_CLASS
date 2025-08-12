
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
  def Dispay(self):
    pass

  def Count(Self):
    return self.iCount

def main():
  print("Demonstration of Singly linear Linked List")

  sobj = SinglyLL()
  sobj.InsertFirst(51)
  sobj.InsertFirst(21)
  sobj.InsertFirst(11)

  iRet =sobj.Count()

  print(f"Number of node are : {iRet}")


if (__name__ == "__main__"):
  main()