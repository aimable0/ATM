# ATM Simulator (C Program)

## 📖 Overview
This is a simple **ATM Simulator** written in C.
It allows a user to:
- Deposit money
- Check account balance
- Withdraw money
- Exit the program

The program demonstrates:
- User input validation
- Modular programming using functions
- Basic control flow (`while`, `switch`)
- Input buffer handling in C

---

## 🚀 Features
1. **Deposit Money**
   - User enters an amount to deposit.
   - Amount must be greater than 0.
   - Balance is updated and displayed.

2. **Check Account Balance**
   - Displays the current balance formatted to 2 decimal places.

3. **Withdraw Money**
   - User enters an amount to withdraw.
   - Checks for:
     - Negative or zero amounts
     - Insufficient funds
   - Updates balance on successful withdrawal.

4. **Exit**
   - Gracefully exits the simulator.

---

## 🛠️ Compilation & Execution

### 1. Compile
Use `gcc` to compile the program:

```bash
gcc atm.c -o atm

- --Run:
./atm


-##Example:

============ ATM (SIMULATOR) ===========

Choose:
  (1) Deposit Money
  (2) Check Account Balance
  (3) Withdraw Money
  (4) Exit

(prompt) Choose action [1-4]: 1

$$ Enter amount to deposit: 100
++ $100.00 deposited successfully!

$$ Current Balance: $100.00

- --File -Structure:
atm.c      # Source code
README.md  # Documentation