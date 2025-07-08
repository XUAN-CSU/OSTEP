A **page fault** is an event that occurs when a running program tries to access a portion of memory that is **not currently mapped to physical RAM**. It’s a normal and expected part of memory management in modern operating systems that use **virtual memory**.

---

### 🔍 **What is a Page Fault?**

When a process accesses a **virtual address**, the CPU checks the **page table** to see if the corresponding **page is in RAM**.

- If the page **is in RAM**, the access proceeds normally. ✅
    
- If the page **is not in RAM**, a **page fault** occurs. 🚨
    

---

### ⚙️ **Types of Page Faults**

1. **Minor (Soft) Page Fault**:
    
    - The page is not in the current process's memory, but **it is in RAM**, possibly in another process's memory or in the OS’s cache.
        
    - No disk access is required.
        
    - Resolved quickly.
        
2. **Major (Hard) Page Fault**:
    
    - The page is **not in RAM at all**, and the OS must **load it from disk** (e.g., swap space or memory-mapped file).
        
    - Involves **I/O**, so it’s **much slower**.
        
    - Can degrade performance if frequent.
        
3. **Invalid Page Fault**:
    
    - The access is to an **illegal memory address** (e.g., null pointer or freed memory).
        
    - Usually causes the OS to **terminate the process** (e.g., segmentation fault).
        

---

### 📈 Example (Linux/Unix)

You can check the number of page faults a process causes using:

bash

`ps -o min_flt,maj_flt -p <pid>`

Or with `vmstat`:

bash

`vmstat 1`

---

### 🧠 Why Page Faults Exist

Page faults are **not necessarily bad**. They allow:

- Efficient use of physical RAM.
    
- Running programs that are larger than available RAM.
    
- Demand paging (load only needed parts of programs).
    

---

### 🧮 Analogy

Think of virtual memory as a **library index**:

- Your program asks for a book (page).
    
- If it's on the desk (RAM), you hand it over immediately (no fault).
    
- If it’s on the bookshelf (disk), you walk over and fetch it (page fault).
    
- If it’s not in the library (invalid), you throw an error.