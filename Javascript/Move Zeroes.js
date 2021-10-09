function moveZeroes(n) {
    for (let i = 0; i < n.length; i++) {
      if (n[i] === 0) {
        n.splice(i, 1);
        n.push(0);
      }
    }
  
    return n;
}