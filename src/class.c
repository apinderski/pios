unsigned int el;

asm("mrs %0, CurrentEL"
  : "=r"(el)
  :
  :);
