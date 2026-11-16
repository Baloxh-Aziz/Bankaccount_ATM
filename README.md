# 🏦 Bank Account Class (C++ OOP Basics)

A simple C++ program demonstrating **classes, objects, and constructor
overloading** using a basic `Bankaccount` class.

## 📋 Overview

This program models a bank account with three different ways to create an
account, depending on what information is available at creation time:

1. **Default Constructor** — creates an account with placeholder values (`accountNumber = 12345`, `balance = 0.0`, `accountHolderName = "Unknown"`)
2. **Two-Argument Constructor** — creates an account with a given account number and holder name, starting balance at `0.0`
3. **Three-Argument Constructor** — creates an account with a given account number, starting balance, and holder name

A `displayInfo()` method prints the account's details to the console.

## 🧠 Concepts Demonstrated

| Concept                  | Where                                      |
| ------------------------- | ------------------------------------------- |
| Class definition          | `class Bankaccount { ... }`                |
| Member variables          | `accountNumber`, `balance`, `accountHolderName` |
| Constructor overloading   | Three constructors with different parameter lists |
| Member function           | `displayInfo()`                            |
| Object creation            | `main()` creates three `Bankaccount` objects using each constructor |

## ▶️ Running It

```bash
g++ -std=c++17 -o bankaccount bankaccount_atm_class.cpp
./bankaccount
```

**Output:**

```
Account Holder Name = Unknown
Account Number = 12345
Current Balance = 0

Account Holder Name = CEO
Account Number = 67890
Current Balance = 0

Account Holder Name = HR
Account Number = 13579
Current Balance = 0
```

## 🛠️ Tech Stack

- **C++17**
- Standard Library only (`<iostream>`, `<string>` via `using namespace std;`)

## 🚀 Possible Extensions

- Add `deposit()` and `withdraw()` methods with balance validation
- Prevent negative balances or invalid account numbers
- Add a transaction history log
- Replace `using namespace std;` with explicit `std::` prefixes (better practice for larger projects)
