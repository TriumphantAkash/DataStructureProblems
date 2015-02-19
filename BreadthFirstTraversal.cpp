// THIS IS ALSO CALLED LEVEL ORDER TRAVERSAL

/*
For Breadth First Traversal, we make use of a queue(circular may be) and it is implemented in the followning steps
1) We start from the root node and enqueue it in the queue
2) Dequeue root from the queue, print it and enqueue its children in the queue
3) Dequeue next element from the queue, print it and enqueue the children of removed element in the queue
4) when we reach the leaf nodes, we just remove them from the queue and print them but does not add anything in the queue because leaf nodes has no children 
*/

//We will follow the same procedure in the implementation
