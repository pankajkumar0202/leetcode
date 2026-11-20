class MyLinkedList {

    class Node{
        int data;
        Node next;

        Node(int data) {
          this.data = data;
          this.next = null;
        }
    }

    Node head;

    public MyLinkedList() {
       head = null; 

    }

    public int get(int index) {
        int c = 0;
        Node temp = head;
        if(index < 0) return -1;

        while(temp != null) {

            if(c == index) {
               return temp.data;
            }
            c++;
            temp = temp.next;
        }

        return -1; 
    }
    
    public void addAtHead(int val) {
        Node temp1 = new Node(val);
        temp1.next = head;
        head = temp1;
        
    }
    
    public void addAtTail(int val) {
        Node newNode = new Node(val);
        Node temp = head;
        int c1 = 0;

        if(head == null)  {
            head = newNode;
            return;
        }

        while(temp != null) {

            if(temp.next == null) {
                c1++;
                temp.next = newNode;
            }
            temp = temp.next;

            if(c1 > 0)  break;
        }   
    }
    
    public void addAtIndex(int index, int val) {
        Node temp = head;
        Node newNode = new Node(val);
        int c = 0;

        if(index < 0) return;

        

        if(index == 0) {
            newNode.next = head;
            head = newNode;
            return;
        }

        while(temp != null) {
            if(c == index-1) {
                newNode.next = temp.next;
                temp.next = newNode;
                return;
            }
            if(temp.next == null) return;

            c++;
            temp = temp.next;

            if(c == index) {
                temp.next = newNode;
                return;
            }
        }     
    }
    
    public void deleteAtIndex(int index) {
        int i = 0;
        Node temp = head;
         
        if(head == null || index < 0) return;

        if(index == 0) {
            temp = temp.next;
            head = temp;
            return;
        }

        while(temp != null) {

            if(i+1 == index) {

              if(temp.next == null)  return;
              temp.next = temp.next.next;

            }
            temp = temp.next;
            i++;
        }
    }
}
