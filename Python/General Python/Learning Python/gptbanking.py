import os
import platform
from colorama import Fore, Style, init

# Initialize colorama
init(autoreset=True)

def clear_screen():
    if platform.system() == "Windows":
        os.system('cls')
    else:
        os.system('clear')

def show_balance(balance):
    print(Fore.CYAN + "***************")
    print(Fore.CYAN + f"Your balance is ${balance:.2f}")
    print(Fore.CYAN + "***************")

def deposit():
    try:
        amount = float(input(Fore.YELLOW + "Enter the amount you want to deposit: "))
        if amount <= 0:
            print(Fore.RED + "Invalid amount. Amount should be greater than 0.")
            return 0
        else:
            print(Fore.GREEN + f"Successfully deposited ${amount:.2f}")
            return amount
    except ValueError:
        print(Fore.RED + "Invalid input. Please enter a valid number.")
        return 0

def withdrawal(balance):
    try:
        amount = float(input(Fore.YELLOW + "Enter the amount you want to withdraw: "))
        if amount <= 0:
            print(Fore.RED + "Invalid amount. Amount should be greater than 0.")
            return 0
        elif amount > balance:
            print(Fore.RED + "Insufficient balance.")
            return 0
        else:
            print(Fore.GREEN + f"Successfully withdrew ${amount:.2f}")
            return amount
    except ValueError:
        print(Fore.RED + "Invalid input. Please enter a valid number.")
        return 0

def main():
    balance = 0
    is_running = True
    while is_running:
        clear_screen()
        print(Fore.MAGENTA + "***************")
        print(Fore.MAGENTA + "Banking Program")
        print(Fore.MAGENTA + "***************")
        print(Fore.BLUE + "1. Show Balance")
        print(Fore.BLUE + "2. Deposit")
        print(Fore.BLUE + "3. Withdrawal")
        print(Fore.BLUE + "4. Exit")

        try:
            choice = int(input(Fore.YELLOW + "Enter your choice (1-4): "))
            match choice:
                case 1:
                    show_balance(balance)
                    input(Fore.WHITE + "\nPress Enter to continue...")
                case 2:
                    balance += deposit()
                    input(Fore.WHITE + "\nPress Enter to continue...")
                case 3:
                    balance -= withdrawal(balance)
                    input(Fore.WHITE + "\nPress Enter to continue...")
                case 4:
                    is_running = False
                case _:
                    print(Fore.RED + "Invalid Choice")
                    input(Fore.WHITE + "\nPress Enter to continue...")
        except ValueError:
            print(Fore.RED + "Invalid input. Please enter a number between 1 and 4.")
            input(Fore.WHITE + "\nPress Enter to continue...")

if __name__ == '__main__':
    main()
    print(Fore.GREEN + "\nThanks, have a nice day!")
