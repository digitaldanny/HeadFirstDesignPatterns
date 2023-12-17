# Challenge Prompt

![prompt](/images/pg25-challenge.jpg)

# Solution

Character (abstract class - every character has the below abilities)
- Data: WeaponBehavior weapon (constructor assigns weapon to Knife, BowAndArrow, Axe, Sword)
- Methods (concrete behaviors across all characters)
  - setWeapon
  - fight (if weapon exists, call WeaponBehavior's useWeapon)

WeaponBehavior (interface - each subclass must implement their own behavior)
- Method: useWeapon