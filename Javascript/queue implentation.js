class Queue {
  constructor() {
    this.items = {};
    this.headIndex = 0;
    this.tailIndex = 0;
  }
  enqueue(item) {
    this.items[this.tailIndex] = item;
    this.tailIndex++;
  }
  dequeue() {
    const item = this.items[this.headIndex];
    delete this.items[this.headIndex];
    this.headIndex++;
    return item;
  }
  peek() {
    return this.items[this.headIndex];
  }
  get length() {
    return this.tailIndex - this.headIndex;
  }
}
const queue = new Queue();
queue.enqueue(7);
queue.enqueue(2);
queue.enqueue(6);
queue.enqueue(4);
queue.dequeue(); // => 7
queue.peek();    // => 2
queue.length;    // => 3
