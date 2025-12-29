import random

print("\u25CF \u250C \u2500 \u2510 \u2502 \u2514 \u2518")
# ● ┌ ─ ┐ │ └ ┘

"┌───────────┐"
"│           │"
"│           │"
"│           │"
"└───────────┘"

dice_art= {
   1 : ("┌───────────┐",
        "│           │",
        "│     ●     │",
        "│           │",
        "└───────────┘"),
   2 : ("┌───────────┐",
        "│           │",
        "│    ●  ●   │",
        "│           │",
        "└───────────┘") ,# type: ignore
   3 : ("┌───────────┐",
        "│           │",
        "│   ● ● ●   │",
        "│           │",
        "└───────────┘") ,# type: ignore
   4 : ("┌───────────┐",
        "│   ●   ●   │",
        "│   ●   ●   │",
        "│           │",
        "└───────────┘") ,# type: ignore
   5 : ("┌───────────┐",
        "│  ●     ●  │",
        "│     ●     │",
        "│   ●   ●   │",
        "└───────────┘") ,# type: ignore
   6 : ("┌───────────┐",
        "│  ●    ●   │",
        "│  ●    ●   │",
        "│  ●    ●   │",
        "└───────────┘")      # type: ignore
 
           }
dice = []
total = 0
num_of_dice = int(input("How many dice ? : "))

for die in range(num_of_dice) :
   dice.append(random.randint(1,6))


for die in range(num_of_dice) :
   for line in dice_art.get(dice[die]) :
      print(line)

for die in dice :
   total += die

print(f"Total :{total}")