# C Programming Labs

Nine introductory C labs and three larger assignments, covering the language from control flow through pointers and dynamic memory to file and string handling.

**Course:** COM1002 — Introduction to Computer Programming (C)  
**Institution:** İzmir Institute of Technology (IYTE) — İzmir, Türkiye

## Labs

| Folder | Topic |
|---|---|
| `lab-01` | Finding the largest and smallest of a set of values |
| `lab-02` | Formatted output and nested loops — printing a triangle pattern |
| `lab-03` | Characters and ASCII arithmetic |
| `lab-04` | ISBN checksum validation using digit arithmetic |
| `lab-05` | Reading input until a sentinel, then computing an average |
| `lab-06` | 2-D arrays and pointer-to-pointer indexing |
| `lab-07` | Grade classification with counters and branching |
| `lab-08` | Array traversal and in-place transformation |
| `lab-09` | Parallel arrays and string comparison |
| `pa-1` `pa-2` `pa-3` | Larger programming assignments |
| `bash-lab/` | Shell scripting exercises |

## Running

```bash
gcc lab-01/solution.c -o lab1 && ./lab1 < lab-01/input1.txt
```

Each lab folder keeps its own `input*.txt` / `output*.txt` fixtures, so a solution can be
checked against the expected output without the original worksheet. The `myoutput*.txt`
files are the recorded runs.

---

Submitted reports, worksheets and lecture material are archived outside this
repository rather than committed, so the repo stays code-only.
