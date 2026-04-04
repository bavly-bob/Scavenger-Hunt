# 🕵️ Scavenger Hunt Game – Project Plan

## 👥 Team Roles

| Member       | Responsibilities                                                        |
| ------------ | ----------------------------------------------------------------------- |
| **Bavly**    | Final review, integration, testing lead, bug tracking, progress reports |
| **Member A** | Game logic, movement, rules, target interaction                         |
| **Member B** | GUI, Qt interface, buttons, screens, score display                      |
| **Member C** | OOP structure, classes, inheritance, architecture, module integration   |
| **Member D** | Scoring system, game state, win/lose logic, optional feature            |

---

## 🔍 Review Rule

* At every stage, **one teammate acts as review support**.
* The reviewer should be:

  * The person with the **lightest workload**, or
  * Someone whose task is **already mostly complete**
* No approval without review (except early design stages).

---

# 📅 Project Timeline

---

## 🧩 Phase 1: Design & Structure

### 📆 April 5

* All: Finalize game idea and rules
* Member C: Draft class list (e.g., `Player`, `Target`, `GameManager`)
* Member B: Sketch UI layout (menus, game screen)
* Review Support: ❌ Not needed
* Bavly: Review plan and identify conflicts early

---

### 📆 April 6

* Member C: First UML class diagram
* Member A: Movement logic pseudocode
* Member D: Scoring + win conditions
* Review Support: ❌ Not needed
* Bavly: Ensure rules, classes, and flow are consistent

---

### ⚙️ Interface Definition (MANDATORY)

All members must agree on:

* Function names
* Inputs / outputs
* Data flow
* Function ownership

**Example:**

```cpp
movePlayer(direction)
updateScore(int points)
checkWinCondition()
```

---

### 📆 April 7

* Member B: UI flow (start → gameplay → game over)
* Member C: Final UML update
* All: Agree on final structure
* Review Support: ❌ Not needed
* Bavly: Final approval before implementation

---

## 🏗️ Phase 2: Skeleton Implementation

### 📆 April 8

* Member C: Base classes (`GameObject`, `Player`, `GameManager`)
* Member B: Main window + Qt setup
* Member A: Basic movement structure
* Member D: Score + game state variables
* Review Support: Member D
* Bavly: Ensure clean architecture

---

### 📆 April 9–10

* Member A: Basic player movement
* Member B: Start/Exit buttons
* Member C: Connect classes
* Member D: Basic scoring logic
* Review Support: Member D
* Bavly: Daily reviews

**✅ Main Checks:**

* Movement updates UI
* Score updates correctly
* Game state behaves properly

---

### ⏸️ April 11–12: Break

---

### 🔗 April 13–14: Integration

* All: Connect components
* Focus:

  * Game starts correctly
  * Player movement works
  * UI responds
  * Game state transitions cleanly
* Review Support: Member C
* Bavly: Integration review + bug tracking

---

### 🧪 April 15: TESTING ONLY

🚫 No new features

* Bavly leads testing:

  * Restart spam
  * Invalid inputs
  * Rapid clicks
  * Game-state switching
  * Broken transitions
* Team: Fix assigned bugs only
* Review Support: Member D

---

### 🚀 April 16: Milestone 1 Submission

---

## 🎮 Phase 3: Core Gameplay

### ⚠️ Rule

Every feature must be **implemented AND integrated on the same day**.

---

### 📆 April 17–19

* Member A: Target interaction
* Member D: Win/lose conditions
* Member B: Score display
* Member C: Class cleanup
* Review Support: Member A
* Bavly: Enforce consistency

---

### 📆 April 20–22

* Member A: Movement improvements (boundaries, restrictions)
* Member D: Game over logic
* Member B: Game over screen
* Member C: Code cleanup
* Review Support: Member B
* Bavly: Integration + bug tracking

---

### 🔄 April 23–27: Full Integration

* All: Connect everything

**Focus:**

* Smooth gameplay loop

* No crashes

* No duplicate logic

* Clean transitions

* Review Support: Member C

* Bavly:

  * Resolve conflicts
  * Enforce structure
  * Validate gameplay loop

---

### 🧪 April 28–29: TESTING ONLY

* Bavly:

  * Restart after win/lose
  * Boundary bugs
  * Score errors
  * UI breaks
  * Edge transitions
* Team: Fix bugs only
* Review Support: Member D

---

### 🚀 April 30: Milestone 2 Submission

---

## ✨ Phase 4: Refinement / Optional Features

### 📆 May 1–4

* Member D: Optional feature (difficulty or timer)
* Member B: UI polish
* Member A: Movement smoothness
* Member C: Final OOP improvements
* Bavly: Remove unstable features
* Review Support: Member B

---

### 🧪 May 5–6: TESTING ONLY

* Bavly:

  * Stress testing
  * Edge cases
  * Attempt to break the game
* Team: Fix critical bugs only
* Review Support: Member A

---

### 📌 May 7: Optional Milestone (Instructor-side)

---

## 🏁 Phase 5: Finalization

### 📆 May 8–9

* All: Fix remaining bugs
* Member B: Screenshots
* Member C: Final UML
* Bavly: Write report
* Review Support: Member D

---

### 📆 May 10–11

* All: Prepare demo
* Review Support: Member B

---

### 🧪 May 12–13: FINAL TESTING ONLY

* Bavly:

  * Full demo simulation
  * Restart loops
  * Rapid inputs
  * Edge cases
* Team: Final bug fixes only
* Review Support: Member C

---

### 🎯 May 14: FINAL SUBMISSION

---

# ⚠️ Non-Negotiable Rules

* ❌ No feature development during testing days
* ❌ No unstable features — remove them immediately
* ✅ Simplicity > complexity
* ✅ All tasks must be completed **before testing begins**
* 🔄 Review support role rotates per stage

---

## 💡 Final Note

This plan only works if you actually enforce it.
If you let people “delay integration” or “add quick features during testing,” the whole thing collapses.

---

