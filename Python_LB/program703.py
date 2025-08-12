
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

  def Dispay(self):
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
  sobj.InsertFirst(51)
  sobj.InsertFirst(21)
  sobj.InsertFirst(11)

  sobj.Dispay()

  iRet =sobj.Count()
  print(f"Number of node are : {iRet}")

  sobj.InsertLast(101)
  sobj.InsertLast(111)
  sobj.InsertLast(121)

 
  sobj.Dispay()

  iRet =sobj.Count()
  print(f"Number of node are : {iRet}")

  sobj.insertAtPos(105,5)
  sobj.Dispay()

  iRet =sobj.Count()
  print(f"Number of node are : {iRet}")

  sobj.DeleteAtPos(5)

  sobj.Dispay()

  iRet =sobj.Count()
  print(f"Number of node are : {iRet}")





if (__name__ == "__main__"):
  main()